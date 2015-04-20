package mil.nga.giat.geowave.store.data.field.base;

import java.nio.ByteBuffer;

import mil.nga.giat.geowave.index.ByteArrayId;
import mil.nga.giat.geowave.store.data.field.FieldReader;
import mil.nga.giat.geowave.store.data.field.FieldSerializationProviderSpi;
import mil.nga.giat.geowave.store.data.field.FieldWriter;

public class DoubleSerializationProvider implements
		FieldSerializationProviderSpi<Double>
{
	@Override
	public FieldReader<Double> getFieldReader() {
		return new DoubleReader();
	}

	@Override
	public FieldWriter<Object, Double> getFieldWriter() {
		return new DoubleWriter();
	}

	protected static class DoubleReader implements
			FieldReader<Double>
	{
		@Override
		public Double readField(
				final byte[] fieldData ) {
			if ((fieldData == null) || (fieldData.length < 8)) {
				return null;
			}
			return ByteBuffer.wrap(
					fieldData).getDouble();
		}
	}

	protected static class DoubleWriter implements
			FieldWriter<Object, Double>
	{
		@Override
		public byte[] writeField(
				final Double fieldValue ) {
			final ByteBuffer buf = ByteBuffer.allocate(8);
			buf.putDouble(fieldValue);
			return buf.array();
		}

		@Override
		public byte[] getVisibility(
				final Object rowValue,
				final ByteArrayId fieldId,
				final Double fieldValue ) {
			return new byte[] {};
		}
	}
}
