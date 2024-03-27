// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#include <scapix/java_api/javax/security/auth/Destroyable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyStore_PasswordProtection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyStore_PasswordProtection>
{
	static constexpr fixed_string class_name = "java/security/KeyStore$PasswordProtection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::KeyStore_ProtectionParameter, scapix::java_api::javax::security::auth::Destroyable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::KeyStore_PasswordProtection : public jni::object_base<"java/security/KeyStore$PasswordProtection",
	java::lang::Object,
	java::security::KeyStore_ProtectionParameter,
	javax::security::auth::Destroyable>
{
public:

	static jni::ref<java::security::KeyStore_PasswordProtection> new_object(jni::ref<jni::array<jchar>> password) { return base_::new_object(password); }
	jni::ref<jni::array<jchar>> getPassword() { return call_method<"getPassword", jni::ref<jni::array<jchar>>>(); }
	void destroy() { return call_method<"destroy", void>(); }
	jboolean isDestroyed() { return call_method<"isDestroyed", jboolean>(); }

protected:

	KeyStore_PasswordProtection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_PASSWORDPROTECTION