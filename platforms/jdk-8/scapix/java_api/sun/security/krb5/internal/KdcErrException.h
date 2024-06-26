// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/krb5/KrbException.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCERREXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCERREXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class KdcErrException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::KdcErrException>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/KdcErrException";
	using base_classes = std::tuple<scapix::java_api::sun::security::krb5::KrbException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCERREXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCERREXCEPTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCERREXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::KdcErrException : public jni::object_base<"sun/security/krb5/internal/KdcErrException",
	sun::security::krb5::KrbException>
{
public:

	static jni::ref<sun::security::krb5::internal::KdcErrException> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::internal::KdcErrException> new_object(jint p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	KdcErrException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_KDCERREXCEPTION
