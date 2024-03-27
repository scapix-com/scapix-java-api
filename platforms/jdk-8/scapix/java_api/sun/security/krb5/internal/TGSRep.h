// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/krb5/internal/KDCRep.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TGSREP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TGSREP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class TGSRep; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::TGSRep>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/TGSRep";
	using base_classes = std::tuple<scapix::java_api::sun::security::krb5::internal::KDCRep>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TGSREP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TGSREP)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TGSREP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/EncryptedData.h>
#include <scapix/java_api/sun/security/krb5/PrincipalName.h>
#include <scapix/java_api/sun/security/krb5/internal/PAData.h>
#include <scapix/java_api/sun/security/krb5/internal/Ticket.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::TGSRep : public jni::object_base<"sun/security/krb5/internal/TGSRep",
	sun::security::krb5::internal::KDCRep>
{
public:

	static jni::ref<sun::security::krb5::internal::TGSRep> new_object(jni::ref<jni::array<sun::security::krb5::internal::PAData>> p1, jni::ref<sun::security::krb5::PrincipalName> p2, jni::ref<sun::security::krb5::internal::Ticket> p3, jni::ref<sun::security::krb5::EncryptedData> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<sun::security::krb5::internal::TGSRep> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::internal::TGSRep> new_object(jni::ref<sun::security::util::DerValue> p1) { return base_::new_object(p1); }

protected:

	TGSRep(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_TGSREP