// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_NOTIFICATIONACCESSCONTROLLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_NOTIFICATIONACCESSCONTROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::security { class NotificationAccessController; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::security::NotificationAccessController>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/security/NotificationAccessController";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_NOTIFICATIONACCESSCONTROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_NOTIFICATIONACCESSCONTROLLER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_NOTIFICATIONACCESSCONTROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/Notification.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::security::NotificationAccessController : public jni::object_base<"com/sun/jmx/remote/security/NotificationAccessController",
	java::lang::Object>
{
public:

	void addNotificationListener(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::security::auth::Subject> p3) { return call_method<"addNotificationListener", void>(p1, p2, p3); }
	void removeNotificationListener(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::security::auth::Subject> p3) { return call_method<"removeNotificationListener", void>(p1, p2, p3); }
	void fetchNotification(jni::ref<java::lang::String> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::management::Notification> p3, jni::ref<javax::security::auth::Subject> p4) { return call_method<"fetchNotification", void>(p1, p2, p3, p4); }

protected:

	NotificationAccessController(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_SECURITY_NOTIFICATIONACCESSCONTROLLER
