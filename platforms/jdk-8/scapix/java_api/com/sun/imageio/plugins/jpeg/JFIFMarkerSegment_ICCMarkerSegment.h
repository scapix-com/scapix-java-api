// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/imageio/plugins/jpeg/MarkerSegment.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ICCMARKERSEGMENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ICCMARKERSEGMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::jpeg { class JFIFMarkerSegment_ICCMarkerSegment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment_ICCMarkerSegment>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment";
	using base_classes = std::tuple<scapix::java_api::com::sun::imageio::plugins::jpeg::MarkerSegment>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ICCMARKERSEGMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ICCMARKERSEGMENT)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ICCMARKERSEGMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::jpeg::JFIFMarkerSegment_ICCMarkerSegment : public jni::object_base<"com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment",
	com::sun::imageio::plugins::jpeg::MarkerSegment>
{
public:


protected:

	JFIFMarkerSegment_ICCMarkerSegment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ICCMARKERSEGMENT