// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SOUNDEFFECTCONSTANTS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SOUNDEFFECTCONSTANTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SoundEffectConstants; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SoundEffectConstants>
{
	static constexpr fixed_string class_name = "android/view/SoundEffectConstants";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SOUNDEFFECTCONSTANTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SOUNDEFFECTCONSTANTS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SOUNDEFFECTCONSTANTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SoundEffectConstants : public jni::object_base<"android/view/SoundEffectConstants",
	java::lang::Object>
{
public:

	static jint CLICK() { return get_static_field<"CLICK", jint>(); }
	static jint NAVIGATION_DOWN() { return get_static_field<"NAVIGATION_DOWN", jint>(); }
	static jint NAVIGATION_LEFT() { return get_static_field<"NAVIGATION_LEFT", jint>(); }
	static jint NAVIGATION_REPEAT_DOWN() { return get_static_field<"NAVIGATION_REPEAT_DOWN", jint>(); }
	static jint NAVIGATION_REPEAT_LEFT() { return get_static_field<"NAVIGATION_REPEAT_LEFT", jint>(); }
	static jint NAVIGATION_REPEAT_RIGHT() { return get_static_field<"NAVIGATION_REPEAT_RIGHT", jint>(); }
	static jint NAVIGATION_REPEAT_UP() { return get_static_field<"NAVIGATION_REPEAT_UP", jint>(); }
	static jint NAVIGATION_RIGHT() { return get_static_field<"NAVIGATION_RIGHT", jint>(); }
	static jint NAVIGATION_UP() { return get_static_field<"NAVIGATION_UP", jint>(); }

	static jint getContantForFocusDirection(jint direction) { return call_static_method<"getContantForFocusDirection", jint>(direction); }
	static jint getConstantForFocusDirection(jint direction, jboolean repeating) { return call_static_method<"getConstantForFocusDirection", jint>(direction, repeating); }

protected:

	SoundEffectConstants(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SOUNDEFFECTCONSTANTS
