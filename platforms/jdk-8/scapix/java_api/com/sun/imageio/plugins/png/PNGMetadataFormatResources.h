// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/ListResourceBundle.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGMETADATAFORMATRESOURCES_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGMETADATAFORMATRESOURCES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::png { class PNGMetadataFormatResources; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::png::PNGMetadataFormatResources>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/png/PNGMetadataFormatResources";
	using base_classes = std::tuple<scapix::java_api::java::util::ListResourceBundle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGMETADATAFORMATRESOURCES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGMETADATAFORMATRESOURCES)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGMETADATAFORMATRESOURCES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::png::PNGMetadataFormatResources : public jni::object_base<"com/sun/imageio/plugins/png/PNGMetadataFormatResources",
	java::util::ListResourceBundle>
{
public:

	static jni::ref<com::sun::imageio::plugins::png::PNGMetadataFormatResources> new_object() { return base_::new_object(); }

protected:

	PNGMetadataFormatResources(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGMETADATAFORMATRESOURCES