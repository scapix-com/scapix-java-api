// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/imageio/event/IIOReadProgressListener.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_JFIFTHUMBJPEG_THUMBNAILREADLISTENER_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_JFIFTHUMBJPEG_THUMBNAILREADLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::jpeg { class JFIFMarkerSegment_JFIFThumbJPEG_ThumbnailReadListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment_JFIFThumbJPEG_ThumbnailReadListener>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::imageio::event::IIOReadProgressListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_JFIFTHUMBJPEG_THUMBNAILREADLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_JFIFTHUMBJPEG_THUMBNAILREADLISTENER)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_JFIFTHUMBJPEG_THUMBNAILREADLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/imageio/ImageReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::jpeg::JFIFMarkerSegment_JFIFThumbJPEG_ThumbnailReadListener : public jni::object_base<"com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener",
	java::lang::Object,
	javax::imageio::event::IIOReadProgressListener>
{
public:

	void sequenceStarted(jni::ref<javax::imageio::ImageReader> p1, jint p2) { return call_method<"sequenceStarted", void>(p1, p2); }
	void sequenceComplete(jni::ref<javax::imageio::ImageReader> p1) { return call_method<"sequenceComplete", void>(p1); }
	void imageStarted(jni::ref<javax::imageio::ImageReader> p1, jint p2) { return call_method<"imageStarted", void>(p1, p2); }
	void imageProgress(jni::ref<javax::imageio::ImageReader> p1, jfloat p2) { return call_method<"imageProgress", void>(p1, p2); }
	void imageComplete(jni::ref<javax::imageio::ImageReader> p1) { return call_method<"imageComplete", void>(p1); }
	void thumbnailStarted(jni::ref<javax::imageio::ImageReader> p1, jint p2, jint p3) { return call_method<"thumbnailStarted", void>(p1, p2, p3); }
	void thumbnailProgress(jni::ref<javax::imageio::ImageReader> p1, jfloat p2) { return call_method<"thumbnailProgress", void>(p1, p2); }
	void thumbnailComplete(jni::ref<javax::imageio::ImageReader> p1) { return call_method<"thumbnailComplete", void>(p1); }
	void readAborted(jni::ref<javax::imageio::ImageReader> p1) { return call_method<"readAborted", void>(p1); }

protected:

	JFIFMarkerSegment_JFIFThumbJPEG_ThumbnailReadListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_JFIFTHUMBJPEG_THUMBNAILREADLISTENER