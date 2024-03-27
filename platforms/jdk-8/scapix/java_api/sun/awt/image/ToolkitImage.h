// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Image.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_TOOLKITIMAGE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_TOOLKITIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class ToolkitImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::ToolkitImage>
{
	static constexpr fixed_string class_name = "sun/awt/image/ToolkitImage";
	using base_classes = std::tuple<scapix::java_api::java::awt::Image>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_TOOLKITIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_TOOLKITIMAGE)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_TOOLKITIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/ImageObserver.h>
#include <scapix/java_api/java/awt/image/ImageProducer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/image/ImageRepresentation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::ToolkitImage : public jni::object_base<"sun/awt/image/ToolkitImage",
	java::awt::Image>
{
public:

	static jni::ref<sun::awt::image::ToolkitImage> new_object(jni::ref<java::awt::image::ImageProducer> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::image::ImageProducer> getSource() { return call_method<"getSource", jni::ref<java::awt::image::ImageProducer>>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getWidth(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"getWidth", jint>(p1); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getHeight(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"getHeight", jint>(p1); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1, jni::ref<java::awt::image::ImageObserver> p2) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1, p2); }
	jboolean hasError() { return call_method<"hasError", jboolean>(); }
	jint check(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"check", jint>(p1); }
	void preload(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"preload", void>(p1); }
	void flush() { return call_method<"flush", void>(); }
	jni::ref<sun::awt::image::ImageRepresentation> getImageRep() { return call_method<"getImageRep", jni::ref<sun::awt::image::ImageRepresentation>>(); }
	jni::ref<java::awt::Graphics> getGraphics() { return call_method<"getGraphics", jni::ref<java::awt::Graphics>>(); }
	jni::ref<java::awt::image::ColorModel> getColorModel() { return call_method<"getColorModel", jni::ref<java::awt::image::ColorModel>>(); }
	jni::ref<java::awt::image::BufferedImage> getBufferedImage() { return call_method<"getBufferedImage", jni::ref<java::awt::image::BufferedImage>>(); }
	void setAccelerationPriority(jfloat p1) { return call_method<"setAccelerationPriority", void>(p1); }

protected:

	ToolkitImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_TOOLKITIMAGE
