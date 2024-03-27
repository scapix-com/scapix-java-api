// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/shapes/Shape.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable::shapes { class RectShape; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::shapes::RectShape>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/shapes/RectShape";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::shapes::Shape>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::shapes::RectShape : public jni::object_base<"android/graphics/drawable/shapes/RectShape",
	android::graphics::drawable::shapes::Shape>
{
public:

	static jni::ref<android::graphics::drawable::shapes::RectShape> new_object() { return base_::new_object(); }
	void draw(jni::ref<android::graphics::Canvas> canvas, jni::ref<android::graphics::Paint> paint) { return call_method<"draw", void>(canvas, paint); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }
	jni::ref<android::graphics::drawable::shapes::RectShape> clone() { return call_method<"clone", jni::ref<android::graphics::drawable::shapes::RectShape>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	RectShape(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_RECTSHAPE