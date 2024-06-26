// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALRESPONSE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALRESPONSE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::credentials { class BeginGetCredentialResponse_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::credentials::BeginGetCredentialResponse_Builder>
{
	static constexpr fixed_string class_name = "android/service/credentials/BeginGetCredentialResponse$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALRESPONSE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALRESPONSE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALRESPONSE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/service/credentials/Action.h>
#include <scapix/java_api/android/service/credentials/BeginGetCredentialResponse.h>
#include <scapix/java_api/android/service/credentials/CredentialEntry.h>
#include <scapix/java_api/android/service/credentials/RemoteEntry.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::credentials::BeginGetCredentialResponse_Builder : public jni::object_base<"android/service/credentials/BeginGetCredentialResponse$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> setRemoteCredentialEntry(jni::ref<android::service::credentials::RemoteEntry> remoteCredentialEntry) { return call_method<"setRemoteCredentialEntry", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(remoteCredentialEntry); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> addCredentialEntry(jni::ref<android::service::credentials::CredentialEntry> credentialEntry) { return call_method<"addCredentialEntry", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(credentialEntry); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> addAuthenticationAction(jni::ref<android::service::credentials::Action> authenticationAction) { return call_method<"addAuthenticationAction", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(authenticationAction); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> addAction(jni::ref<android::service::credentials::Action> action) { return call_method<"addAction", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(action); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> setActions(jni::ref<java::util::List> actions) { return call_method<"setActions", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(actions); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> setCredentialEntries(jni::ref<java::util::List> credentialEntries) { return call_method<"setCredentialEntries", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(credentialEntries); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder> setAuthenticationActions(jni::ref<java::util::List> authenticationActions) { return call_method<"setAuthenticationActions", jni::ref<android::service::credentials::BeginGetCredentialResponse_Builder>>(authenticationActions); }
	jni::ref<android::service::credentials::BeginGetCredentialResponse> build() { return call_method<"build", jni::ref<android::service::credentials::BeginGetCredentialResponse>>(); }

protected:

	BeginGetCredentialResponse_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CREDENTIALS_BEGINGETCREDENTIALRESPONSE_BUILDER
