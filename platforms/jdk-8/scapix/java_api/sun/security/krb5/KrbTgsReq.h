// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBTGSREQ_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBTGSREQ_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class KrbTgsReq; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::KrbTgsReq>
{
	static constexpr fixed_string class_name = "sun/security/krb5/KrbTgsReq";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBTGSREQ_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBTGSREQ)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBTGSREQ

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/Credentials.h>
#include <scapix/java_api/sun/security/krb5/KrbTgsRep.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/internal/KDCOptions.h>
#include <scapix/java_api/sun/security/krb5/internal/PAData.h>
#include <scapix/java_api/sun/security/krb5/internal/Ticket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::KrbTgsReq : public jni::object_base<"sun/security/krb5/KrbTgsReq",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::KrbTgsReq> new_object(jni::ref<sun::security::krb5::internal::KDCOptions> p1, jni::ref<sun::security::krb5::Credentials> p2, jni::ref<sun::security::krb5::PrincipalName> p3, jni::ref<sun::security::krb5::PrincipalName> p4, jni::ref<sun::security::krb5::PrincipalName> p5, jni::ref<sun::security::krb5::PrincipalName> p6, jni::ref<jni::array<sun::security::krb5::internal::Ticket>> p7, jni::ref<jni::array<sun::security::krb5::internal::PAData>> p8) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8); }
	void send() { return call_method<"send", void>(); }
	jni::ref<sun::security::krb5::KrbTgsRep> getReply() { return call_method<"getReply", jni::ref<sun::security::krb5::KrbTgsRep>>(); }
	jni::ref<sun::security::krb5::Credentials> sendAndGetCreds() { return call_method<"sendAndGetCreds", jni::ref<sun::security::krb5::Credentials>>(); }

protected:

	KrbTgsReq(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBTGSREQ
