// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CREDENTIALPROVIDERSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CREDENTIALPROVIDERSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::credentials { class CredentialProviderService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::credentials::CredentialProviderService>
{
	static constexpr fixed_string class_name = "android/service/credentials/CredentialProviderService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CREDENTIALPROVIDERSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CREDENTIALPROVIDERSERVICE)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CREDENTIALPROVIDERSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/os/OutcomeReceiver.h>
#include <scapix/java_api/android/service/credentials/BeginCreateCredentialRequest.h>
#include <scapix/java_api/android/service/credentials/BeginGetCredentialRequest.h>
#include <scapix/java_api/android/service/credentials/ClearCredentialStateRequest.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::credentials::CredentialProviderService : public jni::object_base<"android/service/credentials/CredentialProviderService",
	android::app::Service>
{
public:

	static jni::ref<java::lang::String> EXTRA_BEGIN_GET_CREDENTIAL_REQUEST() { return get_static_field<"EXTRA_BEGIN_GET_CREDENTIAL_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_BEGIN_GET_CREDENTIAL_RESPONSE() { return get_static_field<"EXTRA_BEGIN_GET_CREDENTIAL_RESPONSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CREATE_CREDENTIAL_EXCEPTION() { return get_static_field<"EXTRA_CREATE_CREDENTIAL_EXCEPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CREATE_CREDENTIAL_REQUEST() { return get_static_field<"EXTRA_CREATE_CREDENTIAL_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CREATE_CREDENTIAL_RESPONSE() { return get_static_field<"EXTRA_CREATE_CREDENTIAL_RESPONSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_GET_CREDENTIAL_EXCEPTION() { return get_static_field<"EXTRA_GET_CREDENTIAL_EXCEPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_GET_CREDENTIAL_REQUEST() { return get_static_field<"EXTRA_GET_CREDENTIAL_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_GET_CREDENTIAL_RESPONSE() { return get_static_field<"EXTRA_GET_CREDENTIAL_RESPONSE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::service::credentials::CredentialProviderService> new_object() { return base_::new_object(); }
	void onCreate() { return call_method<"onCreate", void>(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void onBeginGetCredential(jni::ref<android::service::credentials::BeginGetCredentialRequest> p1, jni::ref<android::os::CancellationSignal> p2, jni::ref<android::os::OutcomeReceiver> p3) { return call_method<"onBeginGetCredential", void>(p1, p2, p3); }
	void onBeginCreateCredential(jni::ref<android::service::credentials::BeginCreateCredentialRequest> p1, jni::ref<android::os::CancellationSignal> p2, jni::ref<android::os::OutcomeReceiver> p3) { return call_method<"onBeginCreateCredential", void>(p1, p2, p3); }
	void onClearCredentialState(jni::ref<android::service::credentials::ClearCredentialStateRequest> p1, jni::ref<android::os::CancellationSignal> p2, jni::ref<android::os::OutcomeReceiver> p3) { return call_method<"onClearCredentialState", void>(p1, p2, p3); }

protected:

	CredentialProviderService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_CREDENTIALPROVIDERSERVICE
