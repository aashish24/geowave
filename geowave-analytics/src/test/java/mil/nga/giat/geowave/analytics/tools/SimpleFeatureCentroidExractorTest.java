package mil.nga.giat.geowave.analytics.tools;

import static org.junit.Assert.assertEquals;

import java.util.List;
import java.util.UUID;

import mil.nga.giat.geowave.analytics.extract.SimpleFeatureCentroidExtractor;

import org.geotools.data.DataUtilities;
import org.geotools.feature.SchemaException;
import org.geotools.feature.simple.SimpleFeatureBuilder;
import org.junit.Test;
import org.opengis.feature.simple.SimpleFeature;
import org.opengis.feature.simple.SimpleFeatureType;
import org.opengis.feature.type.AttributeDescriptor;

import com.vividsolutions.jts.geom.Coordinate;
import com.vividsolutions.jts.geom.GeometryFactory;
import com.vividsolutions.jts.geom.Point;

public class SimpleFeatureCentroidExractorTest
{

	SimpleFeatureCentroidExtractor extractor = new SimpleFeatureCentroidExtractor();

	@Test
	public void test()
			throws SchemaException {
		SimpleFeatureType schema = DataUtilities.createType(
				"testGeo",
				"location:Point:srid=4326,name:String");
		List<AttributeDescriptor> descriptors = schema.getAttributeDescriptors();
		Object[] defaults = new Object[descriptors.size()];
		int p = 0;
		for (AttributeDescriptor descriptor : descriptors) {
			defaults[p++] = descriptor.getDefaultValue();
		}

		SimpleFeature feature = SimpleFeatureBuilder.build(
				schema,
				defaults,
				UUID.randomUUID().toString());
		final GeometryFactory geoFactory = new GeometryFactory();

		feature.setAttribute(
				"location",
				geoFactory.createPoint(new Coordinate(
						-45,
						45)));

		Point point = extractor.getCentroid(feature);
		assertEquals(
				4326,
				point.getSRID());
	}
}
