// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBASREQ_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBASREQ_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class KrbAsReq; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::KrbAsReq>
{
	static constexpr fixed_string class_name = "sun/security/krb5/KrbAsReq";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBASREQ_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBASREQ)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBASREQ

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/EncryptionKey.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/internal/HostAddresses.h>
#include <scapix/java_api/sun/security/krb5/internal/KDCOptions.h>
#include <scapix/java_api/sun/security/krb5/internal/KerberosTime.h>
#include <scapix/java_api/sun/security/krb5/internal/PAData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::KrbAsReq : public jni::object_base<"sun/security/krb5/KrbAsReq",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::KrbAsReq> new_object(jni::ref<sun::security::krb5::EncryptionKey> p1, jni::ref<sun::security::krb5::internal::KDCOptions> p2, jni::ref<sun::security::krb5::PrincipalName> p3, jni::ref<sun::security::krb5::PrincipalName> p4, jni::ref<sun::security::krb5::internal::KerberosTime> p5, jni::ref<sun::security::krb5::internal::KerberosTime> p6, jni::ref<sun::security::krb5::internal::KerberosTime> p7, jni::ref<jni::array<jint>> p8, jni::ref<sun::security::krb5::internal::HostAddresses> p9, jni::ref<jni::array<sun::security::krb5::internal::PAData>> p10) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }

protected:

	KrbAsReq(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KRBASREQ
