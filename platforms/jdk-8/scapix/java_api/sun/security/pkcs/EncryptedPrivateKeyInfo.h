// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS_ENCRYPTEDPRIVATEKEYINFO_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_ENCRYPTEDPRIVATEKEYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs { class EncryptedPrivateKeyInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs::EncryptedPrivateKeyInfo>
{
	static constexpr fixed_string class_name = "sun/security/pkcs/EncryptedPrivateKeyInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_ENCRYPTEDPRIVATEKEYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS_ENCRYPTEDPRIVATEKEYINFO)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_ENCRYPTEDPRIVATEKEYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/x509/AlgorithmId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs::EncryptedPrivateKeyInfo : public jni::object_base<"sun/security/pkcs/EncryptedPrivateKeyInfo",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::pkcs::EncryptedPrivateKeyInfo> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::pkcs::EncryptedPrivateKeyInfo> new_object(jni::ref<sun::security::x509::AlgorithmId> p1, jni::ref<jni::array<jbyte>> p2) { return base_::new_object(p1, p2); }
	jni::ref<sun::security::x509::AlgorithmId> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<sun::security::x509::AlgorithmId>>(); }
	jni::ref<jni::array<jbyte>> getEncryptedData() { return call_method<"getEncryptedData", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	EncryptedPrivateKeyInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_ENCRYPTEDPRIVATEKEYINFO
