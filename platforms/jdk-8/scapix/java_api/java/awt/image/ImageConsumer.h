// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGECONSUMER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGECONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class ImageConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::ImageConsumer>
{
	static constexpr fixed_string class_name = "java/awt/image/ImageConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGECONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGECONSUMER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGECONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/util/Hashtable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::ImageConsumer : public jni::object_base<"java/awt/image/ImageConsumer",
	java::lang::Object>
{
public:

	static jint RANDOMPIXELORDER() { return get_static_field<"RANDOMPIXELORDER", jint>(); }
	static jint TOPDOWNLEFTRIGHT() { return get_static_field<"TOPDOWNLEFTRIGHT", jint>(); }
	static jint COMPLETESCANLINES() { return get_static_field<"COMPLETESCANLINES", jint>(); }
	static jint SINGLEPASS() { return get_static_field<"SINGLEPASS", jint>(); }
	static jint SINGLEFRAME() { return get_static_field<"SINGLEFRAME", jint>(); }
	static jint IMAGEERROR() { return get_static_field<"IMAGEERROR", jint>(); }
	static jint SINGLEFRAMEDONE() { return get_static_field<"SINGLEFRAMEDONE", jint>(); }
	static jint STATICIMAGEDONE() { return get_static_field<"STATICIMAGEDONE", jint>(); }
	static jint IMAGEABORTED() { return get_static_field<"IMAGEABORTED", jint>(); }

	void setDimensions(jint p1, jint p2) { return call_method<"setDimensions", void>(p1, p2); }
	void setProperties(jni::ref<java::util::Hashtable> p1) { return call_method<"setProperties", void>(p1); }
	void setColorModel(jni::ref<java::awt::image::ColorModel> p1) { return call_method<"setColorModel", void>(p1); }
	void setHints(jint p1) { return call_method<"setHints", void>(p1); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jbyte>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jint>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void imageComplete(jint p1) { return call_method<"imageComplete", void>(p1); }

protected:

	ImageConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGECONSUMER