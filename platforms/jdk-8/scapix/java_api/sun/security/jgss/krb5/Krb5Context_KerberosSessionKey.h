// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Key.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_KRB5CONTEXT_KERBEROSSESSIONKEY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_KRB5CONTEXT_KERBEROSSESSIONKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss::krb5 { class Krb5Context_KerberosSessionKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::krb5::Krb5Context_KerberosSessionKey>
{
	static constexpr fixed_string class_name = "sun/security/jgss/krb5/Krb5Context$KerberosSessionKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::Key>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_KRB5CONTEXT_KERBEROSSESSIONKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_KRB5CONTEXT_KERBEROSSESSIONKEY)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_KRB5CONTEXT_KERBEROSSESSIONKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::jgss::krb5::Krb5Context_KerberosSessionKey : public jni::object_base<"sun/security/jgss/krb5/Krb5Context$KerberosSessionKey",
	java::lang::Object,
	java::security::Key>
{
public:

	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Krb5Context_KerberosSessionKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_KRB5CONTEXT_KERBEROSSESSIONKEY
