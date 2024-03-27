// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_ENCTICKETPART_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_ENCTICKETPART_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class EncTicketPart; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::EncTicketPart>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/EncTicketPart";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_ENCTICKETPART_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_ENCTICKETPART)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_ENCTICKETPART

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/EncryptionKey.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/internal/AuthorizationData.h>
#include <scapix/java_api/sun/security/krb5/internal/HostAddresses.h>
#include <scapix/java_api/sun/security/krb5/internal/KerberosTime.h>
#include <scapix/java_api/sun/security/krb5/internal/TicketFlags.h>
#include <scapix/java_api/sun/security/krb5/internal/TransitedEncoding.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::EncTicketPart : public jni::object_base<"sun/security/krb5/internal/EncTicketPart",
	java::lang::Object>
{
public:

	jni::ref<sun::security::krb5::internal::TicketFlags> flags() { return get_field<"flags", jni::ref<sun::security::krb5::internal::TicketFlags>>(); }
	void flags(jni::ref<sun::security::krb5::internal::TicketFlags> v) { set_field<"flags", jni::ref<sun::security::krb5::internal::TicketFlags>>(v); }
	jni::ref<sun::security::krb5::EncryptionKey> key() { return get_field<"key", jni::ref<sun::security::krb5::EncryptionKey>>(); }
	void key(jni::ref<sun::security::krb5::EncryptionKey> v) { set_field<"key", jni::ref<sun::security::krb5::EncryptionKey>>(v); }
	jni::ref<sun::security::krb5::PrincipalName> cname() { return get_field<"cname", jni::ref<sun::security::krb5::PrincipalName>>(); }
	void cname(jni::ref<sun::security::krb5::PrincipalName> v) { set_field<"cname", jni::ref<sun::security::krb5::PrincipalName>>(v); }
	jni::ref<sun::security::krb5::internal::TransitedEncoding> transited() { return get_field<"transited", jni::ref<sun::security::krb5::internal::TransitedEncoding>>(); }
	void transited(jni::ref<sun::security::krb5::internal::TransitedEncoding> v) { set_field<"transited", jni::ref<sun::security::krb5::internal::TransitedEncoding>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> authtime() { return get_field<"authtime", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void authtime(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"authtime", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> starttime() { return get_field<"starttime", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void starttime(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"starttime", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> endtime() { return get_field<"endtime", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void endtime(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"endtime", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::KerberosTime> renewTill() { return get_field<"renewTill", jni::ref<sun::security::krb5::internal::KerberosTime>>(); }
	void renewTill(jni::ref<sun::security::krb5::internal::KerberosTime> v) { set_field<"renewTill", jni::ref<sun::security::krb5::internal::KerberosTime>>(v); }
	jni::ref<sun::security::krb5::internal::HostAddresses> caddr() { return get_field<"caddr", jni::ref<sun::security::krb5::internal::HostAddresses>>(); }
	void caddr(jni::ref<sun::security::krb5::internal::HostAddresses> v) { set_field<"caddr", jni::ref<sun::security::krb5::internal::HostAddresses>>(v); }
	jni::ref<sun::security::krb5::internal::AuthorizationData> authorizationData() { return get_field<"authorizationData", jni::ref<sun::security::krb5::internal::AuthorizationData>>(); }
	void authorizationData(jni::ref<sun::security::krb5::internal::AuthorizationData> v) { set_field<"authorizationData", jni::ref<sun::security::krb5::internal::AuthorizationData>>(v); }

	static jni::ref<sun::security::krb5::internal::EncTicketPart> new_object(jni::ref<sun::security::krb5::internal::TicketFlags> p1, jni::ref<sun::security::krb5::EncryptionKey> p2, jni::ref<sun::security::krb5::PrincipalName> p3, jni::ref<sun::security::krb5::internal::TransitedEncoding> p4, jni::ref<sun::security::krb5::internal::KerberosTime> p5, jni::ref<sun::security::krb5::internal::KerberosTime> p6, jni::ref<sun::security::krb5::internal::KerberosTime> p7, jni::ref<sun::security::krb5::internal::KerberosTime> p8, jni::ref<sun::security::krb5::internal::HostAddresses> p9, jni::ref<sun::security::krb5::internal::AuthorizationData> p10) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	static jni::ref<sun::security::krb5::internal::EncTicketPart> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::internal::EncTicketPart> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> asn1Encode() { return call_method<"asn1Encode", jni::ref<jni::array<jbyte>>>(); }

protected:

	EncTicketPart(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_ENCTICKETPART