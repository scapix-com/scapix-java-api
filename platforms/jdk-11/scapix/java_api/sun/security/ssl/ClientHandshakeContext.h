// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CLIENTHANDSHAKECONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CLIENTHANDSHAKECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ClientHandshakeContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ClientHandshakeContext>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ClientHandshakeContext";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::HandshakeContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CLIENTHANDSHAKECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CLIENTHANDSHAKECONTEXT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CLIENTHANDSHAKECONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ClientHandshakeContext : public jni::object_base<"sun/security/ssl/ClientHandshakeContext",
	sun::security::ssl::HandshakeContext>
{
public:


protected:

	ClientHandshakeContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CLIENTHANDSHAKECONTEXT
