// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_PERFCOUNTER_WINDOWSCLIENTCOUNTERS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_PERFCOUNTER_WINDOWSCLIENTCOUNTERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class PerfCounter_WindowsClientCounters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::PerfCounter_WindowsClientCounters>
{
	static constexpr fixed_string class_name = "sun/misc/PerfCounter$WindowsClientCounters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PERFCOUNTER_WINDOWSCLIENTCOUNTERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_PERFCOUNTER_WINDOWSCLIENTCOUNTERS)
#define SCAPIX_JAVA_API_SUN_MISC_PERFCOUNTER_WINDOWSCLIENTCOUNTERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::PerfCounter_WindowsClientCounters : public jni::object_base<"sun/misc/PerfCounter$WindowsClientCounters",
	java::lang::Object>
{
public:


protected:

	PerfCounter_WindowsClientCounters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PERFCOUNTER_WINDOWSCLIENTCOUNTERS
