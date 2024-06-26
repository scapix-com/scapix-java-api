// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLExtension_SSLExtensionSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SESSIONTICKETEXTENSION_SESSIONTICKETSPEC_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SESSIONTICKETEXTENSION_SESSIONTICKETSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SessionTicketExtension_SessionTicketSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SessionTicketExtension_SessionTicketSpec>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SessionTicketExtension$SessionTicketSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLExtension_SSLExtensionSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SESSIONTICKETEXTENSION_SESSIONTICKETSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SESSIONTICKETEXTENSION_SESSIONTICKETSPEC)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SESSIONTICKETEXTENSION_SESSIONTICKETSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLSessionImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SessionTicketExtension_SessionTicketSpec : public jni::object_base<"sun/security/ssl/SessionTicketExtension$SessionTicketSpec",
	java::lang::Object,
	sun::security::ssl::SSLExtension_SSLExtensionSpec>
{
public:

	jni::ref<jni::array<jbyte>> encrypt(jni::ref<sun::security::ssl::HandshakeContext> hc, jni::ref<sun::security::ssl::SSLSessionImpl> session) { return call_method<"encrypt", jni::ref<jni::array<jbyte>>>(hc, session); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SessionTicketExtension_SessionTicketSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SESSIONTICKETEXTENSION_SESSIONTICKETSPEC
