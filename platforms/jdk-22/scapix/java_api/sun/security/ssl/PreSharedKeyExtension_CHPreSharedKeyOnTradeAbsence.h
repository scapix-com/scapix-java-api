// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/HandshakeAbsence.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_CHPRESHAREDKEYONTRADEABSENCE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_CHPRESHAREDKEYONTRADEABSENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class PreSharedKeyExtension_CHPreSharedKeyOnTradeAbsence; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::PreSharedKeyExtension_CHPreSharedKeyOnTradeAbsence>
{
	static constexpr fixed_string class_name = "sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::HandshakeAbsence>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_CHPRESHAREDKEYONTRADEABSENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_CHPRESHAREDKEYONTRADEABSENCE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_CHPRESHAREDKEYONTRADEABSENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::PreSharedKeyExtension_CHPreSharedKeyOnTradeAbsence : public jni::object_base<"sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyOnTradeAbsence",
	java::lang::Object,
	sun::security::ssl::HandshakeAbsence>
{
public:

	void absent(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> message) { return call_method<"absent", void>(context, message); }

protected:

	PreSharedKeyExtension_CHPreSharedKeyOnTradeAbsence(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_PRESHAREDKEYEXTENSION_CHPRESHAREDKEYONTRADEABSENCE
