// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/window/OnBackInvokedCallback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKANIMATIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKANIMATIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::window { class OnBackAnimationCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::window::OnBackAnimationCallback>
{
	static constexpr fixed_string class_name = "android/window/OnBackAnimationCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::window::OnBackInvokedCallback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKANIMATIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKANIMATIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKANIMATIONCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/window/BackEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::window::OnBackAnimationCallback : public jni::object_base<"android/window/OnBackAnimationCallback",
	java::lang::Object,
	android::window::OnBackInvokedCallback>
{
public:

	void onBackStarted(jni::ref<android::window::BackEvent> backEvent) { return call_method<"onBackStarted", void>(backEvent); }
	void onBackProgressed(jni::ref<android::window::BackEvent> backEvent) { return call_method<"onBackProgressed", void>(backEvent); }
	void onBackCancelled() { return call_method<"onBackCancelled", void>(); }

protected:

	OnBackAnimationCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKANIMATIONCALLBACK
