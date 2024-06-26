// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLStringizer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECPOINTFORMATSEXTENSION_ECPOINTFORMATSSTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECPOINTFORMATSEXTENSION_ECPOINTFORMATSSTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ECPointFormatsExtension_ECPointFormatsStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ECPointFormatsExtension_ECPointFormatsStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ECPointFormatsExtension$ECPointFormatsStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLStringizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECPOINTFORMATSEXTENSION_ECPOINTFORMATSSTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECPOINTFORMATSEXTENSION_ECPOINTFORMATSSTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECPOINTFORMATSEXTENSION_ECPOINTFORMATSSTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ECPointFormatsExtension_ECPointFormatsStringizer : public jni::object_base<"sun/security/ssl/ECPointFormatsExtension$ECPointFormatsStringizer",
	java::lang::Object,
	sun::security::ssl::SSLStringizer>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"toString", jni::ref<java::lang::String>>(buffer); }

protected:

	ECPointFormatsExtension_ECPointFormatsStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECPOINTFORMATSEXTENSION_ECPOINTFORMATSSTRINGIZER
