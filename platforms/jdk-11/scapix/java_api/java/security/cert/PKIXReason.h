// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/java/security/cert/CertPathValidatorException_Reason.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXREASON_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXREASON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class PKIXReason; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::PKIXReason>
{
	static constexpr fixed_string class_name = "java/security/cert/PKIXReason";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::java::security::cert::CertPathValidatorException_Reason>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXREASON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXREASON)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXREASON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::PKIXReason : public jni::object_base<"java/security/cert/PKIXReason",
	java::lang::Enum,
	java::security::cert::CertPathValidatorException_Reason>
{
public:

	static jni::ref<java::security::cert::PKIXReason> NAME_CHAINING() { return get_static_field<"NAME_CHAINING", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> INVALID_KEY_USAGE() { return get_static_field<"INVALID_KEY_USAGE", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> INVALID_POLICY() { return get_static_field<"INVALID_POLICY", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> NO_TRUST_ANCHOR() { return get_static_field<"NO_TRUST_ANCHOR", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> UNRECOGNIZED_CRIT_EXT() { return get_static_field<"UNRECOGNIZED_CRIT_EXT", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> NOT_CA_CERT() { return get_static_field<"NOT_CA_CERT", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> PATH_TOO_LONG() { return get_static_field<"PATH_TOO_LONG", jni::ref<java::security::cert::PKIXReason>>(); }
	static jni::ref<java::security::cert::PKIXReason> INVALID_NAME() { return get_static_field<"INVALID_NAME", jni::ref<java::security::cert::PKIXReason>>(); }

	static jni::ref<jni::array<java::security::cert::PKIXReason>> values() { return call_static_method<"values", jni::ref<jni::array<java::security::cert::PKIXReason>>>(); }
	static jni::ref<java::security::cert::PKIXReason> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::security::cert::PKIXReason>>(name); }

protected:

	PKIXReason(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXREASON
