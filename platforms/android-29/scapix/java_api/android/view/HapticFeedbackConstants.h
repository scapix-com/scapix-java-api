// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class HapticFeedbackConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::HapticFeedbackConstants>
{
	static constexpr fixed_string class_name = "android/view/HapticFeedbackConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::HapticFeedbackConstants : public jni::object_base<"android/view/HapticFeedbackConstants",
	java::lang::Object>
{
public:

	static jint CLOCK_TICK() { return get_static_field<"CLOCK_TICK", jint>(); }
	static jint CONTEXT_CLICK() { return get_static_field<"CONTEXT_CLICK", jint>(); }
	static jint FLAG_IGNORE_GLOBAL_SETTING() { return get_static_field<"FLAG_IGNORE_GLOBAL_SETTING", jint>(); }
	static jint FLAG_IGNORE_VIEW_SETTING() { return get_static_field<"FLAG_IGNORE_VIEW_SETTING", jint>(); }
	static jint KEYBOARD_PRESS() { return get_static_field<"KEYBOARD_PRESS", jint>(); }
	static jint KEYBOARD_RELEASE() { return get_static_field<"KEYBOARD_RELEASE", jint>(); }
	static jint KEYBOARD_TAP() { return get_static_field<"KEYBOARD_TAP", jint>(); }
	static jint LONG_PRESS() { return get_static_field<"LONG_PRESS", jint>(); }
	static jint TEXT_HANDLE_MOVE() { return get_static_field<"TEXT_HANDLE_MOVE", jint>(); }
	static jint VIRTUAL_KEY() { return get_static_field<"VIRTUAL_KEY", jint>(); }
	static jint VIRTUAL_KEY_RELEASE() { return get_static_field<"VIRTUAL_KEY_RELEASE", jint>(); }


protected:

	HapticFeedbackConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_HAPTICFEEDBACKCONSTANTS
