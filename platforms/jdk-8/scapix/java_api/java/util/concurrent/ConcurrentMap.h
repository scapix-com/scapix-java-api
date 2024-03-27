// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTMAP_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentMap>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Map>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTMAP)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/BiConsumer.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::concurrent::ConcurrentMap : public jni::object_base<"java/util/concurrent/ConcurrentMap",
	java::lang::Object,
	java::util::Map>
{
public:

	jni::ref<java::lang::Object> getOrDefault(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"getOrDefault", jni::ref<java::lang::Object>>(p1, p2); }
	void forEach(jni::ref<java::util::function::BiConsumer> p1) { return call_method<"forEach", void>(p1); }
	jni::ref<java::lang::Object> putIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"putIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jboolean remove(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"remove", jboolean>(p1, p2); }
	jboolean replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"replace", jboolean>(p1, p2, p3); }
	jni::ref<java::lang::Object> replace(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"replace", jni::ref<java::lang::Object>>(p1, p2); }
	void replaceAll(jni::ref<java::util::function::BiFunction> p1) { return call_method<"replaceAll", void>(p1); }
	jni::ref<java::lang::Object> computeIfAbsent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::Function> p2) { return call_method<"computeIfAbsent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> computeIfPresent(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"computeIfPresent", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> compute(jni::ref<java::lang::Object> p1, jni::ref<java::util::function::BiFunction> p2) { return call_method<"compute", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> merge(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::function::BiFunction> p3) { return call_method<"merge", jni::ref<java::lang::Object>>(p1, p2, p3); }

protected:

	ConcurrentMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTMAP
