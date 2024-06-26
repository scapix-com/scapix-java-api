// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/Paint.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GRADIENTPAINT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GRADIENTPAINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class GradientPaint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::GradientPaint>
{
	static constexpr fixed_string class_name = "java/awt/GradientPaint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::Paint>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRADIENTPAINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GRADIENTPAINT)
#define SCAPIX_JAVA_API_JAVA_AWT_GRADIENTPAINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/PaintContext.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/RenderingHints.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::GradientPaint : public jni::object_base<"java/awt/GradientPaint",
	java::lang::Object,
	java::awt::Paint>
{
public:

	static jni::ref<java::awt::GradientPaint> new_object(jfloat p1, jfloat p2, jni::ref<java::awt::Color> p3, jfloat p4, jfloat p5, jni::ref<java::awt::Color> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::awt::GradientPaint> new_object(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::geom::Point2D> p3, jni::ref<java::awt::Color> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::awt::GradientPaint> new_object(jfloat p1, jfloat p2, jni::ref<java::awt::Color> p3, jfloat p4, jfloat p5, jni::ref<java::awt::Color> p6, jboolean p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::awt::GradientPaint> new_object(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::Color> p2, jni::ref<java::awt::geom::Point2D> p3, jni::ref<java::awt::Color> p4, jboolean p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::geom::Point2D> getPoint1() { return call_method<"getPoint1", jni::ref<java::awt::geom::Point2D>>(); }
	jni::ref<java::awt::Color> getColor1() { return call_method<"getColor1", jni::ref<java::awt::Color>>(); }
	jni::ref<java::awt::geom::Point2D> getPoint2() { return call_method<"getPoint2", jni::ref<java::awt::geom::Point2D>>(); }
	jni::ref<java::awt::Color> getColor2() { return call_method<"getColor2", jni::ref<java::awt::Color>>(); }
	jboolean isCyclic() { return call_method<"isCyclic", jboolean>(); }
	jni::ref<java::awt::PaintContext> createContext(jni::ref<java::awt::image::ColorModel> p1, jni::ref<java::awt::Rectangle> p2, jni::ref<java::awt::geom::Rectangle2D> p3, jni::ref<java::awt::geom::AffineTransform> p4, jni::ref<java::awt::RenderingHints> p5) { return call_method<"createContext", jni::ref<java::awt::PaintContext>>(p1, p2, p3, p4, p5); }
	jint getTransparency() { return call_method<"getTransparency", jint>(); }

protected:

	GradientPaint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRADIENTPAINT
