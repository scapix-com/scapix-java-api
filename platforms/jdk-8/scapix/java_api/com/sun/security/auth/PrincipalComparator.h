// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_PRINCIPALCOMPARATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_PRINCIPALCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::auth { class PrincipalComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::auth::PrincipalComparator>
{
	static constexpr fixed_string class_name = "com/sun/security/auth/PrincipalComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_PRINCIPALCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_PRINCIPALCOMPARATOR)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_PRINCIPALCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/security/auth/Subject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::security::auth::PrincipalComparator : public jni::object_base<"com/sun/security/auth/PrincipalComparator",
	java::lang::Object>
{
public:

	jboolean implies(jni::ref<javax::security::auth::Subject> p1) { return call_method<"implies", jboolean>(p1); }

protected:

	PrincipalComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_AUTH_PRINCIPALCOMPARATOR