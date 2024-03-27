// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/SortedMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ReverseOrderSortedMapView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ReverseOrderSortedMapView>
{
	static constexpr fixed_string class_name = "java/util/ReverseOrderSortedMapView";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::SortedMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW)
#define SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ReverseOrderSortedMapView : public jni::object_base<"java/util/ReverseOrderSortedMapView",
	java::util::AbstractMap,
	java::util::SortedMap>
{
public:

	static jni::ref<java::util::SortedMap> of(jni::ref<java::util::SortedMap> map) { return call_static_method<"of", jni::ref<java::util::SortedMap>>(map); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void clear() { return call_method<"clear", void>(); }
	jboolean containsKey(jni::ref<java::lang::Object> key) { return call_method<"containsKey", jboolean>(key); }
	jboolean containsValue(jni::ref<java::lang::Object> value) { return call_method<"containsValue", jboolean>(value); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	void putAll(jni::ref<java::util::Map> m) { return call_method<"putAll", void>(m); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jni::ref<java::lang::Object>>(key); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::SortedMap> reversed() { return call_method<"reversed", jni::ref<java::util::SortedMap>>(); }
	jni::ref<java::lang::Object> firstKey() { return call_method<"firstKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastKey() { return call_method<"lastKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::Map_Entry> firstEntry() { return call_method<"firstEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> lastEntry() { return call_method<"lastEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> pollFirstEntry() { return call_method<"pollFirstEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> pollLastEntry() { return call_method<"pollLastEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::lang::Object> putFirst(jni::ref<java::lang::Object> k, jni::ref<java::lang::Object> v) { return call_method<"putFirst", jni::ref<java::lang::Object>>(k, v); }
	jni::ref<java::lang::Object> putLast(jni::ref<java::lang::Object> k, jni::ref<java::lang::Object> v) { return call_method<"putLast", jni::ref<java::lang::Object>>(k, v); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::util::SortedMap> subMap(jni::ref<java::lang::Object> fromKey, jni::ref<java::lang::Object> toKey) { return call_method<"subMap", jni::ref<java::util::SortedMap>>(fromKey, toKey); }
	jni::ref<java::util::SortedMap> headMap(jni::ref<java::lang::Object> toKey) { return call_method<"headMap", jni::ref<java::util::SortedMap>>(toKey); }
	jni::ref<java::util::SortedMap> tailMap(jni::ref<java::lang::Object> fromKey) { return call_method<"tailMap", jni::ref<java::util::SortedMap>>(fromKey); }

protected:

	ReverseOrderSortedMapView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_REVERSEORDERSORTEDMAPVIEW
