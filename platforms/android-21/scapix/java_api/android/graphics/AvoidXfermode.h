// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/Xfermode.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_AVOIDXFERMODE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_AVOIDXFERMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class AvoidXfermode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::AvoidXfermode>
{
	static constexpr fixed_string class_name = "android/graphics/AvoidXfermode";
	using base_classes = std::tuple<scapix::java_api::android::graphics::Xfermode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_AVOIDXFERMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_AVOIDXFERMODE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_AVOIDXFERMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/AvoidXfermode_Mode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::AvoidXfermode : public jni::object_base<"android/graphics/AvoidXfermode",
	android::graphics::Xfermode>
{
public:

	using Mode = AvoidXfermode_Mode;

	static jni::ref<android::graphics::AvoidXfermode> new_object(jint opColor, jint tolerance, jni::ref<android::graphics::AvoidXfermode_Mode> mode) { return base_::new_object(opColor, tolerance, mode); }

protected:

	AvoidXfermode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_AVOIDXFERMODE
