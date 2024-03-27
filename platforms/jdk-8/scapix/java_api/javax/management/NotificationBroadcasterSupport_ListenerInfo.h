// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATIONBROADCASTERSUPPORT_LISTENERINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATIONBROADCASTERSUPPORT_LISTENERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class NotificationBroadcasterSupport_ListenerInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::NotificationBroadcasterSupport_ListenerInfo>
{
	static constexpr fixed_string class_name = "javax/management/NotificationBroadcasterSupport$ListenerInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATIONBROADCASTERSUPPORT_LISTENERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATIONBROADCASTERSUPPORT_LISTENERINFO)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATIONBROADCASTERSUPPORT_LISTENERINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::NotificationBroadcasterSupport_ListenerInfo : public jni::object_base<"javax/management/NotificationBroadcasterSupport$ListenerInfo",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	NotificationBroadcasterSupport_ListenerInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_NOTIFICATIONBROADCASTERSUPPORT_LISTENERINFO