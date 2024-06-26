// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/SortedMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_SUBMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_SUBMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ReverseOrderSortedMapView_Submap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ReverseOrderSortedMapView_Submap>
{
	static constexpr fixed_string class_name = "java/util/ReverseOrderSortedMapView$Submap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::SortedMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_SUBMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_SUBMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_SUBMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ReverseOrderSortedMapView_Submap : public jni::object_base<"java/util/ReverseOrderSortedMapView$Submap",
	java::util::AbstractMap,
	java::util::SortedMap>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> o) { return call_method<"remove", jni::ref<java::lang::Object>>(o); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::lang::Object> firstKey() { return call_method<"firstKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastKey() { return call_method<"lastKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::SortedMap> subMap(jni::ref<java::lang::Object> from, jni::ref<java::lang::Object> to) { return call_method<"subMap", jni::ref<java::util::SortedMap>>(from, to); }
	jni::ref<java::util::SortedMap> headMap(jni::ref<java::lang::Object> to) { return call_method<"headMap", jni::ref<java::util::SortedMap>>(to); }
	jni::ref<java::util::SortedMap> tailMap(jni::ref<java::lang::Object> from) { return call_method<"tailMap", jni::ref<java::util::SortedMap>>(from); }

protected:

	ReverseOrderSortedMapView_Submap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_SUBMAP
