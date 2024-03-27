// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_OP_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_OP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Path_Op; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Path_Op>
{
	static constexpr fixed_string class_name = "android/graphics/Path$Op";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_OP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_OP)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_OP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Path_Op : public jni::object_base<"android/graphics/Path$Op",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::Path_Op> DIFFERENCE() { return get_static_field<"DIFFERENCE", jni::ref<android::graphics::Path_Op>>(); }
	static jni::ref<android::graphics::Path_Op> INTERSECT() { return get_static_field<"INTERSECT", jni::ref<android::graphics::Path_Op>>(); }
	static jni::ref<android::graphics::Path_Op> REVERSE_DIFFERENCE() { return get_static_field<"REVERSE_DIFFERENCE", jni::ref<android::graphics::Path_Op>>(); }
	static jni::ref<android::graphics::Path_Op> UNION() { return get_static_field<"UNION", jni::ref<android::graphics::Path_Op>>(); }
	static jni::ref<android::graphics::Path_Op> XOR() { return get_static_field<"XOR", jni::ref<android::graphics::Path_Op>>(); }

	static jni::ref<jni::array<android::graphics::Path_Op>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::Path_Op>>>(); }
	static jni::ref<android::graphics::Path_Op> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::Path_Op>>(name); }

protected:

	Path_Op(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATH_OP