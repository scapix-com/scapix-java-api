// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_EXTENDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_EXTENDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class Notification_Action_Extender; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::Notification_Action_Extender>
{
	static constexpr fixed_string class_name = "android/app/Notification$Action$Extender";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_EXTENDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_EXTENDER)
#define SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_EXTENDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification_Action_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::Notification_Action_Extender : public jni::object_base<"android/app/Notification$Action$Extender",
	java::lang::Object>
{
public:

	jni::ref<android::app::Notification_Action_Builder> extend(jni::ref<android::app::Notification_Action_Builder> p1) { return call_method<"extend", jni::ref<android::app::Notification_Action_Builder>>(p1); }

protected:

	Notification_Action_Extender(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_NOTIFICATION_ACTION_EXTENDER
