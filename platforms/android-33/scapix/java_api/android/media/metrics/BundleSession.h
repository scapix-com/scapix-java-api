// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_BUNDLESESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_BUNDLESESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::metrics { class BundleSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::metrics::BundleSession>
{
	static constexpr fixed_string class_name = "android/media/metrics/BundleSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_BUNDLESESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_BUNDLESESSION)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_BUNDLESESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/metrics/LogSessionId.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::metrics::BundleSession : public jni::object_base<"android/media/metrics/BundleSession",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jni::ref<java::lang::String> KEY_STATSD_ATOM() { return get_static_field<"KEY_STATSD_ATOM", jni::ref<java::lang::String>>(); }

	void reportBundleMetrics(jni::ref<android::os::PersistableBundle> metrics) { return call_method<"reportBundleMetrics", void>(metrics); }
	jni::ref<android::media::metrics::LogSessionId> getSessionId() { return call_method<"getSessionId", jni::ref<android::media::metrics::LogSessionId>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void close() { return call_method<"close", void>(); }

protected:

	BundleSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_METRICS_BUNDLESESSION