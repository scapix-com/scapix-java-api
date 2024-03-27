// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/imageio/plugins/jpeg/MarkerSegment.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_DRIMARKERSEGMENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_DRIMARKERSEGMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::jpeg { class DRIMarkerSegment; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::jpeg::DRIMarkerSegment>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/jpeg/DRIMarkerSegment";
	using base_classes = std::tuple<scapix::java_api::com::sun::imageio::plugins::jpeg::MarkerSegment>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_DRIMARKERSEGMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_DRIMARKERSEGMENT)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_DRIMARKERSEGMENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::jpeg::DRIMarkerSegment : public jni::object_base<"com/sun/imageio/plugins/jpeg/DRIMarkerSegment",
	com::sun::imageio::plugins::jpeg::MarkerSegment>
{
public:


protected:

	DRIMarkerSegment(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_DRIMARKERSEGMENT