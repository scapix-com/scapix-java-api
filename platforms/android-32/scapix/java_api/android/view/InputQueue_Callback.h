// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INPUTQUEUE_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTQUEUE_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class InputQueue_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::InputQueue_Callback>
{
	static constexpr fixed_string class_name = "android/view/InputQueue$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTQUEUE_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INPUTQUEUE_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INPUTQUEUE_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/InputQueue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::InputQueue_Callback : public jni::object_base<"android/view/InputQueue$Callback",
	java::lang::Object>
{
public:

	void onInputQueueCreated(jni::ref<android::view::InputQueue> p1) { return call_method<"onInputQueueCreated", void>(p1); }
	void onInputQueueDestroyed(jni::ref<android::view::InputQueue> p1) { return call_method<"onInputQueueDestroyed", void>(p1); }

protected:

	InputQueue_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INPUTQUEUE_CALLBACK
