// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_CLIENTNOTIFFORWARDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_CLIENTNOTIFFORWARDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::internal { class ClientNotifForwarder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::internal::ClientNotifForwarder>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/internal/ClientNotifForwarder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_CLIENTNOTIFFORWARDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_CLIENTNOTIFFORWARDER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_CLIENTNOTIFFORWARDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/jmx/remote/internal/ClientListenerInfo.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/management/NotificationFilter.h>
#include <scapix/java_api/javax/management/NotificationListener.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::internal::ClientNotifForwarder : public jni::object_base<"com/sun/jmx/remote/internal/ClientNotifForwarder",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::jmx::remote::internal::ClientNotifForwarder> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::jmx::remote::internal::ClientNotifForwarder> new_object(jni::ref<java::lang::ClassLoader> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	void addNotificationListener(jni::ref<java::lang::Integer> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<javax::management::NotificationListener> p3, jni::ref<javax::management::NotificationFilter> p4, jni::ref<java::lang::Object> p5, jni::ref<javax::security::auth::Subject> p6) { return call_method<"addNotificationListener", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<jni::array<java::lang::Integer>> removeNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::NotificationListener> p2) { return call_method<"removeNotificationListener", jni::ref<jni::array<java::lang::Integer>>>(p1, p2); }
	jni::ref<java::lang::Integer> removeNotificationListener(jni::ref<javax::management::ObjectName> p1, jni::ref<javax::management::NotificationListener> p2, jni::ref<javax::management::NotificationFilter> p3, jni::ref<java::lang::Object> p4) { return call_method<"removeNotificationListener", jni::ref<java::lang::Integer>>(p1, p2, p3, p4); }
	jni::ref<jni::array<java::lang::Integer>> removeNotificationListener(jni::ref<javax::management::ObjectName> p1) { return call_method<"removeNotificationListener", jni::ref<jni::array<java::lang::Integer>>>(p1); }
	jni::ref<jni::array<com::sun::jmx::remote::internal::ClientListenerInfo>> preReconnection() { return call_method<"preReconnection", jni::ref<jni::array<com::sun::jmx::remote::internal::ClientListenerInfo>>>(); }
	void postReconnection(jni::ref<jni::array<com::sun::jmx::remote::internal::ClientListenerInfo>> p1) { return call_method<"postReconnection", void>(p1); }
	void terminate() { return call_method<"terminate", void>(); }

protected:

	ClientNotifForwarder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_CLIENTNOTIFFORWARDER
