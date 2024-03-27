// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_MAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_MAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Map; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Map>
{
	static constexpr fixed_string class_name = "java/util/Map";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_MAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_MAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Map : public jni::object_base<"java/util/Map",
	java::lang::Object>
{
public:

	using Entry = Map_Entry;

	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jboolean containsValue(jni::ref<java::lang::Object> p1) { return call_method<"containsValue", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	void putAll(jni::ref<java::util::Map> p1) { return call_method<"putAll", void>(p1); }
	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::util::Set> keySet() { return call_method<"keySet", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Collection> values() { return call_method<"values", jni::ref<java::util::Collection>>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(p1, p2); }
	void forEach(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"forEach", void>(p1); }
	void replaceAll(jni::ref<java::util::function::BiFunction> p1) { return call_method<"replaceAll", void>(p1); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jboolean remove(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"remove", jboolean>(p1, p2); }
	jboolean replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"replace", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"replace", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::Function> p2) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> computeIfPresent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"computeIfPresent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> compute(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"compute", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> merge(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"merge", jni::ref<java::lang::Object>>(p1, p2, p3); }

protected:

	Map(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_MAP
