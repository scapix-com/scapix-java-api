// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/Notification.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERNOTIFICATION_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERNOTIFICATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class MBeanServerNotification; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::MBeanServerNotification>
{
	static constexpr fixed_string class_name = "javax/management/MBeanServerNotification";
	using base_classes = std::tuple<scapix::java_api::javax::management::Notification>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERNOTIFICATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERNOTIFICATION)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERNOTIFICATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::MBeanServerNotification : public jni::object_base<"javax/management/MBeanServerNotification",
	javax::management::Notification>
{
public:

	static jni::ref<java::lang::String> REGISTRATION_NOTIFICATION() { return get_static_field<"REGISTRATION_NOTIFICATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> UNREGISTRATION_NOTIFICATION() { return get_static_field<"UNREGISTRATION_NOTIFICATION", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::management::MBeanServerNotification> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jlong p3, jni::ref<javax::management::ObjectName> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<javax::management::ObjectName> getMBeanName() { return call_method<"getMBeanName", jni::ref<javax::management::ObjectName>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MBeanServerNotification(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERNOTIFICATION
