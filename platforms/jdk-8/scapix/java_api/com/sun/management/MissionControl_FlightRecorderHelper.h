// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FLIGHTRECORDERHELPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FLIGHTRECORDERHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::management { class MissionControl_FlightRecorderHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::management::MissionControl_FlightRecorderHelper>
{
	static constexpr fixed_string class_name = "com/sun/management/MissionControl$FlightRecorderHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FLIGHTRECORDERHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FLIGHTRECORDERHELPER)
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FLIGHTRECORDERHELPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::management::MissionControl_FlightRecorderHelper : public jni::object_base<"com/sun/management/MissionControl$FlightRecorderHelper",
	java::lang::Object>
{
public:


protected:

	MissionControl_FlightRecorderHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FLIGHTRECORDERHELPER