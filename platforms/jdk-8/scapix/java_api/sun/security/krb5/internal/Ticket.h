// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TICKET_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TICKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class Ticket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::Ticket>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/Ticket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TICKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TICKET)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TICKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/EncryptedData.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::Ticket : public jni::object_base<"sun/security/krb5/internal/Ticket",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	jint tkt_vno() { return get_field<"tkt_vno", jint>(); }
	void tkt_vno(jint v) { set_field<"tkt_vno", jint>(v); }
	jni::ref<sun::security::krb5::PrincipalName> sname() { return get_field<"sname", jni::ref<sun::security::krb5::PrincipalName>>(); }
	void sname(jni::ref<sun::security::krb5::PrincipalName> v) { set_field<"sname", jni::ref<sun::security::krb5::PrincipalName>>(v); }
	jni::ref<sun::security::krb5::EncryptedData> encPart() { return get_field<"encPart", jni::ref<sun::security::krb5::EncryptedData>>(); }
	void encPart(jni::ref<sun::security::krb5::EncryptedData> v) { set_field<"encPart", jni::ref<sun::security::krb5::EncryptedData>>(v); }

	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	static jni::ref<sun::security::krb5::internal::Ticket> new_object(jni::ref<sun::security::krb5::PrincipalName> p1, jni::ref<sun::security::krb5::EncryptedData> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::krb5::internal::Ticket> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::internal::Ticket> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> asn1Encode() { return call_method<"asn1Encode", jni::ref<jni::array<jbyte>>>(); }
	static jni::ref<sun::security::krb5::internal::Ticket> parse(jni::ref<sun::security::util::DerInputStream> p1, jbyte p2, jboolean p3) { return call_static_method<"parse", jni::ref<sun::security::krb5::internal::Ticket>>(p1, p2, p3); }

protected:

	Ticket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TICKET