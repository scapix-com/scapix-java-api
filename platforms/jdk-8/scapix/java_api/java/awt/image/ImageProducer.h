// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEPRODUCER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEPRODUCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class ImageProducer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::ImageProducer>
{
	static constexpr fixed_string class_name = "java/awt/image/ImageProducer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEPRODUCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEPRODUCER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEPRODUCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ImageConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::ImageProducer : public jni::object_base<"java/awt/image/ImageProducer",
	java::lang::Object>
{
public:

	void addConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"addConsumer", void>(p1); }
	jboolean isConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"isConsumer", jboolean>(p1); }
	void removeConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"removeConsumer", void>(p1); }
	void startProduction(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"startProduction", void>(p1); }
	void requestTopDownLeftRightResend(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"requestTopDownLeftRightResend", void>(p1); }

protected:

	ImageProducer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_IMAGEPRODUCER
