// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/widget/SpinnerAdapter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_THEMEDSPINNERADAPTER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_THEMEDSPINNERADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ThemedSpinnerAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ThemedSpinnerAdapter>
{
	static constexpr fixed_string class_name = "android/widget/ThemedSpinnerAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::widget::SpinnerAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_THEMEDSPINNERADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_THEMEDSPINNERADAPTER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_THEMEDSPINNERADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources_Theme.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ThemedSpinnerAdapter : public jni::object_base<"android/widget/ThemedSpinnerAdapter",
	java::lang::Object,
	android::widget::SpinnerAdapter>
{
public:

	void setDropDownViewTheme(jni::ref<android::content::res::Resources_Theme> p1) { return call_method<"setDropDownViewTheme", void>(p1); }
	jni::ref<android::content::res::Resources_Theme> getDropDownViewTheme() { return call_method<"getDropDownViewTheme", jni::ref<android::content::res::Resources_Theme>>(); }

protected:

	ThemedSpinnerAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_THEMEDSPINNERADAPTER