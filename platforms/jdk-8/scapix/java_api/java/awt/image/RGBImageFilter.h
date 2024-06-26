// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/ImageFilter.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RGBIMAGEFILTER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RGBIMAGEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class RGBImageFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::RGBImageFilter>
{
	static constexpr fixed_string class_name = "java/awt/image/RGBImageFilter";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::ImageFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RGBIMAGEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RGBIMAGEFILTER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RGBIMAGEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/IndexColorModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::RGBImageFilter : public jni::object_base<"java/awt/image/RGBImageFilter",
	java::awt::image::ImageFilter>
{
public:

	static jni::ref<java::awt::image::RGBImageFilter> new_object() { return base_::new_object(); }
	void setColorModel(jni::ref<java::awt::image::ColorModel> p1) { return call_method<"setColorModel", void>(p1); }
	void substituteColorModel(jni::ref<java::awt::image::ColorModel> p1, jni::ref<java::awt::image::ColorModel> p2) { return call_method<"substituteColorModel", void>(p1, p2); }
	jni::ref<java::awt::image::IndexColorModel> filterIndexColorModel(jni::ref<java::awt::image::IndexColorModel> p1) { return call_method<"filterIndexColorModel", jni::ref<java::awt::image::IndexColorModel>>(p1); }
	void filterRGBPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<jni::array<jint>> p5, jint p6, jint p7) { return call_method<"filterRGBPixels", void>(p1, p2, p3, p4, p5, p6, p7); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jbyte>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jint>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	jint filterRGB(jint p1, jint p2, jint p3) { return call_method<"filterRGB", jint>(p1, p2, p3); }

protected:

	RGBImageFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_RGBIMAGEFILTER
