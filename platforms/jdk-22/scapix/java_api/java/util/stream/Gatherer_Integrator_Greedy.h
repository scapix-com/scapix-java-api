// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Gatherer_Integrator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_GREEDY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_GREEDY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Gatherer_Integrator_Greedy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Gatherer_Integrator_Greedy>
{
	static constexpr fixed_string class_name = "java/util/stream/Gatherer$Integrator$Greedy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Gatherer_Integrator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_GREEDY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_GREEDY)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_GREEDY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Gatherer_Integrator_Greedy : public jni::object_base<"java/util/stream/Gatherer$Integrator$Greedy",
	java::lang::Object,
	java::util::stream::Gatherer_Integrator>
{
public:


protected:

	Gatherer_Integrator_Greedy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_GATHERER_INTEGRATOR_GREEDY
