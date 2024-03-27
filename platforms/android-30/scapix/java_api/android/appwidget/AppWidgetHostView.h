// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/FrameLayout.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETHOSTVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETHOSTVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::appwidget { class AppWidgetHostView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::appwidget::AppWidgetHostView>
{
	static constexpr fixed_string class_name = "android/appwidget/AppWidgetHostView";
	using base_classes = std::tuple<scapix::java_api::android::widget::FrameLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETHOSTVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETHOSTVIEW)
#define SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETHOSTVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/appwidget/AppWidgetProviderInfo.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/widget/FrameLayout_LayoutParams.h>
#include <scapix/java_api/android/widget/RemoteViews.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::appwidget::AppWidgetHostView : public jni::object_base<"android/appwidget/AppWidgetHostView",
	android::widget::FrameLayout>
{
public:

	static jni::ref<android::appwidget::AppWidgetHostView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::appwidget::AppWidgetHostView> new_object(jni::ref<android::content::Context> context, jint animationIn, jint animationOut) { return base_::new_object(context, animationIn, animationOut); }
	void setAppWidget(jint appWidgetId, jni::ref<android::appwidget::AppWidgetProviderInfo> info) { return call_method<"setAppWidget", void>(appWidgetId, info); }
	static jni::ref<android::graphics::Rect> getDefaultPaddingForWidget(jni::ref<android::content::Context> context, jni::ref<android::content::ComponentName> component, jni::ref<android::graphics::Rect> padding) { return call_static_method<"getDefaultPaddingForWidget", jni::ref<android::graphics::Rect>>(context, component, padding); }
	jint getAppWidgetId() { return call_method<"getAppWidgetId", jint>(); }
	jni::ref<android::appwidget::AppWidgetProviderInfo> getAppWidgetInfo() { return call_method<"getAppWidgetInfo", jni::ref<android::appwidget::AppWidgetProviderInfo>>(); }
	void updateAppWidgetSize(jni::ref<android::os::Bundle> newOptions, jint minWidth, jint minHeight, jint maxWidth, jint maxHeight) { return call_method<"updateAppWidgetSize", void>(newOptions, minWidth, minHeight, maxWidth, maxHeight); }
	void updateAppWidgetOptions(jni::ref<android::os::Bundle> options) { return call_method<"updateAppWidgetOptions", void>(options); }
	jni::ref<android::widget::FrameLayout_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::widget::FrameLayout_LayoutParams>>(attrs); }
	void setExecutor(jni::ref<java::util::concurrent::Executor> executor) { return call_method<"setExecutor", void>(executor); }
	void setOnLightBackground(jboolean onLightBackground) { return call_method<"setOnLightBackground", void>(onLightBackground); }
	void updateAppWidget(jni::ref<android::widget::RemoteViews> remoteViews) { return call_method<"updateAppWidget", void>(remoteViews); }

protected:

	AppWidgetHostView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APPWIDGET_APPWIDGETHOSTVIEW
