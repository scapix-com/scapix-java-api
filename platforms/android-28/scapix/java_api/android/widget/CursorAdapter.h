// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/BaseAdapter.h>
#include <scapix/java_api/android/widget/Filterable.h>
#include <scapix/java_api/android/widget/ThemedSpinnerAdapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_CURSORADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CURSORADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class CursorAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::CursorAdapter>
{
	static constexpr fixed_string class_name = "android/widget/CursorAdapter";
	using base_classes = std::tuple<scapix::java_api::android::widget::BaseAdapter, scapix::java_api::android::widget::Filterable, scapix::java_api::android::widget::ThemedSpinnerAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CURSORADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_CURSORADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CURSORADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#include <scapix/java_api/android/database/Cursor.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#include <scapix/java_api/android/widget/Filter.h>
#include <scapix/java_api/android/widget/FilterQueryProvider.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::CursorAdapter : public jni::object_base<"android/widget/CursorAdapter",
	android::widget::BaseAdapter,
	android::widget::Filterable,
	android::widget::ThemedSpinnerAdapter>
{
public:

	static jint FLAG_AUTO_REQUERY() { return get_static_field<"FLAG_AUTO_REQUERY", jint>(); }
	static jint FLAG_REGISTER_CONTENT_OBSERVER() { return get_static_field<"FLAG_REGISTER_CONTENT_OBSERVER", jint>(); }

	static jni::ref<android::widget::CursorAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> c) { return base_::new_object(context, c); }
	static jni::ref<android::widget::CursorAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> c, jboolean autoRequery) { return base_::new_object(context, c, autoRequery); }
	static jni::ref<android::widget::CursorAdapter> new_object(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> c, jint flags) { return base_::new_object(context, c, flags); }
	void setDropDownViewTheme(jni::ref<android::content::res::Resources_Theme> theme) { return call_method<"setDropDownViewTheme", void>(theme); }
	jni::ref<android::content::res::Resources_Theme> getDropDownViewTheme() { return call_method<"getDropDownViewTheme", jni::ref<android::content::res::Resources_Theme>>(); }
	jni::ref<android::database::Cursor> getCursor() { return call_method<"getCursor", jni::ref<android::database::Cursor>>(); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jni::ref<java::lang::Object> getItem(jint position) { return call_method<"getItem", jni::ref<java::lang::Object>>(position); }
	jlong getItemId(jint position) { return call_method<"getItemId", jlong>(position); }
	jboolean hasStableIds() { return call_method<"hasStableIds", jboolean>(); }
	jni::ref<android::view::View> getView(jint position, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getView", jni::ref<android::view::View>>(position, convertView, parent); }
	jni::ref<android::view::View> getDropDownView(jint position, jni::ref<android::view::View> convertView, jni::ref<android::view::ViewGroup> parent) { return call_method<"getDropDownView", jni::ref<android::view::View>>(position, convertView, parent); }
	jni::ref<android::view::View> newView(jni::ref<android::content::Context> p1, jni::ref<android::database::Cursor> p2, jni::ref<android::view::ViewGroup> p3) { return call_method<"newView", jni::ref<android::view::View>>(p1, p2, p3); }
	jni::ref<android::view::View> newDropDownView(jni::ref<android::content::Context> context, jni::ref<android::database::Cursor> cursor, jni::ref<android::view::ViewGroup> parent) { return call_method<"newDropDownView", jni::ref<android::view::View>>(context, cursor, parent); }
	void bindView(jni::ref<android::view::View> p1, jni::ref<android::content::Context> p2, jni::ref<android::database::Cursor> p3) { return call_method<"bindView", void>(p1, p2, p3); }
	void changeCursor(jni::ref<android::database::Cursor> cursor) { return call_method<"changeCursor", void>(cursor); }
	jni::ref<android::database::Cursor> swapCursor(jni::ref<android::database::Cursor> newCursor) { return call_method<"swapCursor", jni::ref<android::database::Cursor>>(newCursor); }
	jni::ref<java::lang::CharSequence> convertToString(jni::ref<android::database::Cursor> cursor) { return call_method<"convertToString", jni::ref<java::lang::CharSequence>>(cursor); }
	jni::ref<android::database::Cursor> runQueryOnBackgroundThread(jni::ref<java::lang::CharSequence> constraint) { return call_method<"runQueryOnBackgroundThread", jni::ref<android::database::Cursor>>(constraint); }
	jni::ref<android::widget::Filter> getFilter() { return call_method<"getFilter", jni::ref<android::widget::Filter>>(); }
	jni::ref<android::widget::FilterQueryProvider> getFilterQueryProvider() { return call_method<"getFilterQueryProvider", jni::ref<android::widget::FilterQueryProvider>>(); }
	void setFilterQueryProvider(jni::ref<android::widget::FilterQueryProvider> filterQueryProvider) { return call_method<"setFilterQueryProvider", void>(filterQueryProvider); }

protected:

	CursorAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CURSORADAPTER
