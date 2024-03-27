// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Collections_CheckedMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Collections_CheckedMap>
{
	static constexpr fixed_string class_name = "java/util/Collections$CheckedMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Collections_CheckedMap : public jni::object_base<"java/util/Collections$CheckedMap",
	java::lang::Object,
	java::util::Map,
	java::io::Serializable>
{
public:

	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean containsKey(jni::ref<java::lang::Object> key) { return call_method<"containsKey", jboolean>(key); }
	jboolean containsValue(jni::ref<java::lang::Object> v) { return call_method<"containsValue", jboolean>(v); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jni::ref<java::lang::Object>>(key); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	void putAll(jni::ref<java::util::Map> t) { return call_method<"putAll", void>(t); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
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

	Collections_CheckedMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_COLLECTIONS_CHECKEDMAP
