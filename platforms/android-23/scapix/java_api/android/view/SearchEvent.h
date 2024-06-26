// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SEARCHEVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SEARCHEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SearchEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SearchEvent>
{
	static constexpr fixed_string class_name = "android/view/SearchEvent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SEARCHEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SEARCHEVENT)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SEARCHEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/InputDevice.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SearchEvent : public jni::object_base<"android/view/SearchEvent",
	java::lang::Object>
{
public:

	static jni::ref<android::view::SearchEvent> new_object(jni::ref<android::view::InputDevice> inputDevice) { return base_::new_object(inputDevice); }
	jni::ref<android::view::InputDevice> getInputDevice() { return call_method<"getInputDevice", jni::ref<android::view::InputDevice>>(); }

protected:

	SearchEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SEARCHEVENT
