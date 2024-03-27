// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/NotificationListener.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_ARRAYNOTIFICATIONBUFFER_BUFFERLISTENER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_ARRAYNOTIFICATIONBUFFER_BUFFERLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::internal { class ArrayNotificationBuffer_BufferListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::internal::ArrayNotificationBuffer_BufferListener>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/internal/ArrayNotificationBuffer$BufferListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::NotificationListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_ARRAYNOTIFICATIONBUFFER_BUFFERLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_ARRAYNOTIFICATIONBUFFER_BUFFERLISTENER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_ARRAYNOTIFICATIONBUFFER_BUFFERLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/Notification.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::remote::internal::ArrayNotificationBuffer_BufferListener : public jni::object_base<"com/sun/jmx/remote/internal/ArrayNotificationBuffer$BufferListener",
	java::lang::Object,
	javax::management::NotificationListener>
{
public:

	void handleNotification(jni::ref<javax::management::Notification> p1, jni::ref<java::lang::Object> p2) { return call_method<"handleNotification", void>(p1, p2); }

protected:

	ArrayNotificationBuffer_BufferListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_ARRAYNOTIFICATIONBUFFER_BUFFERLISTENER