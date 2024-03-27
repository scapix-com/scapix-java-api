// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Gatherer_Integrator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Gatherer_Integrator>
{
	static constexpr fixed_string class_name = "java/util/stream/Gatherer$Integrator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/Gatherer_Downstream.h>
#include <scapix/java_api/java/util/stream/Gatherer_Integrator_Greedy.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Gatherer_Integrator : public jni::object_base<"java/util/stream/Gatherer$Integrator",
	java::lang::Object>
{
public:

	using Greedy = Gatherer_Integrator_Greedy;

	jboolean integrate(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::stream::Gatherer_Downstream> p3) { return call_method<"integrate", jboolean>(p1, p2, p3); }
	static jni::ref<java::util::stream::Gatherer_Integrator> of(jni::ref<java::util::stream::Gatherer_Integrator> integrator) { return call_static_method<"of", jni::ref<java::util::stream::Gatherer_Integrator>>(integrator); }
	static jni::ref<java::util::stream::Gatherer_Integrator_Greedy> ofGreedy(jni::ref<java::util::stream::Gatherer_Integrator_Greedy> greedy) { return call_static_method<"ofGreedy", jni::ref<java::util::stream::Gatherer_Integrator_Greedy>>(greedy); }

protected:

	Gatherer_Integrator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR