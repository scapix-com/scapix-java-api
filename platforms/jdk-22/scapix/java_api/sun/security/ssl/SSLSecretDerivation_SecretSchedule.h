// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSECRETDERIVATION_SECRETSCHEDULE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSECRETDERIVATION_SECRETSCHEDULE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLSecretDerivation_SecretSchedule; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLSecretDerivation_SecretSchedule>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLSecretDerivation$SecretSchedule";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSECRETDERIVATION_SECRETSCHEDULE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSECRETDERIVATION_SECRETSCHEDULE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSECRETDERIVATION_SECRETSCHEDULE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLSecretDerivation_SecretSchedule : public jni::object_base<"sun/security/ssl/SSLSecretDerivation$SecretSchedule",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsSaltSecret() { return get_static_field<"TlsSaltSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsExtBinderKey() { return get_static_field<"TlsExtBinderKey", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsResBinderKey() { return get_static_field<"TlsResBinderKey", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsClientEarlyTrafficSecret() { return get_static_field<"TlsClientEarlyTrafficSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsEarlyExporterMasterSecret() { return get_static_field<"TlsEarlyExporterMasterSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsClientHandshakeTrafficSecret() { return get_static_field<"TlsClientHandshakeTrafficSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsServerHandshakeTrafficSecret() { return get_static_field<"TlsServerHandshakeTrafficSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsClientAppTrafficSecret() { return get_static_field<"TlsClientAppTrafficSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsServerAppTrafficSecret() { return get_static_field<"TlsServerAppTrafficSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsExporterMasterSecret() { return get_static_field<"TlsExporterMasterSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> TlsResumptionMasterSecret() { return get_static_field<"TlsResumptionMasterSecret", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(); }

	static jni::ref<jni::array<sun::security::ssl::SSLSecretDerivation_SecretSchedule>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>>(); }
	static jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::SSLSecretDerivation_SecretSchedule>>(name); }

protected:

	SSLSecretDerivation_SecretSchedule(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLSECRETDERIVATION_SECRETSCHEDULE