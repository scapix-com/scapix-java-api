// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERERS_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Gatherers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Gatherers>
{
	static constexpr fixed_string class_name = "java/util/stream/Gatherers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERERS)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/stream/Gatherer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Gatherers : public jni::object_base<"java/util/stream/Gatherers",
	java::lang::Object>
{
public:

	static jni::ref<java::util::stream::Gatherer> windowFixed(jint windowSize) { return call_static_method<"windowFixed", jni::ref<java::util::stream::Gatherer>>(windowSize); }
	static jni::ref<java::util::stream::Gatherer> windowSliding(jint windowSize) { return call_static_method<"windowSliding", jni::ref<java::util::stream::Gatherer>>(windowSize); }
	static jni::ref<java::util::stream::Gatherer> fold(jni::ref<java::util::function::Supplier> initial, jni::ref<java::util::function::BiFunction> folder) { return call_static_method<"fold", jni::ref<java::util::stream::Gatherer>>(initial, folder); }
	static jni::ref<java::util::stream::Gatherer> scan(jni::ref<java::util::function::Supplier> initial, jni::ref<java::util::function::BiFunction> scanner) { return call_static_method<"scan", jni::ref<java::util::stream::Gatherer>>(initial, scanner); }
	static jni::ref<java::util::stream::Gatherer> mapConcurrent(jint maxConcurrency, jni::ref<java::util::function::Function> mapper) { return call_static_method<"mapConcurrent", jni::ref<java::util::stream::Gatherer>>(maxConcurrency, mapper); }

protected:

	Gatherers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERERS
