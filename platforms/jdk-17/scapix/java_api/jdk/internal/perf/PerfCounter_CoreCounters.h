// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_CORECOUNTERS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_CORECOUNTERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::perf { class PerfCounter_CoreCounters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::perf::PerfCounter_CoreCounters>
{
	static constexpr fixed_string class_name = "jdk/internal/perf/PerfCounter$CoreCounters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_CORECOUNTERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_CORECOUNTERS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_CORECOUNTERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::perf::PerfCounter_CoreCounters : public jni::object_base<"jdk/internal/perf/PerfCounter$CoreCounters",
	java::lang::Object>
{
public:


protected:

	PerfCounter_CoreCounters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERFCOUNTER_CORECOUNTERS