// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/crypto/SecretKey.h>
#include <scapix/java_api/javax/security/auth/Destroyable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_KERBEROSKEY_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_KERBEROSKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::kerberos { class KerberosKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::kerberos::KerberosKey>
{
	static constexpr fixed_string class_name = "javax/security/auth/kerberos/KerberosKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::crypto::SecretKey, scapix::java_api::javax::security::auth::Destroyable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_KERBEROSKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_KERBEROSKEY)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_KERBEROSKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/security/auth/kerberos/KerberosPrincipal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::kerberos::KerberosKey : public jni::object_base<"javax/security/auth/kerberos/KerberosKey",
	java::lang::Object,
	javax::crypto::SecretKey,
	javax::security::auth::Destroyable>
{
public:

	static jni::ref<javax::security::auth::kerberos::KerberosKey> new_object(jni::ref<javax::security::auth::kerberos::KerberosPrincipal> p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::security::auth::kerberos::KerberosKey> new_object(jni::ref<javax::security::auth::kerberos::KerberosPrincipal> p1, jni::ref<jni::array<jchar>> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<javax::security::auth::kerberos::KerberosPrincipal> getPrincipal() { return call_method<"getPrincipal", jni::ref<javax::security::auth::kerberos::KerberosPrincipal>>(); }
	jint getVersionNumber() { return call_method<"getVersionNumber", jint>(); }
	jint getKeyType() { return call_method<"getKeyType", jint>(); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	void destroy() { return call_method<"destroy", void>(); }
	jboolean isDestroyed() { return call_method<"isDestroyed", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	KerberosKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_KERBEROS_KERBEROSKEY
