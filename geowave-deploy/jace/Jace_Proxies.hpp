#ifndef JACE_PROXIES_HPP
#define JACE_PROXIES_HPP

#include "jace/proxy/types/JBoolean.h"
#include "jace/proxy/types/JDouble.h"
#include "jace/proxy/types/JFloat.h"
#include "jace/proxy/types/JInt.h"
#include "jace/proxy/types/JLong.h"
#include "jace/proxy/types/JShort.h"

#include "jace/proxy/java/lang/Class.h"
#include "jace/proxy/java/lang/Double.h"
#include "jace/proxy/java/lang/Float.h"
#include "jace/proxy/java/lang/Integer.h"
#include "jace/proxy/java/lang/Long.h"
#include "jace/proxy/java/lang/Number.h"
#include "jace/proxy/java/lang/Object.h"
#include "jace/proxy/java/lang/Short.h"
#include "jace/proxy/java/lang/String.h"
#include "jace/proxy/java/util/ArrayList.h"
#include "jace/proxy/java/util/Date.h"
#include "jace/proxy/java/util/Iterator.h"
#include "jace/proxy/java/util/List.h"
#include "jace/proxy/java/util/UUID.h"

#include "jace/proxy/org/apache/accumulo/core/client/AccumuloException.h"
#include "jace/proxy/org/apache/accumulo/core/client/AccumuloSecurityException.h"

#include "jace/proxy/org/geotools/data/DataUtilities.h"
#include "jace/proxy/org/geotools/data/simple/SimpleFeatureCollection.h"
#include "jace/proxy/org/geotools/data/simple/SimpleFeatureIterator.h"
#include "jace/proxy/org/geotools/feature/DefaultFeatureCollection.h"
#include "jace/proxy/org/geotools/feature/simple/SimpleFeatureBuilder.h"
#include "jace/proxy/org/geotools/feature/simple/SimpleFeatureTypeBuilder.h"
#include "jace/proxy/org/geotools/filter/text/cql2/CQLException.h"
#include "jace/proxy/org/geotools/filter/text/ecql/ECQL.h"
#include "jace/proxy/org/geotools/geometry/jts/JTSFactoryFinder.h"

#include "jace/proxy/com/vividsolutions/jts/geom/Coordinate.h"
#include "jace/proxy/com/vividsolutions/jts/geom/Envelope.h"
#include "jace/proxy/com/vividsolutions/jts/geom/Geometry.h"
#include "jace/proxy/com/vividsolutions/jts/geom/GeometryCollection.h"
#include "jace/proxy/com/vividsolutions/jts/geom/GeometryFactory.h"
#include "jace/proxy/com/vividsolutions/jts/geom/LineString.h"
#include "jace/proxy/com/vividsolutions/jts/geom/MultiLineString.h"
#include "jace/proxy/com/vividsolutions/jts/geom/MultiPoint.h"
#include "jace/proxy/com/vividsolutions/jts/geom/MultiPolygon.h"
#include "jace/proxy/com/vividsolutions/jts/geom/Point.h"
#include "jace/proxy/com/vividsolutions/jts/geom/Polygon.h"

#include "jace/proxy/org/opengis/feature/simple/SimpleFeature.h"
#include "jace/proxy/org/opengis/feature/simple/SimpleFeatureType.h"
#include "jace/proxy/org/opengis/feature/type/AttributeDescriptor.h"
#include "jace/proxy/org/opengis/feature/type/AttributeType.h"
#include "jace/proxy/org/opengis/feature/type/GeometryDescriptor.h"
#include "jace/proxy/org/opengis/feature/type/GeometryType.h"
#include "jace/proxy/org/opengis/feature/type/Name.h"
#include "jace/proxy/org/opengis/filter/Filter.h"

#include "jace/proxy/mil/nga/giat/geowave/accumulo/AccumuloDataStore.h"
#include "jace/proxy/mil/nga/giat/geowave/accumulo/AccumuloIndexWriter.h"
#include "jace/proxy/mil/nga/giat/geowave/accumulo/BasicAccumuloOperations.h"
#include "jace/proxy/mil/nga/giat/geowave/accumulo/metadata/AccumuloAdapterStore.h"
#include "jace/proxy/mil/nga/giat/geowave/accumulo/metadata/AccumuloDataStatisticsStore.h"
#include "jace/proxy/mil/nga/giat/geowave/index/ByteArrayId.h"
#include "jace/proxy/mil/nga/giat/geowave/store/CloseableIterator.h"
#include "jace/proxy/mil/nga/giat/geowave/store/GeometryUtils.h"
#include "jace/proxy/mil/nga/giat/geowave/store/adapter/DataAdapter.h"
#include "jace/proxy/mil/nga/giat/geowave/store/adapter/WritableDataAdapter.h"
#include "jace/proxy/mil/nga/giat/geowave/store/adapter/statistics/BoundingBoxDataStatistics.h"
#include "jace/proxy/mil/nga/giat/geowave/store/adapter/statistics/DataStatistics.h"
#include "jace/proxy/mil/nga/giat/geowave/store/adapter/statistics/StatisticalDataAdapter.h"
#include "jace/proxy/mil/nga/giat/geowave/store/index/Index.h"
#include "jace/proxy/mil/nga/giat/geowave/store/index/IndexType_JaceIndexType.h"
#include "jace/proxy/mil/nga/giat/geowave/store/query/Query.h"
#include "jace/proxy/mil/nga/giat/geowave/store/query/SpatialQuery.h"
#include "jace/proxy/mil/nga/giat/geowave/vector/VectorDataStore.h"
#include "jace/proxy/mil/nga/giat/geowave/vector/adapter/FeatureCollectionDataAdapter.h"
#include "jace/proxy/mil/nga/giat/geowave/vector/adapter/FeatureDataAdapter.h"
#include "jace/proxy/mil/nga/giat/geowave/vector/plugin/ExtractGeometryFilterVisitor.h"
#include "jace/proxy/mil/nga/giat/geowave/vector/stats/FeatureBoundingBoxStatistics.h"

#endif // JACE_PROXIES_HPP
