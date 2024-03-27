// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_CAMERA_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_CAMERA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Camera; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Camera>
{
	static constexpr fixed_string class_name = "android/graphics/Camera";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_CAMERA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_CAMERA)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_CAMERA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Matrix.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Camera : public jni::object_base<"android/graphics/Camera",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::Camera> new_object() { return base_::new_object(); }
	void save() { return call_method<"save", void>(); }
	void restore() { return call_method<"restore", void>(); }
	void translate(jfloat p1, jfloat p2, jfloat p3) { return call_method<"translate", void>(p1, p2, p3); }
	void rotateX(jfloat p1) { return call_method<"rotateX", void>(p1); }
	void rotateY(jfloat p1) { return call_method<"rotateY", void>(p1); }
	void rotateZ(jfloat p1) { return call_method<"rotateZ", void>(p1); }
	void rotate(jfloat p1, jfloat p2, jfloat p3) { return call_method<"rotate", void>(p1, p2, p3); }
	jfloat getLocationX() { return call_method<"getLocationX", jfloat>(); }
	jfloat getLocationY() { return call_method<"getLocationY", jfloat>(); }
	jfloat getLocationZ() { return call_method<"getLocationZ", jfloat>(); }
	void setLocation(jfloat p1, jfloat p2, jfloat p3) { return call_method<"setLocation", void>(p1, p2, p3); }
	void getMatrix(jni::ref<android::graphics::Matrix> matrix) { return call_method<"getMatrix", void>(matrix); }
	void applyToCanvas(jni::ref<android::graphics::Canvas> canvas) { return call_method<"applyToCanvas", void>(canvas); }
	jfloat dotWithNormal(jfloat p1, jfloat p2, jfloat p3) { return call_method<"dotWithNormal", jfloat>(p1, p2, p3); }

protected:

	Camera(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_CAMERA