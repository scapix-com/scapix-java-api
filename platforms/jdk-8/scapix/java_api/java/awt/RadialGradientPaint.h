// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/MultipleGradientPaint.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class RadialGradientPaint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::RadialGradientPaint>
{
	static constexpr fixed_string class_name = "java/awt/RadialGradientPaint";
	using base_classes = std::tuple<scapix::java_api::java::awt::MultipleGradientPaint>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINT)
#define SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/MultipleGradientPaint_ColorSpaceType.h>
#include <scapix/java_api/java/awt/MultipleGradientPaint_CycleMethod.h>
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

class java::awt::RadialGradientPaint : public jni::object_base<"java/awt/RadialGradientPaint",
	java::awt::MultipleGradientPaint>
{
public:

	static jni::ref<java::awt::RadialGradientPaint> new_object(jfloat p1, jfloat p2, jfloat p3, jni::ref<jni::array<jfloat>> p4, jni::ref<jni::array<java::awt::Color>> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jni::ref<java::awt::geom::Point2D> p1, jfloat p2, jni::ref<jni::array<jfloat>> p3, jni::ref<jni::array<java::awt::Color>> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jfloat p1, jfloat p2, jfloat p3, jni::ref<jni::array<jfloat>> p4, jni::ref<jni::array<java::awt::Color>> p5, jni::ref<java::awt::MultipleGradientPaint_CycleMethod> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jni::ref<java::awt::geom::Point2D> p1, jfloat p2, jni::ref<jni::array<jfloat>> p3, jni::ref<jni::array<java::awt::Color>> p4, jni::ref<java::awt::MultipleGradientPaint_CycleMethod> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jfloat p1, jfloat p2, jfloat p3, jfloat p4, jfloat p5, jni::ref<jni::array<jfloat>> p6, jni::ref<jni::array<java::awt::Color>> p7, jni::ref<java::awt::MultipleGradientPaint_CycleMethod> p8) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jni::ref<java::awt::geom::Point2D> p1, jfloat p2, jni::ref<java::awt::geom::Point2D> p3, jni::ref<jni::array<jfloat>> p4, jni::ref<jni::array<java::awt::Color>> p5, jni::ref<java::awt::MultipleGradientPaint_CycleMethod> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jni::ref<java::awt::geom::Point2D> p1, jfloat p2, jni::ref<java::awt::geom::Point2D> p3, jni::ref<jni::array<jfloat>> p4, jni::ref<jni::array<java::awt::Color>> p5, jni::ref<java::awt::MultipleGradientPaint_CycleMethod> p6, jni::ref<java::awt::MultipleGradientPaint_ColorSpaceType> p7, jni::ref<java::awt::geom::AffineTransform> p8) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8); }
	static jni::ref<java::awt::RadialGradientPaint> new_object(jni::ref<java::awt::geom::Rectangle2D> p1, jni::ref<jni::array<jfloat>> p2, jni::ref<jni::array<java::awt::Color>> p3, jni::ref<java::awt::MultipleGradientPaint_CycleMethod> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::awt::PaintContext> createContext(jni::ref<java::awt::image::ColorModel> p1, jni::ref<java::awt::Rectangle> p2, jni::ref<java::awt::geom::Rectangle2D> p3, jni::ref<java::awt::geom::AffineTransform> p4, jni::ref<java::awt::RenderingHints> p5) { return call_method<"createContext", jni::ref<java::awt::PaintContext>>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::geom::Point2D> getCenterPoint() { return call_method<"getCenterPoint", jni::ref<java::awt::geom::Point2D>>(); }
	jni::ref<java::awt::geom::Point2D> getFocusPoint() { return call_method<"getFocusPoint", jni::ref<java::awt::geom::Point2D>>(); }
	jfloat getRadius() { return call_method<"getRadius", jfloat>(); }

protected:

	RadialGradientPaint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINT
