// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/ImageFilter.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFEREDIMAGEFILTER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFEREDIMAGEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class BufferedImageFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::BufferedImageFilter>
{
	static constexpr fixed_string class_name = "java/awt/image/BufferedImageFilter";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::ImageFilter, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFEREDIMAGEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFEREDIMAGEFILTER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFEREDIMAGEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/BufferedImageOp.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::BufferedImageFilter : public jni::object_base<"java/awt/image/BufferedImageFilter",
	java::awt::image::ImageFilter,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::awt::image::BufferedImageFilter> new_object(jni::ref<java::awt::image::BufferedImageOp> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::image::BufferedImageOp> getBufferedImageOp() { return call_method<"getBufferedImageOp", jni::ref<java::awt::image::BufferedImageOp>>(); }
	void setDimensions(jint p1, jint p2) { return call_method<"setDimensions", void>(p1, p2); }
	void setColorModel(jni::ref<java::awt::image::ColorModel> p1) { return call_method<"setColorModel", void>(p1); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jbyte>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jint>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void imageComplete(jint p1) { return call_method<"imageComplete", void>(p1); }

protected:

	BufferedImageFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_BUFFEREDIMAGEFILTER
