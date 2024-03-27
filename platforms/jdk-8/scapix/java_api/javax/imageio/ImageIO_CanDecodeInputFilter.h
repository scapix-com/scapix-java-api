// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/imageio/spi/ServiceRegistry_Filter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEIO_CANDECODEINPUTFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEIO_CANDECODEINPUTFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio { class ImageIO_CanDecodeInputFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::ImageIO_CanDecodeInputFilter>
{
	static constexpr fixed_string class_name = "javax/imageio/ImageIO$CanDecodeInputFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::imageio::spi::ServiceRegistry_Filter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEIO_CANDECODEINPUTFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEIO_CANDECODEINPUTFILTER)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEIO_CANDECODEINPUTFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::imageio::ImageIO_CanDecodeInputFilter : public jni::object_base<"javax/imageio/ImageIO$CanDecodeInputFilter",
	java::lang::Object,
	javax::imageio::spi::ServiceRegistry_Filter>
{
public:

	static jni::ref<javax::imageio::ImageIO_CanDecodeInputFilter> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	jboolean filter(jni::ref<java::lang::Object> p1) { return call_method<"filter", jboolean>(p1); }

protected:

	ImageIO_CanDecodeInputFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEIO_CANDECODEINPUTFILTER