// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_VALIDATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_VALIDATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::validator { class Validator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::validator::Validator>
{
	static constexpr fixed_string class_name = "sun/security/validator/Validator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_VALIDATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_VALIDATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_VALIDATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmConstraints.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/java/security/cert/PKIXBuilderParameters.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::validator::Validator : public jni::object_base<"sun/security/validator/Validator",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> TYPE_SIMPLE() { return get_static_field<"TYPE_SIMPLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_PKIX() { return get_static_field<"TYPE_PKIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_GENERIC() { return get_static_field<"VAR_GENERIC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_CODE_SIGNING() { return get_static_field<"VAR_CODE_SIGNING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_JCE_SIGNING() { return get_static_field<"VAR_JCE_SIGNING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_TLS_CLIENT() { return get_static_field<"VAR_TLS_CLIENT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_TLS_SERVER() { return get_static_field<"VAR_TLS_SERVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_TSA_SERVER() { return get_static_field<"VAR_TSA_SERVER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VAR_PLUGIN_CODE_SIGNING() { return get_static_field<"VAR_PLUGIN_CODE_SIGNING", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::validator::Validator> getInstance(jni::ref<java::lang::String> type, jni::ref<java::lang::String> variant, jni::ref<java::security::KeyStore> ks) { return call_static_method<"getInstance", jni::ref<sun::security::validator::Validator>>(type, variant, ks); }
	static jni::ref<sun::security::validator::Validator> getInstance(jni::ref<java::lang::String> type, jni::ref<java::lang::String> variant, jni::ref<java::util::Collection> trustedCerts) { return call_static_method<"getInstance", jni::ref<sun::security::validator::Validator>>(type, variant, trustedCerts); }
	static jni::ref<sun::security::validator::Validator> getInstance(jni::ref<java::lang::String> type, jni::ref<java::lang::String> variant, jni::ref<java::security::cert::PKIXBuilderParameters> params) { return call_static_method<"getInstance", jni::ref<sun::security::validator::Validator>>(type, variant, params); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> validate(jni::ref<jni::array<java::security::cert::X509Certificate>> chain) { return call_method<"validate", jni::ref<jni::array<java::security::cert::X509Certificate>>>(chain); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> validate(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::util::Collection> otherCerts) { return call_method<"validate", jni::ref<jni::array<java::security::cert::X509Certificate>>>(chain, otherCerts); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> validate(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::util::Collection> otherCerts, jni::ref<java::lang::Object> parameter) { return call_method<"validate", jni::ref<jni::array<java::security::cert::X509Certificate>>>(chain, otherCerts, parameter); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> validate(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::util::Collection> otherCerts, jni::ref<java::util::List> responseList, jni::ref<java::security::AlgorithmConstraints> constraints, jni::ref<java::lang::Object> parameter) { return call_method<"validate", jni::ref<jni::array<java::security::cert::X509Certificate>>>(chain, otherCerts, responseList, constraints, parameter); }
	jni::ref<java::util::Collection> getTrustedCertificates() { return call_method<"getTrustedCertificates", jni::ref<java::util::Collection>>(); }
	void setValidationDate(jni::ref<java::util::Date> validationDate) { return call_method<"setValidationDate", void>(validationDate); }

protected:

	Validator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_VALIDATOR
