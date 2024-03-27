// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PORTERDUFF_MODE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PORTERDUFF_MODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class PorterDuff_Mode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::PorterDuff_Mode>
{
	static constexpr fixed_string class_name = "android/graphics/PorterDuff$Mode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PORTERDUFF_MODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PORTERDUFF_MODE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PORTERDUFF_MODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::PorterDuff_Mode : public jni::object_base<"android/graphics/PorterDuff$Mode",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::PorterDuff_Mode> ADD() { return get_static_field<"ADD", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> CLEAR() { return get_static_field<"CLEAR", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> DARKEN() { return get_static_field<"DARKEN", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> DST() { return get_static_field<"DST", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> DST_ATOP() { return get_static_field<"DST_ATOP", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> DST_IN() { return get_static_field<"DST_IN", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> DST_OUT() { return get_static_field<"DST_OUT", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> DST_OVER() { return get_static_field<"DST_OVER", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> LIGHTEN() { return get_static_field<"LIGHTEN", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> MULTIPLY() { return get_static_field<"MULTIPLY", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> OVERLAY() { return get_static_field<"OVERLAY", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> SCREEN() { return get_static_field<"SCREEN", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> SRC() { return get_static_field<"SRC", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> SRC_ATOP() { return get_static_field<"SRC_ATOP", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> SRC_IN() { return get_static_field<"SRC_IN", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> SRC_OUT() { return get_static_field<"SRC_OUT", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> SRC_OVER() { return get_static_field<"SRC_OVER", jni::ref<android::graphics::PorterDuff_Mode>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> XOR() { return get_static_field<"XOR", jni::ref<android::graphics::PorterDuff_Mode>>(); }

	static jni::ref<jni::array<android::graphics::PorterDuff_Mode>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::PorterDuff_Mode>>>(); }
	static jni::ref<android::graphics::PorterDuff_Mode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::PorterDuff_Mode>>(name); }

protected:

	PorterDuff_Mode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PORTERDUFF_MODE