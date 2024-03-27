// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/security/auth/login/LoginException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth::login { class CredentialException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::login::CredentialException>
{
	static constexpr fixed_string class_name = "javax/security/auth/login/CredentialException";
	using base_classes = std::tuple<scapix::java_api::javax::security::auth::login::LoginException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::login::CredentialException : public jni::object_base<"javax/security/auth/login/CredentialException",
	javax::security::auth::login::LoginException>
{
public:

	static jni::ref<javax::security::auth::login::CredentialException> new_object() { return base_::new_object(); }
	static jni::ref<javax::security::auth::login::CredentialException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	CredentialException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALEXCEPTION
