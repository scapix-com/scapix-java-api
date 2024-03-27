// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYSCANMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYSCANMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyScanManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyScanManager>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyScanManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYSCANMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYSCANMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYSCANMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/TelephonyScanManager_NetworkScanCallback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyScanManager : public jni::object_base<"android/telephony/TelephonyScanManager",
	java::lang::Object>
{
public:

	using NetworkScanCallback = TelephonyScanManager_NetworkScanCallback;

	static jni::ref<android::telephony::TelephonyScanManager> new_object() { return base_::new_object(); }

protected:

	TelephonyScanManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYSCANMANAGER