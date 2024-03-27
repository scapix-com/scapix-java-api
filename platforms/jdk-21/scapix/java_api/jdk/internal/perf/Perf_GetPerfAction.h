// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERF_GETPERFACTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERF_GETPERFACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::perf { class Perf_GetPerfAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::perf::Perf_GetPerfAction>
{
	static constexpr fixed_string class_name = "jdk/internal/perf/Perf$GetPerfAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERF_GETPERFACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERF_GETPERFACTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERF_GETPERFACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/perf/Perf.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::perf::Perf_GetPerfAction : public jni::object_base<"jdk/internal/perf/Perf$GetPerfAction",
	java::lang::Object,
	java::security::PrivilegedAction>
{
public:

	static jni::ref<jdk::internal::perf::Perf_GetPerfAction> new_object() { return base_::new_object(); }
	jni::ref<jdk::internal::perf::Perf> run() { return call_method<"run", jni::ref<jdk::internal::perf::Perf>>(); }

protected:

	Perf_GetPerfAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PERF_PERF_GETPERFACTION
