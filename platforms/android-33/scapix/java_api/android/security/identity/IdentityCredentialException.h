// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_IDENTITYCREDENTIALEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_IDENTITYCREDENTIALEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::identity { class IdentityCredentialException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::identity::IdentityCredentialException>
{
	static constexpr fixed_string class_name = "android/security/identity/IdentityCredentialException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_IDENTITYCREDENTIALEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_IDENTITYCREDENTIALEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_IDENTITYCREDENTIALEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::identity::IdentityCredentialException : public jni::object_base<"android/security/identity/IdentityCredentialException",
	java::lang::Exception>
{
public:

	static jni::ref<android::security::identity::IdentityCredentialException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<android::security::identity::IdentityCredentialException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	IdentityCredentialException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_IDENTITYCREDENTIALEXCEPTION
