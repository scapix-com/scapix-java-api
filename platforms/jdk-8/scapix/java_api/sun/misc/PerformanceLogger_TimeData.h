// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_PERFORMANCELOGGER_TIMEDATA_FWD
#define SCAPIX_JAVA_API_SUN_MISC_PERFORMANCELOGGER_TIMEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class PerformanceLogger_TimeData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::PerformanceLogger_TimeData>
{
	static constexpr fixed_string class_name = "sun/misc/PerformanceLogger$TimeData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PERFORMANCELOGGER_TIMEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_PERFORMANCELOGGER_TIMEDATA)
#define SCAPIX_JAVA_API_SUN_MISC_PERFORMANCELOGGER_TIMEDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::misc::PerformanceLogger_TimeData : public jni::object_base<"sun/misc/PerformanceLogger$TimeData",
	java::lang::Object>
{
public:


protected:

	PerformanceLogger_TimeData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_PERFORMANCELOGGER_TIMEDATA