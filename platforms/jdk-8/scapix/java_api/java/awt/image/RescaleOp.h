// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/image/BufferedImageOp.h>
#include <scapix/java_api/java/awt/image/RasterOp.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RESCALEOP_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RESCALEOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class RescaleOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::RescaleOp>
{
	static constexpr fixed_string class_name = "java/awt/image/RescaleOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::image::BufferedImageOp, scapix::java_api::java::awt::image::RasterOp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RESCALEOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RESCALEOP)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RESCALEOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/RenderingHints.h>
#include <scapix/java_api/java/awt/geom/Point2D.h>
#include <scapix/java_api/java/awt/geom/Rectangle2D.h>
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/awt/image/WritableRaster.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::RescaleOp : public jni::object_base<"java/awt/image/RescaleOp",
	java::lang::Object,
	java::awt::image::BufferedImageOp,
	java::awt::image::RasterOp>
{
public:

	static jni::ref<java::awt::image::RescaleOp> new_object(jni::ref<jni::array<jfloat>> p1, jni::ref<jni::array<jfloat>> p2, jni::ref<java::awt::RenderingHints> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::awt::image::RescaleOp> new_object(jfloat p1, jfloat p2, jni::ref<java::awt::RenderingHints> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<jni::array<jfloat>> getScaleFactors(jni::ref<jni::array<jfloat>> p1) { return call_method<"getScaleFactors", jni::ref<jni::array<jfloat>>>(p1); }
	jni::ref<jni::array<jfloat>> getOffsets(jni::ref<jni::array<jfloat>> p1) { return call_method<"getOffsets", jni::ref<jni::array<jfloat>>>(p1); }
	jint getNumFactors() { return call_method<"getNumFactors", jint>(); }
	jni::ref<java::awt::image::BufferedImage> filter(jni::ref<java::awt::image::BufferedImage> p1, jni::ref<java::awt::image::BufferedImage> p2) { return call_method<"filter", jni::ref<java::awt::image::BufferedImage>>(p1, p2); }
	jni::ref<java::awt::image::WritableRaster> filter(jni::ref<java::awt::image::Raster> p1, jni::ref<java::awt::image::WritableRaster> p2) { return call_method<"filter", jni::ref<java::awt::image::WritableRaster>>(p1, p2); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D(jni::ref<java::awt::image::BufferedImage> p1) { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	jni::ref<java::awt::geom::Rectangle2D> getBounds2D(jni::ref<java::awt::image::Raster> p1) { return call_method<"getBounds2D", jni::ref<java::awt::geom::Rectangle2D>>(p1); }
	jni::ref<java::awt::image::BufferedImage> createCompatibleDestImage(jni::ref<java::awt::image::BufferedImage> p1, jni::ref<java::awt::image::ColorModel> p2) { return call_method<"createCompatibleDestImage", jni::ref<java::awt::image::BufferedImage>>(p1, p2); }
	jni::ref<java::awt::image::WritableRaster> createCompatibleDestRaster(jni::ref<java::awt::image::Raster> p1) { return call_method<"createCompatibleDestRaster", jni::ref<java::awt::image::WritableRaster>>(p1); }
	jni::ref<java::awt::geom::Point2D> getPoint2D(jni::ref<java::awt::geom::Point2D> p1, jni::ref<java::awt::geom::Point2D> p2) { return call_method<"getPoint2D", jni::ref<java::awt::geom::Point2D>>(p1, p2); }
	jni::ref<java::awt::RenderingHints> getRenderingHints() { return call_method<"getRenderingHints", jni::ref<java::awt::RenderingHints>>(); }

protected:

	RescaleOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RESCALEOP
