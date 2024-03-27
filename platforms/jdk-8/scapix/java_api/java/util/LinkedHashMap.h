// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/HashMap.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class LinkedHashMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::LinkedHashMap>
{
	static constexpr fixed_string class_name = "java/util/LinkedHashMap";
	using base_classes = std::tuple<scapix::java_api::java::util::HashMap, scapix::java_api::java::util::Map>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::LinkedHashMap : public jni::object_base<"java/util/LinkedHashMap",
	java::util::HashMap,
	java::util::Map>
{
public:

	static jni::ref<java::util::LinkedHashMap> new_object(jint p1, jfloat p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::LinkedHashMap> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::util::LinkedHashMap> new_object() { return base_::new_object(); }
	static jni::ref<java::util::LinkedHashMap> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::LinkedHashMap> new_object(jint p1, jfloat p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(p1, p2); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	void forEach(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"forEach", void>(p1); }
	void replaceAll(jni::ref<java::util::function::BiFunction> p1) { return call_method<"replaceAll", void>(p1); }

protected:

	LinkedHashMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LINKEDHASHMAP