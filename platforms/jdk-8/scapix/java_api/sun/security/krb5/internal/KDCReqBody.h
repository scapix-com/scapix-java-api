// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCREQBODY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCREQBODY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class KDCReqBody; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::KDCReqBody>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/KDCReqBody";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCREQBODY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCREQBODY)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCREQBODY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/EncryptedData.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/internal/HostAddresses.h>
#include <scapix/java_api/sun/security/krb5/internal/KDCOptions.h>
#include <scapix/java_api/sun/security/krb5/internal/KerberosTime.h>
#include <scapix/java_api/sun/security/krb5/internal/Ticket.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::KDCReqBody : public jni::object_base<"sun/security/krb5/internal/KDCReqBody",
	java::lang::Object>
{
public:

	jni::ref<sun::security::krb5::internal::KDCOptions> kdcOptions() { return get_field<"kdcOptions", jni::ref<sun::security::krb5::internal::KDCOptions>>(); }
	void kdcOptions(jni::ref<sun::security::krb5::internal::KDCOptions> v) { set_field<"kdcOptions", jni::ref<sun::security::krb5::internal::KDCOptions>>(v); }
	jni::ref<sun::security::krb5::PrincipalName> cname() { return get_field<"cname", jni::ref<sun::security::krb5::PrincipalName>>(); }
	void cname(jni::ref<sun::security::krb5::PrincipalName> v) { set_field<"cname", jni::ref<sun::security::krb5::PrincipalName>>(v); }
	jni::ref<sun::security::krb5::PrincipalName> sname() { return get_field<"sname", jni::ref<sun::security::krb5::PrincipalName>>(); }
	void sname(jni::ref<sun::security::krb5::PrincipalName> v) { set_field<"sname", jni::ref<sun::security::krb5::PrincipalName>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> from() { return get_field<"from", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void from(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"from", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> till() { return get_field<"till", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void till(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"till", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> rtime() { return get_field<"rtime", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void rtime(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"rtime", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::HostAddresses> addresses() { return get_field<"addresses", jni::ref<sun::security::krb5::internal::HostAddresses>>(); }
	void addresses(jni::ref<sun::security::krb5::internal::HostAddresses> v) { set_field<"addresses", jni::ref<sun::security::krb5::internal::HostAddresses>>(v); }

	static jni::ref<sun::security::krb5::internal::KDCReqBody> new_object(jni::ref<sun::security::krb5::internal::KDCOptions> p1, jni::ref<sun::security::krb5::PrincipalName> p2, jni::ref<sun::security::krb5::PrincipalName> p3, jni::ref<sun::security::krb5::internal::KerberosTime> p4, jni::ref<sun::security::krb5::internal::KerberosTime> p5, jni::ref<sun::security::krb5::internal::KerberosTime> p6, jint p7, jni::ref<jni::array<jint>> p8, jni::ref<sun::security::krb5::internal::HostAddresses> p9, jni::ref<sun::security::krb5::EncryptedData> p10, jni::ref<jni::array<sun::security::krb5::internal::Ticket>> p11) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	static jni::ref<sun::security::krb5::internal::KDCReqBody> new_object(jni::ref<sun::security::util::DerValue> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<jni::array<jbyte>> asn1Encode(jint p1) { return call_method<"asn1Encode", jni::ref<jni::array<jbyte>>>(p1); }
	jint getNonce() { return call_method<"getNonce", jint>(); }

protected:

	KDCReqBody(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCREQBODY
