// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/AbsListView.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class GridView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::GridView>
{
	static constexpr fixed_string class_name = "android/widget/GridView";
	using base_classes = std::tuple<scapix::java_api::android::widget::AbsListView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDVIEW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/ListAdapter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::GridView : public jni::object_base<"android/widget/GridView",
	android::widget::AbsListView>
{
public:

	static jint AUTO_FIT() { return get_static_field<"AUTO_FIT", jint>(); }
	static jint NO_STRETCH() { return get_static_field<"NO_STRETCH", jint>(); }
	static jint STRETCH_COLUMN_WIDTH() { return get_static_field<"STRETCH_COLUMN_WIDTH", jint>(); }
	static jint STRETCH_SPACING() { return get_static_field<"STRETCH_SPACING", jint>(); }
	static jint STRETCH_SPACING_UNIFORM() { return get_static_field<"STRETCH_SPACING_UNIFORM", jint>(); }

	static jni::ref<android::widget::GridView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::GridView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::GridView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::GridView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jni::ref<android::widget::ListAdapter> getAdapter() { return call_method<"getAdapter", jni::ref<android::widget::ListAdapter>>(); }
	void setRemoteViewsAdapter(jni::ref<android::content::Intent> intent) { return call_method<"setRemoteViewsAdapter", void>(intent); }
	void setAdapter(jni::ref<android::widget::ListAdapter> adapter) { return call_method<"setAdapter", void>(adapter); }
	void smoothScrollToPosition(jint position) { return call_method<"smoothScrollToPosition", void>(position); }
	void smoothScrollByOffset(jint offset) { return call_method<"smoothScrollByOffset", void>(offset); }
	void setSelection(jint position) { return call_method<"setSelection", void>(position); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyMultiple(jint keyCode, jint repeatCount, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyMultiple", jboolean>(keyCode, repeatCount, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	void setGravity(jint gravity) { return call_method<"setGravity", void>(gravity); }
	jint getGravity() { return call_method<"getGravity", jint>(); }
	void setHorizontalSpacing(jint horizontalSpacing) { return call_method<"setHorizontalSpacing", void>(horizontalSpacing); }
	jint getHorizontalSpacing() { return call_method<"getHorizontalSpacing", jint>(); }
	jint getRequestedHorizontalSpacing() { return call_method<"getRequestedHorizontalSpacing", jint>(); }
	void setVerticalSpacing(jint verticalSpacing) { return call_method<"setVerticalSpacing", void>(verticalSpacing); }
	jint getVerticalSpacing() { return call_method<"getVerticalSpacing", jint>(); }
	void setStretchMode(jint stretchMode) { return call_method<"setStretchMode", void>(stretchMode); }
	jint getStretchMode() { return call_method<"getStretchMode", jint>(); }
	void setColumnWidth(jint columnWidth) { return call_method<"setColumnWidth", void>(columnWidth); }
	jint getColumnWidth() { return call_method<"getColumnWidth", jint>(); }
	jint getRequestedColumnWidth() { return call_method<"getRequestedColumnWidth", jint>(); }
	void setNumColumns(jint numColumns) { return call_method<"setNumColumns", void>(numColumns); }
	jint getNumColumns() { return call_method<"getNumColumns", jint>(); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	void onInitializeAccessibilityNodeInfoForItem(jni::ref<android::view::View> view, jint position, jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfoForItem", void>(view, position, info); }

protected:

	GridView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GRIDVIEW
