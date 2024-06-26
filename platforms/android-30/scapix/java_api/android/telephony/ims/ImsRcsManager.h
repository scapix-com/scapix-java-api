// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSRCSMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSRCSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims { class ImsRcsManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::ImsRcsManager>
{
	static constexpr fixed_string class_name = "android/telephony/ims/ImsRcsManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSRCSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSRCSMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSRCSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/ims/RcsUceAdapter.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::ImsRcsManager : public jni::object_base<"android/telephony/ims/ImsRcsManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN() { return get_static_field<"ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN", jni::ref<java::lang::String>>(); }

	jni::ref<android::telephony::ims::RcsUceAdapter> getUceAdapter() { return call_method<"getUceAdapter", jni::ref<android::telephony::ims::RcsUceAdapter>>(); }

protected:

	ImsRcsManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSRCSMANAGER
