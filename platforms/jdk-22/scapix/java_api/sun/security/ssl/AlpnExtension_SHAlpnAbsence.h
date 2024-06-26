// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/HandshakeAbsence.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_SHALPNABSENCE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_SHALPNABSENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class AlpnExtension_SHAlpnAbsence; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::AlpnExtension_SHAlpnAbsence>
{
	static constexpr fixed_string class_name = "sun/security/ssl/AlpnExtension$SHAlpnAbsence";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::HandshakeAbsence>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_SHALPNABSENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_SHALPNABSENCE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_SHALPNABSENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::AlpnExtension_SHAlpnAbsence : public jni::object_base<"sun/security/ssl/AlpnExtension$SHAlpnAbsence",
	java::lang::Object,
	sun::security::ssl::HandshakeAbsence>
{
public:

	void absent(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> message) { return call_method<"absent", void>(context, message); }

protected:

	AlpnExtension_SHAlpnAbsence(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALPNEXTENSION_SHALPNABSENCE
