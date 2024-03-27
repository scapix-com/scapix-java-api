// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/image/ImageProducer.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_FILTEREDIMAGESOURCE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_FILTEREDIMAGESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class FilteredImageSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::FilteredImageSource>
{
	static constexpr fixed_string class_name = "java/awt/image/FilteredImageSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::image::ImageProducer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_FILTEREDIMAGESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_FILTEREDIMAGESOURCE)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_FILTEREDIMAGESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ImageConsumer.h>
#include <scapix/java_api/java/awt/image/ImageFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::FilteredImageSource : public jni::object_base<"java/awt/image/FilteredImageSource",
	java::lang::Object,
	java::awt::image::ImageProducer>
{
public:

	static jni::ref<java::awt::image::FilteredImageSource> new_object(jni::ref<java::awt::image::ImageProducer> p1, jni::ref<java::awt::image::ImageFilter> p2) { return base_::new_object(p1, p2); }
	void addConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"addConsumer", void>(p1); }
	jboolean isConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"isConsumer", jboolean>(p1); }
	void removeConsumer(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"removeConsumer", void>(p1); }
	void startProduction(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"startProduction", void>(p1); }
	void requestTopDownLeftRightResend(jni::ref<java::awt::image::ImageConsumer> p1) { return call_method<"requestTopDownLeftRightResend", void>(p1); }

protected:

	FilteredImageSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_FILTEREDIMAGESOURCE