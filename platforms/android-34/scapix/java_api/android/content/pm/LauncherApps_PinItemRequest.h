// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::content::pm { class LauncherApps_PinItemRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::content::pm::LauncherApps_PinItemRequest>
{
	static constexpr fixed_string class_name = "android/content/pm/LauncherApps$PinItemRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST)
#define SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/appwidget/AppWidgetProviderInfo.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/ShortcutInfo.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::content::pm::LauncherApps_PinItemRequest : public jni::object_base<"android/content/pm/LauncherApps$PinItemRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint REQUEST_TYPE_APPWIDGET() { return get_static_field<"REQUEST_TYPE_APPWIDGET", jint>(); }
	static jint REQUEST_TYPE_SHORTCUT() { return get_static_field<"REQUEST_TYPE_SHORTCUT", jint>(); }

	jint getRequestType() { return call_method<"getRequestType", jint>(); }
	jni::ref<android::content::pm::ShortcutInfo> getShortcutInfo() { return call_method<"getShortcutInfo", jni::ref<android::content::pm::ShortcutInfo>>(); }
	jni::ref<android::appwidget::AppWidgetProviderInfo> getAppWidgetProviderInfo(jni::ref<android::content::Context> context) { return call_method<"getAppWidgetProviderInfo", jni::ref<android::appwidget::AppWidgetProviderInfo>>(context); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	jboolean accept(jni::ref<android::os::Bundle> options) { return call_method<"accept", jboolean>(options); }
	jboolean accept() { return call_method<"accept", jboolean>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	LauncherApps_PinItemRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_CONTENT_PM_LAUNCHERAPPS_PINITEMREQUEST
