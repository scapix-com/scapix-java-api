// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/ColorModel.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTCOLORMODEL_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTCOLORMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class ComponentColorModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::ComponentColorModel>
{
	static constexpr fixed_string class_name = "java/awt/image/ComponentColorModel";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::ColorModel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTCOLORMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTCOLORMODEL)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTCOLORMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/color/ColorSpace.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/awt/image/SampleModel.h>
#include <scapix/java_api/java/awt/image/WritableRaster.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::ComponentColorModel : public jni::object_base<"java/awt/image/ComponentColorModel",
	java::awt::image::ColorModel>
{
public:

	static jni::ref<java::awt::image::ComponentColorModel> new_object(jni::ref<java::awt::color::ColorSpace> p1, jni::ref<jni::array<jint>> p2, jboolean p3, jboolean p4, jint p5, jint p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::awt::image::ComponentColorModel> new_object(jni::ref<java::awt::color::ColorSpace> p1, jboolean p2, jboolean p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jint getRed(jint p1) { return call_method<"getRed", jint>(p1); }
	jint getGreen(jint p1) { return call_method<"getGreen", jint>(p1); }
	jint getBlue(jint p1) { return call_method<"getBlue", jint>(p1); }
	jint getAlpha(jint p1) { return call_method<"getAlpha", jint>(p1); }
	jint getRGB(jint p1) { return call_method<"getRGB", jint>(p1); }
	jint getRed(jni::ref<java::lang::Object> p1) { return call_method<"getRed", jint>(p1); }
	jint getGreen(jni::ref<java::lang::Object> p1) { return call_method<"getGreen", jint>(p1); }
	jint getBlue(jni::ref<java::lang::Object> p1) { return call_method<"getBlue", jint>(p1); }
	jint getAlpha(jni::ref<java::lang::Object> p1) { return call_method<"getAlpha", jint>(p1); }
	jint getRGB(jni::ref<java::lang::Object> p1) { return call_method<"getRGB", jint>(p1); }
	jni::ref<java::lang::Object> getDataElements(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"getDataElements", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<jni::array<jint>> getComponents(jint p1, jni::ref<jni::array<jint>> p2, jint p3) { return call_method<"getComponents", jni::ref<jni::array<jint>>>(p1, p2, p3); }
	jni::ref<jni::array<jint>> getComponents(jni::ref<java::lang::Object> p1, jni::ref<jni::array<jint>> p2, jint p3) { return call_method<"getComponents", jni::ref<jni::array<jint>>>(p1, p2, p3); }
	jni::ref<jni::array<jint>> getUnnormalizedComponents(jni::ref<jni::array<jfloat>> p1, jint p2, jni::ref<jni::array<jint>> p3, jint p4) { return call_method<"getUnnormalizedComponents", jni::ref<jni::array<jint>>>(p1, p2, p3, p4); }
	jni::ref<jni::array<jfloat>> getNormalizedComponents(jni::ref<jni::array<jint>> p1, jint p2, jni::ref<jni::array<jfloat>> p3, jint p4) { return call_method<"getNormalizedComponents", jni::ref<jni::array<jfloat>>>(p1, p2, p3, p4); }
	jint getDataElement(jni::ref<jni::array<jint>> p1, jint p2) { return call_method<"getDataElement", jint>(p1, p2); }
	jni::ref<java::lang::Object> getDataElements(jni::ref<jni::array<jint>> p1, jint p2, jni::ref<java::lang::Object> p3) { return call_method<"getDataElements", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jint getDataElement(jni::ref<jni::array<jfloat>> p1, jint p2) { return call_method<"getDataElement", jint>(p1, p2); }
	jni::ref<java::lang::Object> getDataElements(jni::ref<jni::array<jfloat>> p1, jint p2, jni::ref<java::lang::Object> p3) { return call_method<"getDataElements", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<jni::array<jfloat>> getNormalizedComponents(jni::ref<java::lang::Object> p1, jni::ref<jni::array<jfloat>> p2, jint p3) { return call_method<"getNormalizedComponents", jni::ref<jni::array<jfloat>>>(p1, p2, p3); }
	jni::ref<java::awt::image::ColorModel> coerceData(jni::ref<java::awt::image::WritableRaster> p1, jboolean p2) { return call_method<"coerceData", jni::ref<java::awt::image::ColorModel>>(p1, p2); }
	jboolean isCompatibleRaster(jni::ref<java::awt::image::Raster> p1) { return call_method<"isCompatibleRaster", jboolean>(p1); }
	jni::ref<java::awt::image::WritableRaster> createCompatibleWritableRaster(jint p1, jint p2) { return call_method<"createCompatibleWritableRaster", jni::ref<java::awt::image::WritableRaster>>(p1, p2); }
	jni::ref<java::awt::image::SampleModel> createCompatibleSampleModel(jint p1, jint p2) { return call_method<"createCompatibleSampleModel", jni::ref<java::awt::image::SampleModel>>(p1, p2); }
	jboolean isCompatibleSampleModel(jni::ref<java::awt::image::SampleModel> p1) { return call_method<"isCompatibleSampleModel", jboolean>(p1); }
	jni::ref<java::awt::image::WritableRaster> getAlphaRaster(jni::ref<java::awt::image::WritableRaster> p1) { return call_method<"getAlphaRaster", jni::ref<java::awt::image::WritableRaster>>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	ComponentColorModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_COMPONENTCOLORMODEL
