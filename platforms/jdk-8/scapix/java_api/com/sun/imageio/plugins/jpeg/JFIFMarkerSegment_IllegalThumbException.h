// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ILLEGALTHUMBEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ILLEGALTHUMBEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::jpeg { class JFIFMarkerSegment_IllegalThumbException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment_IllegalThumbException>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ILLEGALTHUMBEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ILLEGALTHUMBEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ILLEGALTHUMBEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::jpeg::JFIFMarkerSegment_IllegalThumbException : public jni::object_base<"com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException",
	java::lang::Exception>
{
public:


protected:

	JFIFMarkerSegment_IllegalThumbException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_JPEG_JFIFMARKERSEGMENT_ILLEGALTHUMBEXCEPTION
