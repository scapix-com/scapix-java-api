// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_NETWORKEVENT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_NETWORKEVENT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::metrics { class NetworkEvent_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::metrics::NetworkEvent_Builder>
{
	static constexpr fixed_string class_name = "android/media/metrics/NetworkEvent$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_NETWORKEVENT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_NETWORKEVENT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_NETWORKEVENT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/metrics/NetworkEvent.h>
#include <scapix/java_api/android/os/Bundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::metrics::NetworkEvent_Builder : public jni::object_base<"android/media/metrics/NetworkEvent$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::metrics::NetworkEvent_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::media::metrics::NetworkEvent_Builder> setNetworkType(jint value) { return call_method<"setNetworkType", jni::ref<android::media::metrics::NetworkEvent_Builder>>(value); }
	jni::ref<android::media::metrics::NetworkEvent_Builder> setTimeSinceCreatedMillis(jlong value) { return call_method<"setTimeSinceCreatedMillis", jni::ref<android::media::metrics::NetworkEvent_Builder>>(value); }
	jni::ref<android::media::metrics::NetworkEvent_Builder> setMetricsBundle(jni::ref<android::os::Bundle> metricsBundle) { return call_method<"setMetricsBundle", jni::ref<android::media::metrics::NetworkEvent_Builder>>(metricsBundle); }
	jni::ref<android::media::metrics::NetworkEvent> build() { return call_method<"build", jni::ref<android::media::metrics::NetworkEvent>>(); }

protected:

	NetworkEvent_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_NETWORKEVENT_BUILDER
