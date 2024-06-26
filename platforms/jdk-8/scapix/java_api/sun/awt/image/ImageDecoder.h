// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEDECODER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEDECODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class ImageDecoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::ImageDecoder>
{
	static constexpr fixed_string class_name = "sun/awt/image/ImageDecoder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEDECODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEDECODER)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEDECODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ImageConsumer.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/sun/awt/image/InputStreamImageSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::ImageDecoder : public jni::object_base<"sun/awt/image/ImageDecoder",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::image::ImageDecoder> new_object(jni::ref<sun::awt::image::InputStreamImageSource> p1, jni::ref<java::io::InputStream> p2) { return base_::new_object(p1, p2); }
	jboolean isConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"isConsumer", jboolean>(p1); }
	void removeConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"removeConsumer", void>(p1); }
	void produceImage() { return call_method<"produceImage", void>(); }
	void abort() { return call_method<"abort", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	ImageDecoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEDECODER
