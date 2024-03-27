// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATAREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATAREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::identity { class CredentialDataRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::identity::CredentialDataRequest>
{
	static constexpr fixed_string class_name = "android/security/identity/CredentialDataRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATAREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATAREQUEST)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATAREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/security/identity/CredentialDataRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::identity::CredentialDataRequest : public jni::object_base<"android/security/identity/CredentialDataRequest",
	java::lang::Object>
{
public:

	using Builder = CredentialDataRequest_Builder;

	jni::ref<java::util::Map> getDeviceSignedEntriesToRequest() { return call_method<"getDeviceSignedEntriesToRequest", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> getIssuerSignedEntriesToRequest() { return call_method<"getIssuerSignedEntriesToRequest", jni::ref<java::util::Map>>(); }
	jboolean isAllowUsingExhaustedKeys() { return call_method<"isAllowUsingExhaustedKeys", jboolean>(); }
	jboolean isAllowUsingExpiredKeys() { return call_method<"isAllowUsingExpiredKeys", jboolean>(); }
	jboolean isIncrementUseCount() { return call_method<"isIncrementUseCount", jboolean>(); }
	jni::ref<jni::array<jbyte>> getRequestMessage() { return call_method<"getRequestMessage", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> getReaderSignature() { return call_method<"getReaderSignature", jni::ref<jni::array<jbyte>>>(); }

protected:

	CredentialDataRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_IDENTITY_CREDENTIALDATAREQUEST
