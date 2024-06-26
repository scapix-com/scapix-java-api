// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_AUTHENTICATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_AUTHENTICATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class Authenticator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::Authenticator>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/Authenticator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_AUTHENTICATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_AUTHENTICATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_AUTHENTICATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/sun/security/krb5/Checksum.h>
#include <scapix/java_api/sun/security/krb5/EncryptionKey.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/internal/AuthorizationData.h>
#include <scapix/java_api/sun/security/krb5/internal/KerberosTime.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::Authenticator : public jni::object_base<"sun/security/krb5/internal/Authenticator",
	java::lang::Object>
{
public:

	jint authenticator_vno() { return get_field<"authenticator_vno", jint>(); }
	void authenticator_vno(jint v) { set_field<"authenticator_vno", jint>(v); }
	jni::ref<sun::security::krb5::PrincipalName> cname() { return get_field<"cname", jni::ref<sun::security::krb5::PrincipalName>>(); }
	void cname(jni::ref<sun::security::krb5::PrincipalName> v) { set_field<"cname", jni::ref<sun::security::krb5::PrincipalName>>(v); }
	jint cusec() { return get_field<"cusec", jint>(); }
	void cusec(jint v) { set_field<"cusec", jint>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> ctime() { return get_field<"ctime", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void ctime(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"ctime", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::AuthorizationData> authorizationData() { return get_field<"authorizationData", jni::ref<sun::security::krb5::internal::AuthorizationData>>(); }
	void authorizationData(jni::ref<sun::security::krb5::internal::AuthorizationData> v) { set_field<"authorizationData", jni::ref<sun::security::krb5::internal::AuthorizationData>>(v); }

	static jni::ref<sun::security::krb5::internal::Authenticator> new_object(jni::ref<sun::security::krb5::PrincipalName> p1, jni::ref<sun::security::krb5::Checksum> p2, jint p3, jni::ref<sun::security::krb5::internal::KerberosTime> p4, jni::ref<sun::security::krb5::EncryptionKey> p5, jni::ref<java::lang::Integer> p6, jni::ref<sun::security::krb5::internal::AuthorizationData> p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<sun::security::krb5::internal::Authenticator> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::internal::Authenticator> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> asn1Encode() { return call_method<"asn1Encode", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<sun::security::krb5::Checksum> getChecksum() { return call_method<"getChecksum", jni::ref<sun::security::krb5::Checksum>>(); }
	jni::ref<java::lang::Integer> getSeqNumber() { return call_method<"getSeqNumber", jni::ref<java::lang::Integer>>(); }
	jni::ref<sun::security::krb5::EncryptionKey> getSubKey() { return call_method<"getSubKey", jni::ref<sun::security::krb5::EncryptionKey>>(); }

protected:

	Authenticator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_AUTHENTICATOR
