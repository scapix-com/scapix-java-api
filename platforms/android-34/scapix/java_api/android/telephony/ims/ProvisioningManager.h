// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_PROVISIONINGMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_PROVISIONINGMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims { class ProvisioningManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::ProvisioningManager>
{
	static constexpr fixed_string class_name = "android/telephony/ims/ProvisioningManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_PROVISIONINGMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_PROVISIONINGMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_PROVISIONINGMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/ims/ProvisioningManager_FeatureProvisioningCallback.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::ProvisioningManager : public jni::object_base<"android/telephony/ims/ProvisioningManager",
	java::lang::Object>
{
public:

	using FeatureProvisioningCallback = ProvisioningManager_FeatureProvisioningCallback;

	void registerFeatureProvisioningChangedCallback(jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::telephony::ims::ProvisioningManager_FeatureProvisioningCallback> callback) { return call_method<"registerFeatureProvisioningChangedCallback", void>(executor, callback); }
	void unregisterFeatureProvisioningChangedCallback(jni::ref<android::telephony::ims::ProvisioningManager_FeatureProvisioningCallback> callback) { return call_method<"unregisterFeatureProvisioningChangedCallback", void>(callback); }
	void setProvisioningStatusForCapability(jint capability, jint tech, jboolean isProvisioned) { return call_method<"setProvisioningStatusForCapability", void>(capability, tech, isProvisioned); }
	jboolean getProvisioningStatusForCapability(jint capability, jint tech) { return call_method<"getProvisioningStatusForCapability", jboolean>(capability, tech); }
	jboolean getRcsProvisioningStatusForCapability(jint capability, jint tech) { return call_method<"getRcsProvisioningStatusForCapability", jboolean>(capability, tech); }
	void setRcsProvisioningStatusForCapability(jint capability, jint tech, jboolean isProvisioned) { return call_method<"setRcsProvisioningStatusForCapability", void>(capability, tech, isProvisioned); }
	jboolean isProvisioningRequiredForCapability(jint capability, jint tech) { return call_method<"isProvisioningRequiredForCapability", jboolean>(capability, tech); }
	jboolean isRcsProvisioningRequiredForCapability(jint capability, jint tech) { return call_method<"isRcsProvisioningRequiredForCapability", jboolean>(capability, tech); }

protected:

	ProvisioningManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_PROVISIONINGMANAGER
