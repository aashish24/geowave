package mil.nga.giat.geowave.analytics.mapreduce.kde.compare;

import java.io.IOException;

import mil.nga.giat.geowave.analytics.mapreduce.kde.KDEJobRunner;

import org.apache.hadoop.io.DoubleWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.mapreduce.Reducer;

public class ComparisonCellDataReducer extends
		Reducer<DoubleWritable, LongWritable, LongWritable, DoubleWritable>
{
	private long totalKeys = 0;
	private long currentKey = 0;

	private int level;

	@Override
	protected void reduce(
			final DoubleWritable key,
			final Iterable<LongWritable> values,
			final Context context )
			throws IOException,
			InterruptedException {
		// for consistency give all cells with matching weight the same
		// percentile
		final double percentile = (currentKey + 1.0) / totalKeys;
		// calculate weights for this key
		for (final LongWritable v : values) {
			context.write(
					v,
					new DoubleWritable(
							percentile));
			currentKey++;
		}
	}

	@Override
	protected void setup(
			final Context context )
			throws IOException,
			InterruptedException {
		super.setup(context);
		final int minLevel = context.getConfiguration().getInt(
				KDEJobRunner.MIN_LEVEL_KEY,
				1);
		final int maxLevel = context.getConfiguration().getInt(
				KDEJobRunner.MAX_LEVEL_KEY,
				25);
		level = context.getConfiguration().getInt(
				"mapred.task.partition",
				0) + minLevel;
		boolean isWinter = false;
		if (level > maxLevel) {
			level -= ((maxLevel - minLevel) + 1);
			isWinter = true;
		}
		totalKeys = context.getConfiguration().getLong(
				"Entries per level (" + (isWinter ? "winter" : "summer") + ", " + level + ")",
				10);
	}

}
