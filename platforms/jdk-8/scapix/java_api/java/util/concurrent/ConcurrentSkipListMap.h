// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/concurrent/ConcurrentNavigableMap.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentSkipListMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentSkipListMap>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentSkipListMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::concurrent::ConcurrentNavigableMap, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP

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
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ConcurrentSkipListMap : public jni::object_base<"java/util/concurrent/ConcurrentSkipListMap",
	java::util::AbstractMap,
	java::util::concurrent::ConcurrentNavigableMap,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::concurrent::ConcurrentSkipListMap> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::ConcurrentSkipListMap> new_object(jni::ref<java::util::Comparator> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::ConcurrentSkipListMap> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::ConcurrentSkipListMap> new_object(jni::ref<java::util::SortedMap> p1) { return base_::new_object(p1); }
	jni::ref<java::util::concurrent::ConcurrentSkipListMap> clone() { return call_method<"clone", jni::ref<java::util::concurrent::ConcurrentSkipListMap>>(); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::Function> p2) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> computeIfPresent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"computeIfPresent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> compute(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"compute", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> merge(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"merge", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<java::util::NavigableSet> keySet() { return call_method<"keySet", jni::ref<java::util::NavigableSet>>(); }
	jni::ref<java::util::NavigableSet> navigableKeySet() { return call_method<"navigableKeySet", jni::ref<java::util::NavigableSet>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> descendingMap() { return call_method<"descendingMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(); }
	jni::ref<java::util::NavigableSet> descendingKeySet() { return call_method<"descendingKeySet", jni::ref<java::util::NavigableSet>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jboolean remove(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"remove", jboolean>(p1, p2); }
	jboolean replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"replace", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"replace", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::util::Comparator> comparator() { return call_method<"comparator", jni::ref<java::util::Comparator>>(); }
	jni::ref<java::lang::Object> firstKey() { return call_method<"firstKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> lastKey() { return call_method<"lastKey", jni::ref<java::lang::Object>>(); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> subMap(jni::ref<java::lang::Object> p1, jboolean p2, jni::ref<java::lang::Object> p3, jboolean p4) { return call_method<"subMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2, p3, p4); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> headMap(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"headMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> tailMap(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"tailMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> subMap(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"subMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(p1, p2); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> headMap(jni::ref<java::lang::Object> p1) { return call_method<"headMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(p1); }
	jni::ref<java::util::concurrent::ConcurrentNavigableMap> tailMap(jni::ref<java::lang::Object> p1) { return call_method<"tailMap", jni::ref<java::util::concurrent::ConcurrentNavigableMap>>(p1); }
	jni::ref<java::util::Map_Entry> lowerEntry(jni::ref<java::lang::Object> p1) { return call_method<"lowerEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> lowerKey(jni::ref<java::lang::Object> p1) { return call_method<"lowerKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> floorEntry(jni::ref<java::lang::Object> p1) { return call_method<"floorEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> floorKey(jni::ref<java::lang::Object> p1) { return call_method<"floorKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> ceilingEntry(jni::ref<java::lang::Object> p1) { return call_method<"ceilingEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> ceilingKey(jni::ref<java::lang::Object> p1) { return call_method<"ceilingKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> higherEntry(jni::ref<java::lang::Object> p1) { return call_method<"higherEntry", jni::ref<java::util::Map_Entry>>(p1); }
	jni::ref<java::lang::Object> higherKey(jni::ref<java::lang::Object> p1) { return call_method<"higherKey", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::util::Map_Entry> firstEntry() { return call_method<"firstEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> lastEntry() { return call_method<"lastEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> pollFirstEntry() { return call_method<"pollFirstEntry", jni::ref<java::util::Map_Entry>>(); }
	jni::ref<java::util::Map_Entry> pollLastEntry() { return call_method<"pollLastEntry", jni::ref<java::util::Map_Entry>>(); }
	void forEach(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"forEach", void>(p1); }
	void replaceAll(jni::ref<java::util::function::BiFunction> p1) { return call_method<"replaceAll", void>(p1); }

protected:

	ConcurrentSkipListMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTSKIPLISTMAP
