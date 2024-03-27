// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/image/codec/jpeg/JPEGImageEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_CODEC_JPEGIMAGEENCODERIMPL_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_CODEC_JPEGIMAGEENCODERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image::codec { class JPEGImageEncoderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::codec::JPEGImageEncoderImpl>
{
	static constexpr fixed_string class_name = "sun/awt/image/codec/JPEGImageEncoderImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::image::codec::jpeg::JPEGImageEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_CODEC_JPEGIMAGEENCODERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_CODEC_JPEGIMAGEENCODERIMPL)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_CODEC_JPEGIMAGEENCODERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/image/codec/jpeg/JPEGDecodeParam.h>
#include <scapix/java_api/com/sun/image/codec/jpeg/JPEGEncodeParam.h>
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::codec::JPEGImageEncoderImpl : public jni::object_base<"sun/awt/image/codec/JPEGImageEncoderImpl",
	java::lang::Object,
	com::sun::image::codec::jpeg::JPEGImageEncoder>
{
public:

	static jni::ref<sun::awt::image::codec::JPEGImageEncoderImpl> new_object(jni::ref<java::io::OutputStream> p1) { return base_::new_object(p1); }
	static jni::ref<sun::awt::image::codec::JPEGImageEncoderImpl> new_object(jni::ref<java::io::OutputStream> p1, jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> p2) { return base_::new_object(p1, p2); }
	jint getDefaultColorId(jni::ref<java::awt::image::ColorModel> p1) { return call_method<"getDefaultColorId", jint>(p1); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	void setJPEGEncodeParam(jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> p1) { return call_method<"setJPEGEncodeParam", void>(p1); }
	jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> getJPEGEncodeParam() { return call_method<"getJPEGEncodeParam", jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam>>(); }
	jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> getDefaultJPEGEncodeParam(jni::ref<java::awt::image::Raster> p1, jint p2) { return call_method<"getDefaultJPEGEncodeParam", jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam>>(p1, p2); }
	jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> getDefaultJPEGEncodeParam(jni::ref<java::awt::image::BufferedImage> p1) { return call_method<"getDefaultJPEGEncodeParam", jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam>>(p1); }
	jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> getDefaultJPEGEncodeParam(jint p1, jint p2) { return call_method<"getDefaultJPEGEncodeParam", jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam>>(p1, p2); }
	jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> getDefaultJPEGEncodeParam(jni::ref<com::sun::image::codec::jpeg::JPEGDecodeParam> p1) { return call_method<"getDefaultJPEGEncodeParam", jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam>>(p1); }
	void encode(jni::ref<java::awt::image::BufferedImage> p1) { return call_method<"encode", void>(p1); }
	void encode(jni::ref<java::awt::image::BufferedImage> p1, jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> p2) { return call_method<"encode", void>(p1, p2); }
	void encode(jni::ref<java::awt::image::Raster> p1) { return call_method<"encode", void>(p1); }
	void encode(jni::ref<java::awt::image::Raster> p1, jni::ref<com::sun::image::codec::jpeg::JPEGEncodeParam> p2) { return call_method<"encode", void>(p1, p2); }

protected:

	JPEGImageEncoderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_CODEC_JPEGIMAGEENCODERIMPL