// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/concurrent/ConcurrentMap.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentHashMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentHashMap>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentHashMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::concurrent::ConcurrentMap, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/concurrent/ConcurrentHashMap_KeySetView.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/DoubleBinaryOperator.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/IntBinaryOperator.h>
#include <scapix/java_api/java/util/function/LongBinaryOperator.h>
#include <scapix/java_api/java/util/function/ToDoubleBiFunction.h>
#include <scapix/java_api/java/util/function/ToDoubleFunction.h>
#include <scapix/java_api/java/util/function/ToIntBiFunction.h>
#include <scapix/java_api/java/util/function/ToIntFunction.h>
#include <scapix/java_api/java/util/function/ToLongBiFunction.h>
#include <scapix/java_api/java/util/function/ToLongFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ConcurrentHashMap : public jni::object_base<"java/util/concurrent/ConcurrentHashMap",
	java::util::AbstractMap,
	java::util::concurrent::ConcurrentMap,
	java::io::Serializable>
{
public:

	using KeySetView = ConcurrentHashMap_KeySetView;

	static jni::ref<java::util::concurrent::ConcurrentHashMap> new_object() { return base_::new_object(); }
	static jni::ref<java::util::concurrent::ConcurrentHashMap> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::ConcurrentHashMap> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::concurrent::ConcurrentHashMap> new_object(jint p1, jfloat p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::concurrent::ConcurrentHashMap> new_object(jint p1, jfloat p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView> keySet() { return call_method<"keySet", jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jboolean remove(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"remove", jboolean>(p1, p2); }
	jboolean replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"replace", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"replace", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(p1, p2); }
	void forEach(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"forEach", void>(p1); }
	void replaceAll(jni::ref<java::util::function::BiFunction> p1) { return call_method<"replaceAll", void>(p1); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::Function> p2) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> computeIfPresent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"computeIfPresent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> compute(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"compute", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> merge(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"merge", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::util::Enumeration> keys() { return call_method<"keys", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	jlong mappingCount() { return call_method<"mappingCount", jlong>(); }
	static jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView> newKeySet() { return call_static_method<"newKeySet", jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView>>(); }
	static jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView> newKeySet(jint p1) { return call_static_method<"newKeySet", jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView>>(p1); }
	jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView> keySet(jni::ref<java::lang::Object> p1) { return call_method<"keySet", jni::ref<java::util::concurrent::ConcurrentHashMap_KeySetView>>(p1); }
	void forEach(jlong p1, jni::ref<java::util::function::BiConsumer> p2) { return call_method<"forEach", void>(p1, p2); }
	void forEach(jlong p1, jni::ref<java::util::function::BiFunction> p2, jni::ref<java::util::function::Consumer> p3) { return call_method<"forEach", void>(p1, p2, p3); }
	jni::ref<java::lang::Object> search(jlong p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"search", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> reduce(jlong p1, jni::ref<java::util::function::BiFunction> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"reduce", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jdouble reduceToDouble(jlong p1, jni::ref<java::util::function::ToDoubleBiFunction> p2, jdouble p3, jni::ref<java::util::function::DoubleBinaryOperator> p4) { return call_method<"reduceToDouble", jdouble>(p1, p2, p3, p4); }
	jlong reduceToLong(jlong p1, jni::ref<java::util::function::ToLongBiFunction> p2, jlong p3, jni::ref<java::util::function::LongBinaryOperator> p4) { return call_method<"reduceToLong", jlong>(p1, p2, p3, p4); }
	jint reduceToInt(jlong p1, jni::ref<java::util::function::ToIntBiFunction> p2, jint p3, jni::ref<java::util::function::IntBinaryOperator> p4) { return call_method<"reduceToInt", jint>(p1, p2, p3, p4); }
	void forEachKey(jlong p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"forEachKey", void>(p1, p2); }
	void forEachKey(jlong p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::Consumer> p3) { return call_method<"forEachKey", void>(p1, p2, p3); }
	jni::ref<java::lang::Object> searchKeys(jlong p1, jni::ref<java::util::function::Function> p2) { return call_method<"searchKeys", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> reduceKeys(jlong p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"reduceKeys", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> reduceKeys(jlong p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"reduceKeys", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jdouble reduceKeysToDouble(jlong p1, jni::ref<java::util::function::ToDoubleFunction> p2, jdouble p3, jni::ref<java::util::function::DoubleBinaryOperator> p4) { return call_method<"reduceKeysToDouble", jdouble>(p1, p2, p3, p4); }
	jlong reduceKeysToLong(jlong p1, jni::ref<java::util::function::ToLongFunction> p2, jlong p3, jni::ref<java::util::function::LongBinaryOperator> p4) { return call_method<"reduceKeysToLong", jlong>(p1, p2, p3, p4); }
	jint reduceKeysToInt(jlong p1, jni::ref<java::util::function::ToIntFunction> p2, jint p3, jni::ref<java::util::function::IntBinaryOperator> p4) { return call_method<"reduceKeysToInt", jint>(p1, p2, p3, p4); }
	void forEachValue(jlong p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"forEachValue", void>(p1, p2); }
	void forEachValue(jlong p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::Consumer> p3) { return call_method<"forEachValue", void>(p1, p2, p3); }
	jni::ref<java::lang::Object> searchValues(jlong p1, jni::ref<java::util::function::Function> p2) { return call_method<"searchValues", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> reduceValues(jlong p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"reduceValues", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> reduceValues(jlong p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"reduceValues", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jdouble reduceValuesToDouble(jlong p1, jni::ref<java::util::function::ToDoubleFunction> p2, jdouble p3, jni::ref<java::util::function::DoubleBinaryOperator> p4) { return call_method<"reduceValuesToDouble", jdouble>(p1, p2, p3, p4); }
	jlong reduceValuesToLong(jlong p1, jni::ref<java::util::function::ToLongFunction> p2, jlong p3, jni::ref<java::util::function::LongBinaryOperator> p4) { return call_method<"reduceValuesToLong", jlong>(p1, p2, p3, p4); }
	jint reduceValuesToInt(jlong p1, jni::ref<java::util::function::ToIntFunction> p2, jint p3, jni::ref<java::util::function::IntBinaryOperator> p4) { return call_method<"reduceValuesToInt", jint>(p1, p2, p3, p4); }
	void forEachEntry(jlong p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"forEachEntry", void>(p1, p2); }
	void forEachEntry(jlong p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::Consumer> p3) { return call_method<"forEachEntry", void>(p1, p2, p3); }
	jni::ref<java::lang::Object> searchEntries(jlong p1, jni::ref<java::util::function::Function> p2) { return call_method<"searchEntries", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::util::Map_Entry> reduceEntries(jlong p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"reduceEntries", jni::ref<java::util::Map_Entry>>(p1, p2); }
	jni::ref<java::lang::Object> reduceEntries(jlong p1, jni::ref<java::util::function::Function> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"reduceEntries", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jdouble reduceEntriesToDouble(jlong p1, jni::ref<java::util::function::ToDoubleFunction> p2, jdouble p3, jni::ref<java::util::function::DoubleBinaryOperator> p4) { return call_method<"reduceEntriesToDouble", jdouble>(p1, p2, p3, p4); }
	jlong reduceEntriesToLong(jlong p1, jni::ref<java::util::function::ToLongFunction> p2, jlong p3, jni::ref<java::util::function::LongBinaryOperator> p4) { return call_method<"reduceEntriesToLong", jlong>(p1, p2, p3, p4); }
	jint reduceEntriesToInt(jlong p1, jni::ref<java::util::function::ToIntFunction> p2, jint p3, jni::ref<java::util::function::IntBinaryOperator> p4) { return call_method<"reduceEntriesToInt", jint>(p1, p2, p3, p4); }

protected:

	ConcurrentHashMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP
