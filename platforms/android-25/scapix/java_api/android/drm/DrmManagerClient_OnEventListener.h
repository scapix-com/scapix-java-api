// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_ONEVENTLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_ONEVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::drm { class DrmManagerClient_OnEventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::drm::DrmManagerClient_OnEventListener>
{
	static constexpr fixed_string class_name = "android/drm/DrmManagerClient$OnEventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_ONEVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_ONEVENTLISTENER)
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_ONEVENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/drm/DrmEvent.h>
#include <scapix/java_api/android/drm/DrmManagerClient.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::drm::DrmManagerClient_OnEventListener : public jni::object_base<"android/drm/DrmManagerClient$OnEventListener",
	java::lang::Object>
{
public:

	void onEvent(jni::ref<android::drm::DrmManagerClient> p1, jni::ref<android::drm::DrmEvent> p2) { return call_method<"onEvent", void>(p1, p2); }

protected:

	DrmManagerClient_OnEventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_ONEVENTLISTENER
