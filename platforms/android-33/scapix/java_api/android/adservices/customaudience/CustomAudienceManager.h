// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_CUSTOMAUDIENCEMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_CUSTOMAUDIENCEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::customaudience { class CustomAudienceManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::customaudience::CustomAudienceManager>
{
	static constexpr fixed_string class_name = "android/adservices/customaudience/CustomAudienceManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_CUSTOMAUDIENCEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_CUSTOMAUDIENCEMANAGER)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_CUSTOMAUDIENCEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/adservices/customaudience/JoinCustomAudienceRequest.h>
#include <scapix/java_api/android/adservices/customaudience/LeaveCustomAudienceRequest.h>
#include <scapix/java_api/android/adservices/customaudience/TestCustomAudienceManager.h>
#include <scapix/java_api/android/os/OutcomeReceiver.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::customaudience::CustomAudienceManager : public jni::object_base<"android/adservices/customaudience/CustomAudienceManager",
	java::lang::Object>
{
public:

	jni::ref<android::adservices::customaudience::TestCustomAudienceManager> getTestCustomAudienceManager() { return call_method<"getTestCustomAudienceManager", jni::ref<android::adservices::customaudience::TestCustomAudienceManager>>(); }
	void joinCustomAudience(jni::ref<android::adservices::customaudience::JoinCustomAudienceRequest> joinCustomAudienceRequest, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::os::OutcomeReceiver> receiver) { return call_method<"joinCustomAudience", void>(joinCustomAudienceRequest, executor, receiver); }
	void leaveCustomAudience(jni::ref<android::adservices::customaudience::LeaveCustomAudienceRequest> leaveCustomAudienceRequest, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::os::OutcomeReceiver> receiver) { return call_method<"leaveCustomAudience", void>(leaveCustomAudienceRequest, executor, receiver); }

protected:

	CustomAudienceManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_CUSTOMAUDIENCE_CUSTOMAUDIENCEMANAGER
