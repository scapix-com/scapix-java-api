// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KERBEROSSECRETS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KERBEROSSECRETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class KerberosSecrets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::KerberosSecrets>
{
	static constexpr fixed_string class_name = "sun/security/krb5/KerberosSecrets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KERBEROSSECRETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KERBEROSSECRETS)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KERBEROSSECRETS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/krb5/JavaxSecurityAuthKerberosAccess.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::KerberosSecrets : public jni::object_base<"sun/security/krb5/KerberosSecrets",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::KerberosSecrets> new_object() { return base_::new_object(); }
	static void setJavaxSecurityAuthKerberosAccess(jni::ref<sun::security::krb5::JavaxSecurityAuthKerberosAccess> p1) { return call_static_method<"setJavaxSecurityAuthKerberosAccess", void>(p1); }
	static jni::ref<sun::security::krb5::JavaxSecurityAuthKerberosAccess> getJavaxSecurityAuthKerberosAccess() { return call_static_method<"getJavaxSecurityAuthKerberosAccess", jni::ref<sun::security::krb5::JavaxSecurityAuthKerberosAccess>>(); }

protected:

	KerberosSecrets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_KERBEROSSECRETS