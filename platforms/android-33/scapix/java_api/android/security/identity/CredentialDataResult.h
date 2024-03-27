// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATARESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATARESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::identity { class CredentialDataResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::identity::CredentialDataResult>
{
	static constexpr fixed_string class_name = "android/security/identity/CredentialDataResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATARESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATARESULT)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATARESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/security/identity/CredentialDataResult_Entries.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::identity::CredentialDataResult : public jni::object_base<"android/security/identity/CredentialDataResult",
	java::lang::Object>
{
public:

	using Entries = CredentialDataResult_Entries;

	jni::ref<jni::array<jbyte>> getDeviceNameSpaces() { return call_method<"getDeviceNameSpaces", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getDeviceMac() { return call_method<"getDeviceMac", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getStaticAuthenticationData() { return call_method<"getStaticAuthenticationData", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<android::security::identity::CredentialDataResult_Entries> getDeviceSignedEntries() { return call_method<"getDeviceSignedEntries", jni::ref<android::security::identity::CredentialDataResult_Entries>>(); }
	jni::ref<android::security::identity::CredentialDataResult_Entries> getIssuerSignedEntries() { return call_method<"getIssuerSignedEntries", jni::ref<android::security::identity::CredentialDataResult_Entries>>(); }

protected:

	CredentialDataResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATARESULT