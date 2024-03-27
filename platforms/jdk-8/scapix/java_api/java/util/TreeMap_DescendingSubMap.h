// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TreeMap_NavigableSubMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_DESCENDINGSUBMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_DESCENDINGSUBMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap_DescendingSubMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap_DescendingSubMap>
{
	static constexpr fixed_string class_name = "java/util/TreeMap$DescendingSubMap";
	using base_classes = std::tuple<scapix::java_api::java::util::TreeMap_NavigableSubMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_DESCENDINGSUBMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_DESCENDINGSUBMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_DESCENDINGSUBMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/NavigableMap.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::TreeMap_DescendingSubMap : public jni::object_base<"java/util/TreeMap$DescendingSubMap",
	java::util::TreeMap_NavigableSubMap>
{
public:

	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::NavigableMap> subMap(jni::ref<java::lang::Object> p1, jboolean p2, jni::ref<java::lang::Object> p3, jboolean p4) { return call_method<"subMap", jni::ref<java::util::NavigableMap>>(p1, p2, p3, p4); }
	jni::ref<java::util::NavigableMap> headMap(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"headMap", jni::ref<java::util::NavigableMap>>(p1, p2); }
	jni::ref<java::util::NavigableMap> tailMap(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"tailMap", jni::ref<java::util::NavigableMap>>(p1, p2); }
	jni::ref<java::util::NavigableMap> descendingMap() { return call_method<"descendingMap", jni::ref<java::util::NavigableMap>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	TreeMap_DescendingSubMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_DESCENDINGSUBMAP
