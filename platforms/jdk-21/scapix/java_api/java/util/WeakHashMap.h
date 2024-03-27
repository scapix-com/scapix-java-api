// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class WeakHashMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::WeakHashMap>
{
	static constexpr fixed_string class_name = "java/util/WeakHashMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::Map>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::WeakHashMap : public jni::object_base<"java/util/WeakHashMap",
	java::util::AbstractMap,
	java::util::Map>
{
public:

	static jni::ref<java::util::WeakHashMap> new_object(jint initialCapacity, jfloat loadFactor) { return base_::new_object(initialCapacity, loadFactor); }
	static jni::ref<java::util::WeakHashMap> new_object(jint initialCapacity) { return base_::new_object(initialCapacity); }
	static jni::ref<java::util::WeakHashMap> new_object() { return base_::new_object(); }
	static jni::ref<java::util::WeakHashMap> new_object(jni::ref<java::util::Map> m) { return base_::new_object(m); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> key) { return call_method<"get", jni::ref<java::lang::Object>>(key); }
	jboolean containsKey(jni::ref<java::lang::Object> key) { return call_method<"containsKey", jboolean>(key); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	void putAll(jni::ref<java::util::Map> m) { return call_method<"putAll", void>(m); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jni::ref<java::lang::Object>>(key); }
	void clear() { return call_method<"clear", void>(); }
	jboolean containsValue(jni::ref<java::lang::Object> value) { return call_method<"containsValue", jboolean>(value); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	void forEach(jni::ref<java::util::function::BiConsumer> action) { return call_method<"forEach", void>(action); }
	void replaceAll(jni::ref<java::util::function::BiFunction> function) { return call_method<"replaceAll", void>(function); }
	static jni::ref<java::util::WeakHashMap> newWeakHashMap(jint numMappings) { return call_static_method<"newWeakHashMap", jni::ref<java::util::WeakHashMap>>(numMappings); }

protected:

	WeakHashMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_WEAKHASHMAP
