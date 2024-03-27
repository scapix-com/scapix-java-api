// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/image/ImageConsumer.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEFILTER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class ImageFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::ImageFilter>
{
	static constexpr fixed_string class_name = "java/awt/image/ImageFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::image::ImageConsumer, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEFILTER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/ImageProducer.h>
#include <scapix/java_api/java/util/Hashtable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::ImageFilter : public jni::object_base<"java/awt/image/ImageFilter",
	java::lang::Object,
	java::awt::image::ImageConsumer,
	java::lang::Cloneable>
{
public:

	static jni::ref<java::awt::image::ImageFilter> new_object() { return base_::new_object(); }
	jni::ref<java::awt::image::ImageFilter> getFilterInstance(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"getFilterInstance", jni::ref<java::awt::image::ImageFilter>>(p1); }
	void setDimensions(jint p1, jint p2) { return call_method<"setDimensions", void>(p1, p2); }
	void setProperties(jni::ref<java::util::Hashtable> p1) { return call_method<"setProperties", void>(p1); }
	void setColorModel(jni::ref<java::awt::image::ColorModel> p1) { return call_method<"setColorModel", void>(p1); }
	void setHints(jint p1) { return call_method<"setHints", void>(p1); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jbyte>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void setPixels(jint p1, jint p2, jint p3, jint p4, jni::ref<java::awt::image::ColorModel> p5, jni::ref<jni::array<jint>> p6, jint p7, jint p8) { return call_method<"setPixels", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void imageComplete(jint p1) { return call_method<"imageComplete", void>(p1); }
	void resendTopDownLeftRight(jni::ref<java::awt::image::ImageProducer> p1) { return call_method<"resendTopDownLeftRight", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	ImageFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEFILTER