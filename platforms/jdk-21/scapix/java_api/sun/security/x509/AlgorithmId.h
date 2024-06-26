// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/sun/security/util/DerEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class AlgorithmId; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::AlgorithmId>
{
	static constexpr fixed_string class_name = "sun/security/x509/AlgorithmId";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::sun::security::util::DerEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::AlgorithmId : public jni::object_base<"sun/security/x509/AlgorithmId",
	java::lang::Object,
	java::io::Serializable,
	sun::security::util::DerEncoder>
{
public:

	static jni::ref<sun::security::util::ObjectIdentifier> MD2_oid() { return get_static_field<"MD2_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> MD5_oid() { return get_static_field<"MD5_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA_oid() { return get_static_field<"SHA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA224_oid() { return get_static_field<"SHA224_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA256_oid() { return get_static_field<"SHA256_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA384_oid() { return get_static_field<"SHA384_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA512_oid() { return get_static_field<"SHA512_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA512_224_oid() { return get_static_field<"SHA512_224_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA512_256_oid() { return get_static_field<"SHA512_256_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_224_oid() { return get_static_field<"SHA3_224_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_256_oid() { return get_static_field<"SHA3_256_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_384_oid() { return get_static_field<"SHA3_384_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_512_oid() { return get_static_field<"SHA3_512_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> DSA_oid() { return get_static_field<"DSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> EC_oid() { return get_static_field<"EC_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> RSAEncryption_oid() { return get_static_field<"RSAEncryption_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> RSASSA_PSS_oid() { return get_static_field<"RSASSA_PSS_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> MGF1_oid() { return get_static_field<"MGF1_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA1withRSA_oid() { return get_static_field<"SHA1withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA224withRSA_oid() { return get_static_field<"SHA224withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA256withRSA_oid() { return get_static_field<"SHA256withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA384withRSA_oid() { return get_static_field<"SHA384withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA512withRSA_oid() { return get_static_field<"SHA512withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA512_224withRSA_oid() { return get_static_field<"SHA512$224withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA512_256withRSA_oid() { return get_static_field<"SHA512$256withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> MD2withRSA_oid() { return get_static_field<"MD2withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> MD5withRSA_oid() { return get_static_field<"MD5withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_224withRSA_oid() { return get_static_field<"SHA3_224withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_256withRSA_oid() { return get_static_field<"SHA3_256withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_384withRSA_oid() { return get_static_field<"SHA3_384withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	static jni::ref<sun::security::util::ObjectIdentifier> SHA3_512withRSA_oid() { return get_static_field<"SHA3_512withRSA_oid", jni::ref<sun::security::util::ObjectIdentifier>>(); }

	static jni::ref<sun::security::x509::AlgorithmId> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::x509::AlgorithmId> new_object(jni::ref<sun::security::util::ObjectIdentifier> oid) { return base_::new_object(oid); }
	static jni::ref<sun::security::x509::AlgorithmId> new_object(jni::ref<sun::security::util::ObjectIdentifier> oid, jni::ref<java::security::AlgorithmParameters> algparams) { return base_::new_object(oid, algparams); }
	static jni::ref<sun::security::x509::AlgorithmId> new_object(jni::ref<sun::security::util::ObjectIdentifier> oid, jni::ref<sun::security::util::DerValue> params) { return base_::new_object(oid, params); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<jni::array<jbyte>> encode() { return call_method<"encode", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<sun::security::util::ObjectIdentifier> getOID() { return call_method<"getOID", jni::ref<sun::security::util::ObjectIdentifier>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::AlgorithmParameters> getParameters() { return call_method<"getParameters", jni::ref<java::security::AlgorithmParameters>>(); }
	jni::ref<jni::array<jbyte>> getEncodedParams() { return call_method<"getEncodedParams", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<sun::security::x509::AlgorithmId> other) { return call_method<"equals", jboolean>(other); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jboolean equals(jni::ref<sun::security::util::ObjectIdentifier> id) { return call_method<"equals", jboolean>(id); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::security::x509::AlgorithmId> parse(jni::ref<sun::security::util::DerValue> val) { return call_static_method<"parse", jni::ref<sun::security::x509::AlgorithmId>>(val); }
	static jni::ref<sun::security::x509::AlgorithmId> getAlgorithmId(jni::ref<java::lang::String> algname) { return call_static_method<"getAlgorithmId", jni::ref<sun::security::x509::AlgorithmId>>(algname); }
	static jni::ref<sun::security::x509::AlgorithmId> get(jni::ref<java::lang::String> algname) { return call_static_method<"get", jni::ref<sun::security::x509::AlgorithmId>>(algname); }
	static jni::ref<sun::security::x509::AlgorithmId> get(jni::ref<java::security::AlgorithmParameters> algparams) { return call_static_method<"get", jni::ref<sun::security::x509::AlgorithmId>>(algparams); }
	static void clearAliasOidsTable() { return call_static_method<"clearAliasOidsTable", void>(); }

protected:

	AlgorithmId(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_ALGORITHMID
