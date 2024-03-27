// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class HandshakeContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::HandshakeContext>
{
	static constexpr fixed_string class_name = "sun/security/ssl/HandshakeContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::ConnectionContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONTEXT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::HandshakeContext : public jni::object_base<"sun/security/ssl/HandshakeContext",
	java::lang::Object,
	sun::security::ssl::ConnectionContext>
{
public:


protected:

	HandshakeContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONTEXT