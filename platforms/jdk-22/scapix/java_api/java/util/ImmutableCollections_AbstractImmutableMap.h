// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLEMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLEMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ImmutableCollections_AbstractImmutableMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ImmutableCollections_AbstractImmutableMap>
{
	static constexpr fixed_string class_name = "java/util/ImmutableCollections$AbstractImmutableMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLEMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLEMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLEMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::ImmutableCollections_AbstractImmutableMap : public jni::object_base<"java/util/ImmutableCollections$AbstractImmutableMap",
	java::util::AbstractMap,
	java::io::Serializable>
{
public:

	void clear() { return call_method<"clear", void>(); }
	jni::ref<java::lang::Object> compute(jni::ref<java::lang::Object> key, jni::ref<java::util::function::BiFunction> rf) { return call_method<"compute", jni::ref<java::lang::Object>>(key, rf); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> key, jni::ref<java::util::function::Function> mf) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(key, mf); }
	jni::ref<java::lang::Object> computeIfPresent(jni::ref<java::lang::Object> key, jni::ref<java::util::function::BiFunction> rf) { return call_method<"computeIfPresent", jni::ref<java::lang::Object>>(key, rf); }
	jni::ref<java::lang::Object> merge(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value, jni::ref<java::util::function::BiFunction> rf) { return call_method<"merge", jni::ref<java::lang::Object>>(key, value, rf); }
	jni::ref<java::lang::Object> put(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"put", jni::ref<java::lang::Object>>(key, value); }
	void putAll(jni::ref<java::util::Map> m) { return call_method<"putAll", void>(m); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(key, value); }
	jni::ref<java::lang::Object> remove(jni::ref<java::lang::Object> key) { return call_method<"remove", jni::ref<java::lang::Object>>(key); }
	jboolean remove(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"remove", jboolean>(key, value); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> value) { return call_method<"replace", jni::ref<java::lang::Object>>(key, value); }
	jboolean replace(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> oldValue, jni::ref<java::lang::Object> newValue) { return call_method<"replace", jboolean>(key, oldValue, newValue); }
	void replaceAll(jni::ref<java::util::function::BiFunction> f) { return call_method<"replaceAll", void>(f); }
	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> key, jni::ref<java::lang::Object> defaultValue) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(key, defaultValue); }

protected:

	ImmutableCollections_AbstractImmutableMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_IMMUTABLECOLLECTIONS_ABSTRACTIMMUTABLEMAP