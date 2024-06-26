// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/ActionBar_LayoutParams.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Toolbar_LayoutParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Toolbar_LayoutParams>
{
	static constexpr fixed_string class_name = "android/widget/Toolbar$LayoutParams";
	using base_classes = std::tuple<scapix::java_api::android::app::ActionBar_LayoutParams>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/ViewGroup_MarginLayoutParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Toolbar_LayoutParams : public jni::object_base<"android/widget/Toolbar$LayoutParams",
	android::app::ActionBar_LayoutParams>
{
public:

	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jni::ref<android::content::Context> c, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(c, attrs); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jint width, jint height) { return base_::new_object(width, height); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jint width, jint height, jint gravity) { return base_::new_object(width, height, gravity); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jint gravity) { return base_::new_object(gravity); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jni::ref<android::widget::Toolbar_LayoutParams> source) { return base_::new_object(source); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jni::ref<android::app::ActionBar_LayoutParams> source) { return base_::new_object(source); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jni::ref<android::view::ViewGroup_MarginLayoutParams> source) { return base_::new_object(source); }
	static jni::ref<android::widget::Toolbar_LayoutParams> new_object(jni::ref<android::view::ViewGroup_LayoutParams> source) { return base_::new_object(source); }

protected:

	Toolbar_LayoutParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TOOLBAR_LAYOUTPARAMS
