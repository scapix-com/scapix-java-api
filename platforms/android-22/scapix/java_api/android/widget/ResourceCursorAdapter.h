// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/CursorAdapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_RESOURCECURSORADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_RESOURCECURSORADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ResourceCursorAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ResourceCursorAdapter>
{
	static constexpr fixed_string class_name = "android/widget/ResourceCursorAdapter";
	using base_classes = std::tuple<scapix::java_api::android::widget::CursorAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_RESOURCECURSORADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_RESOURCECURSORADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_RESOURCECURSORADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ResourceCursorAdapter : public jni::object_base<"android/widget/ResourceCursorAdapter",
	android::widget::CursorAdapter>
{
public:

	static jni::ref<android::widget::ResourceCursorAdapter> new_object(jni::ref<android::content::Context> context, jint layout, jni::ref<android::database::Cursor> c) { return base_::new_object(context, layout, c); }
	static jni::ref<android::widget::ResourceCursorAdapter> new_object(jni::ref<android::content::Context> context, jint layout, jni::ref<android::database::Cursor> c, jboolean autoRequery) { return base_::new_object(context, layout, c, autoRequery); }
	static jni::ref<android::widget::ResourceCursorAdapter> new_object(jni::ref<android::content::Context> context, jint layout, jni::ref<android::database::Cursor> c, jint flags) { return base_::new_object(context, layout, c, flags); }
	jni::ref<android::view::View> newView(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> cursor, jni::ref<android::view::ViewGroup> parent) { return call_method<"newView", jni::ref<android::view::View>>(context, cursor, parent); }
	jni::ref<android::view::View> newDropDownView(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> cursor, jni::ref<android::view::ViewGroup> parent) { return call_method<"newDropDownView", jni::ref<android::view::View>>(context, cursor, parent); }
	void setViewResource(jint layout) { return call_method<"setViewResource", void>(layout); }
	void setDropDownViewResource(jint dropDownLayout) { return call_method<"setDropDownViewResource", void>(dropDownLayout); }

protected:

	ResourceCursorAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_RESOURCECURSORADAPTER
