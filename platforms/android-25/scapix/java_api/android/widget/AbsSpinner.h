// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/AdapterView.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSPINNER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSPINNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class AbsSpinner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::AbsSpinner>
{
	static constexpr fixed_string class_name = "android/widget/AbsSpinner";
	using base_classes = std::tuple<scapix::java_api::android::widget::AdapterView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSPINNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSPINNER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSPINNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Parcelable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/widget/SpinnerAdapter.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::AbsSpinner : public jni::object_base<"android/widget/AbsSpinner",
	android::widget::AdapterView>
{
public:

	static jni::ref<android::widget::AbsSpinner> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::AbsSpinner> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::AbsSpinner> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::AbsSpinner> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setAdapter(jni::ref<android::widget::SpinnerAdapter> adapter) { return call_method<"setAdapter", void>(adapter); }
	void setSelection(jint position, jboolean animate) { return call_method<"setSelection", void>(position, animate); }
	void setSelection(jint position) { return call_method<"setSelection", void>(position); }
	jni::ref<android::view::View> getSelectedView() { return call_method<"getSelectedView", jni::ref<android::view::View>>(); }
	void requestLayout() { return call_method<"requestLayout", void>(); }
	jni::ref<android::widget::SpinnerAdapter> getAdapter() { return call_method<"getAdapter", jni::ref<android::widget::SpinnerAdapter>>(); }
	jint getCount() { return call_method<"getCount", jint>(); }
	jint pointToPosition(jint x, jint y) { return call_method<"pointToPosition", jint>(x, y); }
	jni::ref<android::os::Parcelable> onSaveInstanceState() { return call_method<"onSaveInstanceState", jni::ref<android::os::Parcelable>>(); }
	void onRestoreInstanceState(jni::ref<android::os::Parcelable> state) { return call_method<"onRestoreInstanceState", void>(state); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }

protected:

	AbsSpinner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSSPINNER
