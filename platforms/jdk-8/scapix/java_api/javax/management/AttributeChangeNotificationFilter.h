// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/NotificationFilter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_ATTRIBUTECHANGENOTIFICATIONFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_ATTRIBUTECHANGENOTIFICATIONFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class AttributeChangeNotificationFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::AttributeChangeNotificationFilter>
{
	static constexpr fixed_string class_name = "javax/management/AttributeChangeNotificationFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::NotificationFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_ATTRIBUTECHANGENOTIFICATIONFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_ATTRIBUTECHANGENOTIFICATIONFILTER)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_ATTRIBUTECHANGENOTIFICATIONFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/javax/management/Notification.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::AttributeChangeNotificationFilter : public jni::object_base<"javax/management/AttributeChangeNotificationFilter",
	java::lang::Object,
	javax::management::NotificationFilter>
{
public:

	static jni::ref<javax::management::AttributeChangeNotificationFilter> new_object() { return base_::new_object(); }
	jboolean isNotificationEnabled(jni::ref<javax::management::Notification> p1) { return call_method<"isNotificationEnabled", jboolean>(p1); }
	void enableAttribute(jni::ref<java::lang::String> p1) { return call_method<"enableAttribute", void>(p1); }
	void disableAttribute(jni::ref<java::lang::String> p1) { return call_method<"disableAttribute", void>(p1); }
	void disableAllAttributes() { return call_method<"disableAllAttributes", void>(); }
	jni::ref<java::util::Vector> getEnabledAttributes() { return call_method<"getEnabledAttributes", jni::ref<java::util::Vector>>(); }

protected:

	AttributeChangeNotificationFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_ATTRIBUTECHANGENOTIFICATIONFILTER
