// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/IIOParam.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADPARAM_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADPARAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio { class ImageReadParam; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::ImageReadParam>
{
	static constexpr fixed_string class_name = "javax/imageio/ImageReadParam";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::IIOParam>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADPARAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADPARAM)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADPARAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::ImageReadParam : public jni::object_base<"javax/imageio/ImageReadParam",
	javax::imageio::IIOParam>
{
public:

	static jni::ref<javax::imageio::ImageReadParam> new_object() { return base_::new_object(); }
	void setDestinationType(jni::ref<javax::imageio::ImageTypeSpecifier> p1) { return call_method<"setDestinationType", void>(p1); }
	void setDestination(jni::ref<java::awt::image::BufferedImage> p1) { return call_method<"setDestination", void>(p1); }
	jni::ref<java::awt::image::BufferedImage> getDestination() { return call_method<"getDestination", jni::ref<java::awt::image::BufferedImage>>(); }
	void setDestinationBands(jni::ref<jni::array<jint>> p1) { return call_method<"setDestinationBands", void>(p1); }
	jni::ref<jni::array<jint>> getDestinationBands() { return call_method<"getDestinationBands", jni::ref<jni::array<jint>>>(); }
	jboolean canSetSourceRenderSize() { return call_method<"canSetSourceRenderSize", jboolean>(); }
	void setSourceRenderSize(jni::ref<java::awt::Dimension> p1) { return call_method<"setSourceRenderSize", void>(p1); }
	jni::ref<java::awt::Dimension> getSourceRenderSize() { return call_method<"getSourceRenderSize", jni::ref<java::awt::Dimension>>(); }
	void setSourceProgressivePasses(jint p1, jint p2) { return call_method<"setSourceProgressivePasses", void>(p1, p2); }
	jint getSourceMinProgressivePass() { return call_method<"getSourceMinProgressivePass", jint>(); }
	jint getSourceMaxProgressivePass() { return call_method<"getSourceMaxProgressivePass", jint>(); }
	jint getSourceNumProgressivePasses() { return call_method<"getSourceNumProgressivePasses", jint>(); }

protected:

	ImageReadParam(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADPARAM
