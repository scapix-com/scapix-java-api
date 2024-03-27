// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/Dictionary.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_HASHTABLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Hashtable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Hashtable>
{
	static constexpr fixed_string class_name = "java/util/Hashtable";
	using base_classes = std::tuple<scapix::java_api::java::util::Dictionary, scapix::java_api::java::util::Map, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_HASHTABLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_HASHTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Hashtable : public jni::object_base<"java/util/Hashtable",
	java::util::Dictionary,
	java::util::Map,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::Hashtable> new_object(jint initialCapacity, jfloat loadFactor) { return base_::new_object(initialCapacity, loadFactor); }
	static jni::ref<java::util::Hashtable> new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
	static jni::ref<java::util::Hashtable> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Hashtable> new_object(jni::ref<java::util::Map> t) { return base_::new_object(t); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::util::Enumeration> keys() { return call_method<"keys", jni::ref<java::util::Enumeration>>(); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	jboolean contains(jni::ref<java::lang::Object> value) { return call_method<"contains", jboolean>(value); }
	jboolean containsValue(jni::ref<java::lang::Object> value) { return call_method<"containsValue", jboolean>(value); }
	jboolean containsKey(jni::ref<java::lang::Object> key) { return call_method<"containsKey", jboolean>(key); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jni::ref<java::lang::Object>>(key); }
	void putAll(jni::ref<java::util::Map> t) { return call_method<"putAll", void>(t); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> defaultValue) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(key, defaultValue); }
	void forEach(jni::ref<java::util::function::BiConsumer> action) { return call_method<"forEach", void>(action); }
	void replaceAll(jni::ref<java::util::function::BiFunction> function) { return call_method<"replaceAll", void>(function); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(key, value); }
	jboolean remove(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"remove", jboolean>(key, value); }
	jboolean replace(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> oldValue, jni::ref<java::lang::Object> newValue) { return call_method<"replace", jboolean>(key, oldValue, newValue); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"replace", jni::ref<java::lang::Object>>(key, value); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> key, jni::ref<java::util::function::Function> mappingFunction) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(key, mappingFunction); }
	jni::ref<java::lang::Object> computeIfPresent(jni::ref<java::lang::Object> key, jni::ref<java::util::function::BiFunction> remappingFunction) { return call_method<"computeIfPresent", jni::ref<java::lang::Object>>(key, remappingFunction); }
	jni::ref<java::lang::Object> compute(jni::ref<java::lang::Object> key, jni::ref<java::util::function::BiFunction> remappingFunction) { return call_method<"compute", jni::ref<java::lang::Object>>(key, remappingFunction); }
	jni::ref<java::lang::Object> merge(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value, jni::ref<java::util::function::BiFunction> remappingFunction) { return call_method<"merge", jni::ref<java::lang::Object>>(key, value, remappingFunction); }

protected:

	Hashtable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_HASHTABLE