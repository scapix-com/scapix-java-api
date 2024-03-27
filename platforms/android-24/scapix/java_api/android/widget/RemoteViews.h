// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/view/LayoutInflater_Filter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_REMOTEVIEWS_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_REMOTEVIEWS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class RemoteViews; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::RemoteViews>
{
	static constexpr fixed_string class_name = "android/widget/RemoteViews";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable, scapix::java_api::android::view::LayoutInflater_Filter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_REMOTEVIEWS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_REMOTEVIEWS)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_REMOTEVIEWS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/widget/RemoteViews_ActionException.h>
#include <scapix/java_api/android/widget/RemoteViews_RemoteView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::RemoteViews : public jni::object_base<"android/widget/RemoteViews",
	java::lang::Object,
	android::os::Parcelable,
	android::view::LayoutInflater_Filter>
{
public:

	using ActionException = RemoteViews_ActionException;
	using RemoteView = RemoteViews_RemoteView;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::widget::RemoteViews> new_object(jni::ref<java::lang::String> packageName, jint layoutId) { return base_::new_object(packageName, layoutId); }
	static jni::ref<android::widget::RemoteViews> new_object(jni::ref<android::widget::RemoteViews> landscape, jni::ref<android::widget::RemoteViews> portrait) { return base_::new_object(landscape, portrait); }
	static jni::ref<android::widget::RemoteViews> new_object(jni::ref<android::os::Parcel> parcel) { return base_::new_object(parcel); }
	jni::ref<android::widget::RemoteViews> clone() { return call_method<"clone", jni::ref<android::widget::RemoteViews>>(); }
	jni::ref<java::lang::String> getPackage() { return call_method<"getPackage", jni::ref<java::lang::String>>(); }
	jint getLayoutId() { return call_method<"getLayoutId", jint>(); }
	void addView(jint viewId, jni::ref<android::widget::RemoteViews> nestedView) { return call_method<"addView", void>(viewId, nestedView); }
	void removeAllViews(jint viewId) { return call_method<"removeAllViews", void>(viewId); }
	void showNext(jint viewId) { return call_method<"showNext", void>(viewId); }
	void showPrevious(jint viewId) { return call_method<"showPrevious", void>(viewId); }
	void setDisplayedChild(jint viewId, jint childIndex) { return call_method<"setDisplayedChild", void>(viewId, childIndex); }
	void setViewVisibility(jint viewId, jint visibility) { return call_method<"setViewVisibility", void>(viewId, visibility); }
	void setTextViewText(jint viewId, jni::ref<java::lang::CharSequence> text) { return call_method<"setTextViewText", void>(viewId, text); }
	void setTextViewTextSize(jint viewId, jint units, jfloat size) { return call_method<"setTextViewTextSize", void>(viewId, units, size); }
	void setTextViewCompoundDrawables(jint viewId, jint left, jint top, jint right, jint bottom) { return call_method<"setTextViewCompoundDrawables", void>(viewId, left, top, right, bottom); }
	void setTextViewCompoundDrawablesRelative(jint viewId, jint start, jint top, jint end, jint bottom) { return call_method<"setTextViewCompoundDrawablesRelative", void>(viewId, start, top, end, bottom); }
	void setImageViewResource(jint viewId, jint srcId) { return call_method<"setImageViewResource", void>(viewId, srcId); }
	void setImageViewUri(jint viewId, jni::ref<android::net::Uri> uri) { return call_method<"setImageViewUri", void>(viewId, uri); }
	void setImageViewBitmap(jint viewId, jni::ref<android::graphics::Bitmap> bitmap) { return call_method<"setImageViewBitmap", void>(viewId, bitmap); }
	void setImageViewIcon(jint viewId, jni::ref<android::graphics::drawable::Icon> icon) { return call_method<"setImageViewIcon", void>(viewId, icon); }
	void setEmptyView(jint viewId, jint emptyViewId) { return call_method<"setEmptyView", void>(viewId, emptyViewId); }
	void setChronometer(jint viewId, jlong base, jni::ref<java::lang::String> p3, jboolean format) { return call_method<"setChronometer", void>(viewId, base, p3, format); }
	void setChronometerCountDown(jint viewId, jboolean isCountDown) { return call_method<"setChronometerCountDown", void>(viewId, isCountDown); }
	void setProgressBar(jint viewId, jint max, jint progress, jboolean indeterminate) { return call_method<"setProgressBar", void>(viewId, max, progress, indeterminate); }
	void setOnClickPendingIntent(jint viewId, jni::ref<android::app::PendingIntent> pendingIntent) { return call_method<"setOnClickPendingIntent", void>(viewId, pendingIntent); }
	void setPendingIntentTemplate(jint viewId, jni::ref<android::app::PendingIntent> pendingIntentTemplate) { return call_method<"setPendingIntentTemplate", void>(viewId, pendingIntentTemplate); }
	void setOnClickFillInIntent(jint viewId, jni::ref<android::content::Intent> fillInIntent) { return call_method<"setOnClickFillInIntent", void>(viewId, fillInIntent); }
	void setTextColor(jint viewId, jint color) { return call_method<"setTextColor", void>(viewId, color); }
	void setRemoteAdapter(jint appWidgetId, jint viewId, jni::ref<android::content::Intent> intent) { return call_method<"setRemoteAdapter", void>(appWidgetId, viewId, intent); }
	void setRemoteAdapter(jint viewId, jni::ref<android::content::Intent> intent) { return call_method<"setRemoteAdapter", void>(viewId, intent); }
	void setScrollPosition(jint viewId, jint position) { return call_method<"setScrollPosition", void>(viewId, position); }
	void setRelativeScrollPosition(jint viewId, jint offset) { return call_method<"setRelativeScrollPosition", void>(viewId, offset); }
	void setViewPadding(jint viewId, jint left, jint top, jint right, jint bottom) { return call_method<"setViewPadding", void>(viewId, left, top, right, bottom); }
	void setBoolean(jint viewId, jni::ref<java::lang::String> methodName, jboolean value) { return call_method<"setBoolean", void>(viewId, methodName, value); }
	void setByte(jint viewId, jni::ref<java::lang::String> methodName, jbyte value) { return call_method<"setByte", void>(viewId, methodName, value); }
	void setShort(jint viewId, jni::ref<java::lang::String> methodName, jshort value) { return call_method<"setShort", void>(viewId, methodName, value); }
	void setInt(jint viewId, jni::ref<java::lang::String> methodName, jint value) { return call_method<"setInt", void>(viewId, methodName, value); }
	void setLong(jint viewId, jni::ref<java::lang::String> methodName, jlong value) { return call_method<"setLong", void>(viewId, methodName, value); }
	void setFloat(jint viewId, jni::ref<java::lang::String> methodName, jfloat value) { return call_method<"setFloat", void>(viewId, methodName, value); }
	void setDouble(jint viewId, jni::ref<java::lang::String> methodName, jdouble value) { return call_method<"setDouble", void>(viewId, methodName, value); }
	void setChar(jint viewId, jni::ref<java::lang::String> methodName, jchar value) { return call_method<"setChar", void>(viewId, methodName, value); }
	void setString(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<java::lang::String> value) { return call_method<"setString", void>(viewId, methodName, value); }
	void setCharSequence(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<java::lang::CharSequence> value) { return call_method<"setCharSequence", void>(viewId, methodName, value); }
	void setUri(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<android::net::Uri> value) { return call_method<"setUri", void>(viewId, methodName, value); }
	void setBitmap(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<android::graphics::Bitmap> value) { return call_method<"setBitmap", void>(viewId, methodName, value); }
	void setBundle(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<android::os::Bundle> value) { return call_method<"setBundle", void>(viewId, methodName, value); }
	void setIntent(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<android::content::Intent> value) { return call_method<"setIntent", void>(viewId, methodName, value); }
	void setIcon(jint viewId, jni::ref<java::lang::String> methodName, jni::ref<android::graphics::drawable::Icon> value) { return call_method<"setIcon", void>(viewId, methodName, value); }
	void setContentDescription(jint viewId, jni::ref<java::lang::CharSequence> contentDescription) { return call_method<"setContentDescription", void>(viewId, contentDescription); }
	void setAccessibilityTraversalBefore(jint viewId, jint nextId) { return call_method<"setAccessibilityTraversalBefore", void>(viewId, nextId); }
	void setAccessibilityTraversalAfter(jint viewId, jint nextId) { return call_method<"setAccessibilityTraversalAfter", void>(viewId, nextId); }
	void setLabelFor(jint viewId, jint labeledId) { return call_method<"setLabelFor", void>(viewId, labeledId); }
	jni::ref<android::view::View> apply(jni::ref<android::content::Context> context, jni::ref<android::view::ViewGroup> parent) { return call_method<"apply", jni::ref<android::view::View>>(context, parent); }
	void reapply(jni::ref<android::content::Context> context, jni::ref<android::view::View> v) { return call_method<"reapply", void>(context, v); }
	jboolean onLoadClass(jni::ref<java::lang::Class> clazz) { return call_method<"onLoadClass", jboolean>(clazz); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	RemoteViews(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_REMOTEVIEWS
