// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_DIRECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_DIRECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Path_Direction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Path_Direction>
{
	static constexpr fixed_string class_name = "android/graphics/Path$Direction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_DIRECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_DIRECTION)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_DIRECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Path_Direction : public jni::object_base<"android/graphics/Path$Direction",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::Path_Direction> CW() { return get_static_field<"CW", jni::ref<android::graphics::Path_Direction>>(); }
	static jni::ref<android::graphics::Path_Direction> CCW() { return get_static_field<"CCW", jni::ref<android::graphics::Path_Direction>>(); }

	static jni::ref<jni::array<android::graphics::Path_Direction>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::Path_Direction>>>(); }
	static jni::ref<android::graphics::Path_Direction> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::Path_Direction>>(name); }

protected:

	Path_Direction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_DIRECTION
