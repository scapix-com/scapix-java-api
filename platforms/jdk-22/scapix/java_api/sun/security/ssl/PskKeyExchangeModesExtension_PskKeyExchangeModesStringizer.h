// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLStringizer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class PskKeyExchangeModesExtension_PskKeyExchangeModesStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeModesStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLStringizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::PskKeyExchangeModesExtension_PskKeyExchangeModesStringizer : public jni::object_base<"sun/security/ssl/PskKeyExchangeModesExtension$PskKeyExchangeModesStringizer",
	java::lang::Object,
	sun::security::ssl::SSLStringizer>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<sun::security::ssl::HandshakeContext> hc, jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"toString", jni::ref<java::lang::String>>(hc, buffer); }

protected:

	PskKeyExchangeModesExtension_PskKeyExchangeModesStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PSKKEYEXCHANGEMODESEXTENSION_PSKKEYEXCHANGEMODESSTRINGIZER
