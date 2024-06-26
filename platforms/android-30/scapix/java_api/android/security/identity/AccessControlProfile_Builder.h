// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ACCESSCONTROLPROFILE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ACCESSCONTROLPROFILE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::identity { class AccessControlProfile_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::identity::AccessControlProfile_Builder>
{
	static constexpr fixed_string class_name = "android/security/identity/AccessControlProfile$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ACCESSCONTROLPROFILE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ACCESSCONTROLPROFILE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ACCESSCONTROLPROFILE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/security/identity/AccessControlProfile.h>
#include <scapix/java_api/android/security/identity/AccessControlProfileId.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::identity::AccessControlProfile_Builder : public jni::object_base<"android/security/identity/AccessControlProfile$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::security::identity::AccessControlProfile_Builder> new_object(jni::ref<android::security::identity::AccessControlProfileId> accessControlProfileId) { return base_::new_object(accessControlProfileId); }
	jni::ref<android::security::identity::AccessControlProfile_Builder> setUserAuthenticationRequired(jboolean userAuthenticationRequired) { return call_method<"setUserAuthenticationRequired", jni::ref<android::security::identity::AccessControlProfile_Builder>>(userAuthenticationRequired); }
	jni::ref<android::security::identity::AccessControlProfile_Builder> setUserAuthenticationTimeout(jlong userAuthenticationTimeoutMillis) { return call_method<"setUserAuthenticationTimeout", jni::ref<android::security::identity::AccessControlProfile_Builder>>(userAuthenticationTimeoutMillis); }
	jni::ref<android::security::identity::AccessControlProfile_Builder> setReaderCertificate(jni::ref<java::security::cert::X509Certificate> readerCertificate) { return call_method<"setReaderCertificate", jni::ref<android::security::identity::AccessControlProfile_Builder>>(readerCertificate); }
	jni::ref<android::security::identity::AccessControlProfile> build() { return call_method<"build", jni::ref<android::security::identity::AccessControlProfile>>(); }

protected:

	AccessControlProfile_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_ACCESSCONTROLPROFILE_BUILDER
