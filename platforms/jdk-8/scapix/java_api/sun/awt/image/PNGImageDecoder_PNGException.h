// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_PNGIMAGEDECODER_PNGEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_PNGIMAGEDECODER_PNGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class PNGImageDecoder_PNGException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::PNGImageDecoder_PNGException>
{
	static constexpr fixed_string class_name = "sun/awt/image/PNGImageDecoder$PNGException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_PNGIMAGEDECODER_PNGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_PNGIMAGEDECODER_PNGEXCEPTION)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_PNGIMAGEDECODER_PNGEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::PNGImageDecoder_PNGException : public jni::object_base<"sun/awt/image/PNGImageDecoder$PNGException",
	java::io::IOException>
{
public:


protected:

	PNGImageDecoder_PNGException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_PNGIMAGEDECODER_PNGEXCEPTION
