// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/ResourceCursorTreeAdapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class SimpleCursorTreeAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::SimpleCursorTreeAdapter>
{
	static constexpr fixed_string class_name = "android/widget/SimpleCursorTreeAdapter";
	using base_classes = std::tuple<scapix::java_api::android::widget::ResourceCursorTreeAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/widget/SimpleCursorTreeAdapter_ViewBinder.h>
#include <scapix/java_api/android/widget/TextView.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::SimpleCursorTreeAdapter : public jni::object_base<"android/widget/SimpleCursorTreeAdapter",
	android::widget::ResourceCursorTreeAdapter>
{
public:

	using ViewBinder = SimpleCursorTreeAdapter_ViewBinder;

	static jni::ref<android::widget::SimpleCursorTreeAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> cursor, jint collapsedGroupLayout, jint expandedGroupLayout, jni::ref<jni::array<java::lang::String>> groupFrom, jni::ref<jni::array<jint>> groupTo, jint childLayout, jint lastChildLayout, jni::ref<jni::array<java::lang::String>> childFrom, jni::ref<jni::array<jint>> childTo) { return base_::new_object(context, cursor, collapsedGroupLayout, expandedGroupLayout, groupFrom, groupTo, childLayout, lastChildLayout, childFrom, childTo); }
	static jni::ref<android::widget::SimpleCursorTreeAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> cursor, jint collapsedGroupLayout, jint expandedGroupLayout, jni::ref<jni::array<java::lang::String>> groupFrom, jni::ref<jni::array<jint>> groupTo, jint childLayout, jni::ref<jni::array<java::lang::String>> childFrom, jni::ref<jni::array<jint>> childTo) { return base_::new_object(context, cursor, collapsedGroupLayout, expandedGroupLayout, groupFrom, groupTo, childLayout, childFrom, childTo); }
	static jni::ref<android::widget::SimpleCursorTreeAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> cursor, jint groupLayout, jni::ref<jni::array<java::lang::String>> groupFrom, jni::ref<jni::array<jint>> groupTo, jint childLayout, jni::ref<jni::array<java::lang::String>> childFrom, jni::ref<jni::array<jint>> childTo) { return base_::new_object(context, cursor, groupLayout, groupFrom, groupTo, childLayout, childFrom, childTo); }
	jni::ref<android::widget::SimpleCursorTreeAdapter_ViewBinder> getViewBinder() { return call_method<"getViewBinder", jni::ref<android::widget::SimpleCursorTreeAdapter_ViewBinder>>(); }
	void setViewBinder(jni::ref<android::widget::SimpleCursorTreeAdapter_ViewBinder> viewBinder) { return call_method<"setViewBinder", void>(viewBinder); }
	void setViewText(jni::ref<android::widget::TextView> v, jni::ref<java::lang::String> text) { return call_method<"setViewText", void>(v, text); }

protected:

	SimpleCursorTreeAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_SIMPLECURSORTREEADAPTER
