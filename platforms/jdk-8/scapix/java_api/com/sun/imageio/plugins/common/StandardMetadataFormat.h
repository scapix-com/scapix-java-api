// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/metadata/IIOMetadataFormatImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_COMMON_STANDARDMETADATAFORMAT_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_COMMON_STANDARDMETADATAFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::common { class StandardMetadataFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::common::StandardMetadataFormat>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/common/StandardMetadataFormat";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::metadata::IIOMetadataFormatImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_COMMON_STANDARDMETADATAFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_COMMON_STANDARDMETADATAFORMAT)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_COMMON_STANDARDMETADATAFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::common::StandardMetadataFormat : public jni::object_base<"com/sun/imageio/plugins/common/StandardMetadataFormat",
	javax::imageio::metadata::IIOMetadataFormatImpl>
{
public:

	static jni::ref<com::sun::imageio::plugins::common::StandardMetadataFormat> new_object() { return base_::new_object(); }
	jboolean canNodeAppear(jni::ref<java::lang::String> p1, jni::ref<javax::imageio::ImageTypeSpecifier> p2) { return call_method<"canNodeAppear", jboolean>(p1, p2); }

protected:

	StandardMetadataFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_COMMON_STANDARDMETADATAFORMAT
