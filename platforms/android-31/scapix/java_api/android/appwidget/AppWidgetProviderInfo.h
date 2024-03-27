// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::appwidget { class AppWidgetProviderInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::appwidget::AppWidgetProviderInfo>
{
	static constexpr fixed_string class_name = "android/appwidget/AppWidgetProviderInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO)
#define SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/ActivityInfo.h>
#include <scapix/java_api/android/content/pm/PackageManager.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::appwidget::AppWidgetProviderInfo : public jni::object_base<"android/appwidget/AppWidgetProviderInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint RESIZE_BOTH() { return get_static_field<"RESIZE_BOTH", jint>(); }
	static jint RESIZE_HORIZONTAL() { return get_static_field<"RESIZE_HORIZONTAL", jint>(); }
	static jint RESIZE_NONE() { return get_static_field<"RESIZE_NONE", jint>(); }
	static jint RESIZE_VERTICAL() { return get_static_field<"RESIZE_VERTICAL", jint>(); }
	static jint WIDGET_CATEGORY_HOME_SCREEN() { return get_static_field<"WIDGET_CATEGORY_HOME_SCREEN", jint>(); }
	static jint WIDGET_CATEGORY_KEYGUARD() { return get_static_field<"WIDGET_CATEGORY_KEYGUARD", jint>(); }
	static jint WIDGET_CATEGORY_SEARCHBOX() { return get_static_field<"WIDGET_CATEGORY_SEARCHBOX", jint>(); }
	static jint WIDGET_FEATURE_CONFIGURATION_OPTIONAL() { return get_static_field<"WIDGET_FEATURE_CONFIGURATION_OPTIONAL", jint>(); }
	static jint WIDGET_FEATURE_HIDE_FROM_PICKER() { return get_static_field<"WIDGET_FEATURE_HIDE_FROM_PICKER", jint>(); }
	static jint WIDGET_FEATURE_RECONFIGURABLE() { return get_static_field<"WIDGET_FEATURE_RECONFIGURABLE", jint>(); }
	jint autoAdvanceViewId() { return get_field<"autoAdvanceViewId", jint>(); }
	void autoAdvanceViewId(jint v) { set_field<"autoAdvanceViewId", jint>(v); }
	jni::ref<android::content::ComponentName> configure() { return get_field<"configure", jni::ref<android::content::ComponentName>>(); }
	void configure(jni::ref<android::content::ComponentName> v) { set_field<"configure", jni::ref<android::content::ComponentName>>(v); }
	jint descriptionRes() { return get_field<"descriptionRes", jint>(); }
	void descriptionRes(jint v) { set_field<"descriptionRes", jint>(v); }
	jint icon() { return get_field<"icon", jint>(); }
	void icon(jint v) { set_field<"icon", jint>(v); }
	jint initialKeyguardLayout() { return get_field<"initialKeyguardLayout", jint>(); }
	void initialKeyguardLayout(jint v) { set_field<"initialKeyguardLayout", jint>(v); }
	jint initialLayout() { return get_field<"initialLayout", jint>(); }
	void initialLayout(jint v) { set_field<"initialLayout", jint>(v); }
	jni::ref<java::lang::String> label() { return get_field<"label", jni::ref<java::lang::String>>(); }
	void label(jni::ref<java::lang::String> v) { set_field<"label", jni::ref<java::lang::String>>(v); }
	jint maxResizeHeight() { return get_field<"maxResizeHeight", jint>(); }
	void maxResizeHeight(jint v) { set_field<"maxResizeHeight", jint>(v); }
	jint maxResizeWidth() { return get_field<"maxResizeWidth", jint>(); }
	void maxResizeWidth(jint v) { set_field<"maxResizeWidth", jint>(v); }
	jint minHeight() { return get_field<"minHeight", jint>(); }
	void minHeight(jint v) { set_field<"minHeight", jint>(v); }
	jint minResizeHeight() { return get_field<"minResizeHeight", jint>(); }
	void minResizeHeight(jint v) { set_field<"minResizeHeight", jint>(v); }
	jint minResizeWidth() { return get_field<"minResizeWidth", jint>(); }
	void minResizeWidth(jint v) { set_field<"minResizeWidth", jint>(v); }
	jint minWidth() { return get_field<"minWidth", jint>(); }
	void minWidth(jint v) { set_field<"minWidth", jint>(v); }
	jint previewImage() { return get_field<"previewImage", jint>(); }
	void previewImage(jint v) { set_field<"previewImage", jint>(v); }
	jint previewLayout() { return get_field<"previewLayout", jint>(); }
	void previewLayout(jint v) { set_field<"previewLayout", jint>(v); }
	jni::ref<android::content::ComponentName> provider() { return get_field<"provider", jni::ref<android::content::ComponentName>>(); }
	void provider(jni::ref<android::content::ComponentName> v) { set_field<"provider", jni::ref<android::content::ComponentName>>(v); }
	jint resizeMode() { return get_field<"resizeMode", jint>(); }
	void resizeMode(jint v) { set_field<"resizeMode", jint>(v); }
	jint targetCellHeight() { return get_field<"targetCellHeight", jint>(); }
	void targetCellHeight(jint v) { set_field<"targetCellHeight", jint>(v); }
	jint targetCellWidth() { return get_field<"targetCellWidth", jint>(); }
	void targetCellWidth(jint v) { set_field<"targetCellWidth", jint>(v); }
	jint updatePeriodMillis() { return get_field<"updatePeriodMillis", jint>(); }
	void updatePeriodMillis(jint v) { set_field<"updatePeriodMillis", jint>(v); }
	jint widgetCategory() { return get_field<"widgetCategory", jint>(); }
	void widgetCategory(jint v) { set_field<"widgetCategory", jint>(v); }
	jint widgetFeatures() { return get_field<"widgetFeatures", jint>(); }
	void widgetFeatures(jint v) { set_field<"widgetFeatures", jint>(v); }

	static jni::ref<android::appwidget::AppWidgetProviderInfo> new_object() { return base_::new_object(); }
	static jni::ref<android::appwidget::AppWidgetProviderInfo> new_object(jni::ref<android::os::Parcel> in) { return base_::new_object(in); }
	jni::ref<java::lang::String> loadLabel(jni::ref<android::content::pm::PackageManager> packageManager) { return call_method<"loadLabel", jni::ref<java::lang::String>>(packageManager); }
	jni::ref<android::graphics::drawable::Drawable> loadIcon(jni::ref<android::content::Context> context, jint density) { return call_method<"loadIcon", jni::ref<android::graphics::drawable::Drawable>>(context, density); }
	jni::ref<android::graphics::drawable::Drawable> loadPreviewImage(jni::ref<android::content::Context> context, jint density) { return call_method<"loadPreviewImage", jni::ref<android::graphics::drawable::Drawable>>(context, density); }
	jni::ref<java::lang::CharSequence> loadDescription(jni::ref<android::content::Context> context) { return call_method<"loadDescription", jni::ref<java::lang::CharSequence>>(context); }
	jni::ref<android::os::UserHandle> getProfile() { return call_method<"getProfile", jni::ref<android::os::UserHandle>>(); }
	jni::ref<android::content::pm::ActivityInfo> getActivityInfo() { return call_method<"getActivityInfo", jni::ref<android::content::pm::ActivityInfo>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jni::ref<android::appwidget::AppWidgetProviderInfo> clone() { return call_method<"clone", jni::ref<android::appwidget::AppWidgetProviderInfo>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AppWidgetProviderInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETPROVIDERINFO
