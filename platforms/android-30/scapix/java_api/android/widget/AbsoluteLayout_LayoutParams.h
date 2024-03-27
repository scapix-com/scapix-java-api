// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class AbsoluteLayout_LayoutParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::AbsoluteLayout_LayoutParams>
{
	static constexpr fixed_string class_name = "android/widget/AbsoluteLayout$LayoutParams";
	using base_classes = std::tuple<scapix::java_api::android::view::ViewGroup_LayoutParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::AbsoluteLayout_LayoutParams : public jni::object_base<"android/widget/AbsoluteLayout$LayoutParams",
	android::view::ViewGroup_LayoutParams>
{
public:

	jint x() { return get_field<"x", jint>(); }
	void x(jint v) { set_field<"x", jint>(v); }
	jint y() { return get_field<"y", jint>(); }
	void y(jint v) { set_field<"y", jint>(v); }

	static jni::ref<android::widget::AbsoluteLayout_LayoutParams> new_object(jint width, jint height, jint x, jint y) { return base_::new_object(width, height, x, y); }
	static jni::ref<android::widget::AbsoluteLayout_LayoutParams> new_object(jni::ref<android::content::Context> c, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
	static jni::ref<android::widget::AbsoluteLayout_LayoutParams> new_object(jni::ref<android::view::ViewGroup_LayoutParams> source) { return base_::new_object(source); }
	jni::ref<java::lang::String> debug(jni::ref<java::lang::String> output) { return call_method<"debug", jni::ref<java::lang::String>>(output); }

protected:

	AbsoluteLayout_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ABSOLUTELAYOUT_LAYOUTPARAMS
