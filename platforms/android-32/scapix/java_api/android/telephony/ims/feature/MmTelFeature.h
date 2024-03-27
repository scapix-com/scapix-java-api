// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_FEATURE_MMTELFEATURE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_FEATURE_MMTELFEATURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims::feature { class MmTelFeature; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::feature::MmTelFeature>
{
	static constexpr fixed_string class_name = "android/telephony/ims/feature/MmTelFeature";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_FEATURE_MMTELFEATURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_FEATURE_MMTELFEATURE)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_FEATURE_MMTELFEATURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/ims/feature/MmTelFeature_MmTelCapabilities.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::feature::MmTelFeature : public jni::object_base<"android/telephony/ims/feature/MmTelFeature",
	java::lang::Object>
{
public:

	using MmTelCapabilities = MmTelFeature_MmTelCapabilities;


protected:

	MmTelFeature(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_FEATURE_MMTELFEATURE