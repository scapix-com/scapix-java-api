// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKINVOKEDDISPATCHER_FWD
#define SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKINVOKEDDISPATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::window { class OnBackInvokedDispatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::window::OnBackInvokedDispatcher>
{
	static constexpr fixed_string class_name = "android/window/OnBackInvokedDispatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKINVOKEDDISPATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKINVOKEDDISPATCHER)
#define SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKINVOKEDDISPATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/window/OnBackInvokedCallback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::window::OnBackInvokedDispatcher : public jni::object_base<"android/window/OnBackInvokedDispatcher",
	java::lang::Object>
{
public:

	static jint PRIORITY_DEFAULT() { return get_static_field<"PRIORITY_DEFAULT", jint>(); }
	static jint PRIORITY_OVERLAY() { return get_static_field<"PRIORITY_OVERLAY", jint>(); }

	void registerOnBackInvokedCallback(jint p1, jni::ref<android::window::OnBackInvokedCallback> p2) { return call_method<"registerOnBackInvokedCallback", void>(p1, p2); }
	void unregisterOnBackInvokedCallback(jni::ref<android::window::OnBackInvokedCallback> p1) { return call_method<"unregisterOnBackInvokedCallback", void>(p1); }

protected:

	OnBackInvokedDispatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WINDOW_ONBACKINVOKEDDISPATCHER
