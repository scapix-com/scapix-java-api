// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/drawable/shapes/RectShape.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics::drawable::shapes { class ArcShape; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::drawable::shapes::ArcShape>
{
	static constexpr fixed_string class_name = "android/graphics/drawable/shapes/ArcShape";
	using base_classes = std::tuple<scapix::java_api::android::graphics::drawable::shapes::RectShape>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Outline.h>
#include <scapix/java_api/android/graphics/Paint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::drawable::shapes::ArcShape : public jni::object_base<"android/graphics/drawable/shapes/ArcShape",
	android::graphics::drawable::shapes::RectShape>
{
public:

	static jni::ref<android::graphics::drawable::shapes::ArcShape> new_object(jfloat startAngle, jfloat sweepAngle) { return base_::new_object(startAngle, sweepAngle); }
	jfloat getStartAngle() { return call_method<"getStartAngle", jfloat>(); }
	jfloat getSweepAngle() { return call_method<"getSweepAngle", jfloat>(); }
	void draw(jni::ref<android::graphics::Canvas> canvas, jni::ref<android::graphics::Paint> paint) { return call_method<"draw", void>(canvas, paint); }
	void getOutline(jni::ref<android::graphics::Outline> outline) { return call_method<"getOutline", void>(outline); }
	jni::ref<android::graphics::drawable::shapes::ArcShape> clone() { return call_method<"clone", jni::ref<android::graphics::drawable::shapes::ArcShape>>(); }

protected:

	ArcShape(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE