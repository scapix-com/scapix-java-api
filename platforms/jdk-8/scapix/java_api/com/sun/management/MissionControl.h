// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/StandardMBean.h>
#include <scapix/java_api/com/sun/management/MissionControlMXBean.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FWD
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::management { class MissionControl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::management::MissionControl>
{
	static constexpr fixed_string class_name = "com/sun/management/MissionControl";
	using base_classes = std::tuple<scapix::java_api::javax::management::StandardMBean, scapix::java_api::com::sun::management::MissionControlMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL)
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::management::MissionControl : public jni::object_base<"com/sun/management/MissionControl",
	javax::management::StandardMBean,
	com::sun::management::MissionControlMXBean>
{
public:

	static jni::ref<com::sun::management::MissionControl> new_object() { return base_::new_object(); }
	jni::ref<javax::management::ObjectName> preRegister(jni::ref<javax::management::MBeanServer> p1, jni::ref<javax::management::ObjectName> p2) { return call_method<"preRegister", jni::ref<javax::management::ObjectName>>(p1, p2); }
	void unregisterMBeans() { return call_method<"unregisterMBeans", void>(); }
	void registerMBeans() { return call_method<"registerMBeans", void>(); }

protected:

	MissionControl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_MISSIONCONTROL