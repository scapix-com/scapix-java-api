// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_SIGNALTHRESHOLDINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SIGNALTHRESHOLDINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class SignalThresholdInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::SignalThresholdInfo_Builder>
{
	static constexpr fixed_string class_name = "android/telephony/SignalThresholdInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SIGNALTHRESHOLDINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_SIGNALTHRESHOLDINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_SIGNALTHRESHOLDINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/SignalThresholdInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::SignalThresholdInfo_Builder : public jni::object_base<"android/telephony/SignalThresholdInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::telephony::SignalThresholdInfo_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::telephony::SignalThresholdInfo_Builder> setRadioAccessNetworkType(jint ran) { return call_method<"setRadioAccessNetworkType", jni::ref<android::telephony::SignalThresholdInfo_Builder>>(ran); }
	jni::ref<android::telephony::SignalThresholdInfo_Builder> setSignalMeasurementType(jint signalMeasurementType) { return call_method<"setSignalMeasurementType", jni::ref<android::telephony::SignalThresholdInfo_Builder>>(signalMeasurementType); }
	jni::ref<android::telephony::SignalThresholdInfo_Builder> setThresholds(jni::ref<jni::array<jint>> thresholds) { return call_method<"setThresholds", jni::ref<android::telephony::SignalThresholdInfo_Builder>>(thresholds); }
	jni::ref<android::telephony::SignalThresholdInfo> build() { return call_method<"build", jni::ref<android::telephony::SignalThresholdInfo>>(); }

protected:

	SignalThresholdInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_SIGNALTHRESHOLDINFO_BUILDER
