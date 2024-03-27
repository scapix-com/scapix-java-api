// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/ImageWriter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEWRITER_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::gif { class GIFImageWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::gif::GIFImageWriter>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/gif/GIFImageWriter";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::ImageWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEWRITER)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/imageio/plugins/gif/GIFImageWriterSpi.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/imageio/IIOImage.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#include <scapix/java_api/javax/imageio/ImageWriteParam.h>
#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::gif::GIFImageWriter : public jni::object_base<"com/sun/imageio/plugins/gif/GIFImageWriter",
	javax::imageio::ImageWriter>
{
public:

	static jni::ref<com::sun::imageio::plugins::gif::GIFImageWriter> new_object(jni::ref<com::sun::imageio::plugins::gif::GIFImageWriterSpi> p1) { return base_::new_object(p1); }
	jboolean canWriteSequence() { return call_method<"canWriteSequence", jboolean>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> convertStreamMetadata(jni::ref<javax::imageio::metadata::IIOMetadata> p1, jni::ref<javax::imageio::ImageWriteParam> p2) { return call_method<"convertStreamMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1, p2); }
	jni::ref<javax::imageio::metadata::IIOMetadata> convertImageMetadata(jni::ref<javax::imageio::metadata::IIOMetadata> p1, jni::ref<javax::imageio::ImageTypeSpecifier> p2, jni::ref<javax::imageio::ImageWriteParam> p3) { return call_method<"convertImageMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1, p2, p3); }
	void endWriteSequence() { return call_method<"endWriteSequence", void>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getDefaultImageMetadata(jni::ref<javax::imageio::ImageTypeSpecifier> p1, jni::ref<javax::imageio::ImageWriteParam> p2) { return call_method<"getDefaultImageMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1, p2); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getDefaultStreamMetadata(jni::ref<javax::imageio::ImageWriteParam> p1) { return call_method<"getDefaultStreamMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1); }
	jni::ref<javax::imageio::ImageWriteParam> getDefaultWriteParam() { return call_method<"getDefaultWriteParam", jni::ref<javax::imageio::ImageWriteParam>>(); }
	void prepareWriteSequence(jni::ref<javax::imageio::metadata::IIOMetadata> p1) { return call_method<"prepareWriteSequence", void>(p1); }
	void reset() { return call_method<"reset", void>(); }
	void setOutput(jni::ref<java::lang::Object> p1) { return call_method<"setOutput", void>(p1); }
	void write(jni::ref<javax::imageio::metadata::IIOMetadata> p1, jni::ref<javax::imageio::IIOImage> p2, jni::ref<javax::imageio::ImageWriteParam> p3) { return call_method<"write", void>(p1, p2, p3); }
	void writeToSequence(jni::ref<javax::imageio::IIOImage> p1, jni::ref<javax::imageio::ImageWriteParam> p2) { return call_method<"writeToSequence", void>(p1, p2); }

protected:

	GIFImageWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_GIF_GIFIMAGEWRITER