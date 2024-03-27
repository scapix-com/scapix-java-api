// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/NotificationFilterSupport.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_MBEANSERVERNOTIFICATIONFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_MBEANSERVERNOTIFICATIONFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::relation { class MBeanServerNotificationFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::relation::MBeanServerNotificationFilter>
{
	static constexpr fixed_string class_name = "javax/management/relation/MBeanServerNotificationFilter";
	using base_classes = std::tuple<scapix::java_api::javax::management::NotificationFilterSupport>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_MBEANSERVERNOTIFICATIONFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_MBEANSERVERNOTIFICATIONFILTER)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_MBEANSERVERNOTIFICATIONFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/javax/management/Notification.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::relation::MBeanServerNotificationFilter : public jni::object_base<"javax/management/relation/MBeanServerNotificationFilter",
	javax::management::NotificationFilterSupport>
{
public:

	static jni::ref<javax::management::relation::MBeanServerNotificationFilter> new_object() { return base_::new_object(); }
	void disableAllObjectNames() { return call_method<"disableAllObjectNames", void>(); }
	void disableObjectName(jni::ref<javax::management::ObjectName> p1) { return call_method<"disableObjectName", void>(p1); }
	void enableAllObjectNames() { return call_method<"enableAllObjectNames", void>(); }
	void enableObjectName(jni::ref<javax::management::ObjectName> p1) { return call_method<"enableObjectName", void>(p1); }
	jni::ref<java::util::Vector> getEnabledObjectNames() { return call_method<"getEnabledObjectNames", jni::ref<java::util::Vector>>(); }
	jni::ref<java::util::Vector> getDisabledObjectNames() { return call_method<"getDisabledObjectNames", jni::ref<java::util::Vector>>(); }
	jboolean isNotificationEnabled(jni::ref<javax::management::Notification> p1) { return call_method<"isNotificationEnabled", jboolean>(p1); }

protected:

	MBeanServerNotificationFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_RELATION_MBEANSERVERNOTIFICATIONFILTER
