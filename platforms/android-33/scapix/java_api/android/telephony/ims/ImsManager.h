// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims { class ImsManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::ImsManager>
{
	static constexpr fixed_string class_name = "android/telephony/ims/ImsManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/ims/ImsMmTelManager.h>
#include <scapix/java_api/android/telephony/ims/ImsRcsManager.h>
#include <scapix/java_api/android/telephony/ims/ProvisioningManager.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::ImsManager : public jni::object_base<"android/telephony/ims/ImsManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_WFC_IMS_REGISTRATION_ERROR() { return get_static_field<"ACTION_WFC_IMS_REGISTRATION_ERROR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE() { return get_static_field<"EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WFC_REGISTRATION_FAILURE_TITLE() { return get_static_field<"EXTRA_WFC_REGISTRATION_FAILURE_TITLE", jni::ref<java::lang::String>>(); }

	jni::ref<android::telephony::ims::ImsRcsManager> getImsRcsManager(jint subscriptionId) { return call_method<"getImsRcsManager", jni::ref<android::telephony::ims::ImsRcsManager>>(subscriptionId); }
	jni::ref<android::telephony::ims::ImsMmTelManager> getImsMmTelManager(jint subscriptionId) { return call_method<"getImsMmTelManager", jni::ref<android::telephony::ims::ImsMmTelManager>>(subscriptionId); }
	jni::ref<android::telephony::ims::ProvisioningManager> getProvisioningManager(jint subscriptionId) { return call_method<"getProvisioningManager", jni::ref<android::telephony::ims::ProvisioningManager>>(subscriptionId); }

protected:

	ImsManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSMANAGER
