// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLStringizer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_CHSUPPORTEDVERSIONSSTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_CHSUPPORTEDVERSIONSSTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SupportedVersionsExtension_CHSupportedVersionsStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SupportedVersionsExtension_CHSupportedVersionsStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLStringizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_CHSUPPORTEDVERSIONSSTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_CHSUPPORTEDVERSIONSSTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_CHSUPPORTEDVERSIONSSTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SupportedVersionsExtension_CHSupportedVersionsStringizer : public jni::object_base<"sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsStringizer",
	java::lang::Object,
	sun::security::ssl::SSLStringizer>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<sun::security::ssl::HandshakeContext> hc, jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"toString", jni::ref<java::lang::String>>(hc, buffer); }

protected:

	SupportedVersionsExtension_CHSupportedVersionsStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_CHSUPPORTEDVERSIONSSTRINGIZER
