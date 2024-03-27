// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/security/identity/IdentityCredentialException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ALREADYPERSONALIZEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ALREADYPERSONALIZEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::identity { class AlreadyPersonalizedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::identity::AlreadyPersonalizedException>
{
	static constexpr fixed_string class_name = "android/security/identity/AlreadyPersonalizedException";
	using base_classes = std::tuple<scapix::java_api::android::security::identity::IdentityCredentialException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ALREADYPERSONALIZEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ALREADYPERSONALIZEDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ALREADYPERSONALIZEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::identity::AlreadyPersonalizedException : public jni::object_base<"android/security/identity/AlreadyPersonalizedException",
	android::security::identity::IdentityCredentialException>
{
public:

	static jni::ref<android::security::identity::AlreadyPersonalizedException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<android::security::identity::AlreadyPersonalizedException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	AlreadyPersonalizedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ALREADYPERSONALIZEDEXCEPTION
