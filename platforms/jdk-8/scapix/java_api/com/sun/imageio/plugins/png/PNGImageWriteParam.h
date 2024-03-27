// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/ImageWriteParam.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEWRITEPARAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEWRITEPARAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::png { class PNGImageWriteParam; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::png::PNGImageWriteParam>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/png/PNGImageWriteParam";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::ImageWriteParam>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEWRITEPARAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEWRITEPARAM)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEWRITEPARAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::png::PNGImageWriteParam : public jni::object_base<"com/sun/imageio/plugins/png/PNGImageWriteParam",
	javax::imageio::ImageWriteParam>
{
public:

	static jni::ref<com::sun::imageio::plugins::png::PNGImageWriteParam> new_object(jni::ref<java::util::Locale> p1) { return base_::new_object(p1); }

protected:

	PNGImageWriteParam(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEWRITEPARAM