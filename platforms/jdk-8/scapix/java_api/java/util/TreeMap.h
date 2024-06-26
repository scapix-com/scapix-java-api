// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/NavigableMap.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap>
{
	static constexpr fixed_string class_name = "java/util/TreeMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::NavigableMap, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#include <scapix/java_api/java/util/NavigableSet.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/SortedMap.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::TreeMap : public jni::object_base<"java/util/TreeMap",
	java::util::AbstractMap,
	java::util::NavigableMap,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::TreeMap> new_object() { return base_::new_object(); }
	static jni::ref<java::util::TreeMap> new_object(jni::ref<java::util::Comparator> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::TreeMap> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::TreeMap> new_object(jni::ref<java::util::SortedMap> p1) { return base_::new_object(p1); }
	jint size() { return call_method<"size", jint>(); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::lang::Object> firstKey() { return call_method<"firstKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastKey() { return call_method<"lastKey", jni::ref<java::lang::Object>>(); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::Map_Entry> firstEntry() { return call_method<"firstEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> lastEntry() { return call_method<"lastEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> pollFirstEntry() { return call_method<"pollFirstEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> pollLastEntry() { return call_method<"pollLastEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> lowerEntry(jni::ref<java::lang::Object> p1) { return call_method<"lowerEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> lowerKey(jni::ref<java::lang::Object> p1) { return call_method<"lowerKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> floorEntry(jni::ref<java::lang::Object> p1) { return call_method<"floorEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> floorKey(jni::ref<java::lang::Object> p1) { return call_method<"floorKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> ceilingEntry(jni::ref<java::lang::Object> p1) { return call_method<"ceilingEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> ceilingKey(jni::ref<java::lang::Object> p1) { return call_method<"ceilingKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> higherEntry(jni::ref<java::lang::Object> p1) { return call_method<"higherEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> higherKey(jni::ref<java::lang::Object> p1) { return call_method<"higherKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::NavigableSet> navigableKeySet() { return call_method<"navigableKeySet", jni::ref<java::util::NavigableSet>>(); }
	jni::ref<java::util::NavigableSet> descendingKeySet() { return call_method<"descendingKeySet", jni::ref<java::util::NavigableSet>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::NavigableMap> descendingMap() { return call_method<"descendingMap", jni::ref<java::util::NavigableMap>>(); }
	jni::ref<java::util::NavigableMap> subMap(jni::ref<java::lang::Object> p1, jboolean p2, jni::ref<java::lang::Object> p3, jboolean p4) { return call_method<"subMap", jni::ref<java::util::NavigableMap>>(p1, p2, p3, p4); }
	jni::ref<java::util::NavigableMap> headMap(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"headMap", jni::ref<java::util::NavigableMap>>(p1, p2); }
	jni::ref<java::util::NavigableMap> tailMap(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"tailMap", jni::ref<java::util::NavigableMap>>(p1, p2); }
	jni::ref<java::util::SortedMap> subMap(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"subMap", jni::ref<java::util::SortedMap>>(p1, p2); }
	jni::ref<java::util::SortedMap> headMap(jni::ref<java::lang::Object> p1) { return call_method<"headMap", jni::ref<java::util::SortedMap>>(p1); }
	jni::ref<java::util::SortedMap> tailMap(jni::ref<java::lang::Object> p1) { return call_method<"tailMap", jni::ref<java::util::SortedMap>>(p1); }
	jboolean replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"replace", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"replace", jni::ref<java::lang::Object>>(p1, p2); }
	void forEach(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"forEach", void>(p1); }
	void replaceAll(jni::ref<java::util::function::BiFunction> p1) { return call_method<"replaceAll", void>(p1); }

protected:

	TreeMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP
