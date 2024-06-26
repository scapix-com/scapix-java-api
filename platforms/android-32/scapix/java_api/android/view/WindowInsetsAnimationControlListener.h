// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATIONCONTROLLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATIONCONTROLLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class WindowInsetsAnimationControlListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::WindowInsetsAnimationControlListener>
{
	static constexpr fixed_string class_name = "android/view/WindowInsetsAnimationControlListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATIONCONTROLLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATIONCONTROLLISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATIONCONTROLLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/WindowInsetsAnimationController.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::WindowInsetsAnimationControlListener : public jni::object_base<"android/view/WindowInsetsAnimationControlListener",
	java::lang::Object>
{
public:

	void onReady(jni::ref<android::view::WindowInsetsAnimationController> p1, jint p2) { return call_method<"onReady", void>(p1, p2); }
	void onFinished(jni::ref<android::view::WindowInsetsAnimationController> p1) { return call_method<"onFinished", void>(p1); }
	void onCancelled(jni::ref<android::view::WindowInsetsAnimationController> p1) { return call_method<"onCancelled", void>(p1); }

protected:

	WindowInsetsAnimationControlListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATIONCONTROLLISTENER
