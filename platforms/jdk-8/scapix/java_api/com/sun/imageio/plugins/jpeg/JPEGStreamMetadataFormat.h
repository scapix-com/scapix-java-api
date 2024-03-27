// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/imageio/plugins/jpeg/JPEGMetadataFormat.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JPEGSTREAMMETADATAFORMAT_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JPEGSTREAMMETADATAFORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::jpeg { class JPEGStreamMetadataFormat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::jpeg::JPEGStreamMetadataFormat>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormat";
	using base_classes = std::tuple<scapix::java_api::com::sun::imageio::plugins::jpeg::JPEGMetadataFormat>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JPEGSTREAMMETADATAFORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JPEGSTREAMMETADATAFORMAT)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JPEGSTREAMMETADATAFORMAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/imageio/metadata/IIOMetadataFormat.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::jpeg::JPEGStreamMetadataFormat : public jni::object_base<"com/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormat",
	com::sun::imageio::plugins::jpeg::JPEGMetadataFormat>
{
public:

	static jni::ref<javax::imageio::metadata::IIOMetadataFormat> getInstance() { return call_static_method<"getInstance", jni::ref<javax::imageio::metadata::IIOMetadataFormat>>(); }

protected:

	JPEGStreamMetadataFormat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JPEGSTREAMMETADATAFORMAT
