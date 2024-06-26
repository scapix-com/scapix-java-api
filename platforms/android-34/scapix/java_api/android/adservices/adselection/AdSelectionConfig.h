// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_ADSELECTION_ADSELECTIONCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_ADSELECTION_ADSELECTIONCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::adselection { class AdSelectionConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::adselection::AdSelectionConfig>
{
	static constexpr fixed_string class_name = "android/adservices/adselection/AdSelectionConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_ADSELECTION_ADSELECTIONCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_ADSELECTION_ADSELECTIONCONFIG)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_ADSELECTION_ADSELECTIONCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/adservices/common/AdSelectionSignals.h>
#include <scapix/java_api/android/adservices/common/AdTechIdentifier.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/adservices/adselection/AdSelectionConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::adselection::AdSelectionConfig : public jni::object_base<"android/adservices/adselection/AdSelectionConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AdSelectionConfig_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<android::adservices::common::AdTechIdentifier> getSeller() { return call_method<"getSeller", jni::ref<android::adservices::common::AdTechIdentifier>>(); }
	jni::ref<android::net::Uri> getDecisionLogicUri() { return call_method<"getDecisionLogicUri", jni::ref<android::net::Uri>>(); }
	jni::ref<java::util::List> getCustomAudienceBuyers() { return call_method<"getCustomAudienceBuyers", jni::ref<java::util::List>>(); }
	jni::ref<android::adservices::common::AdSelectionSignals> getAdSelectionSignals() { return call_method<"getAdSelectionSignals", jni::ref<android::adservices::common::AdSelectionSignals>>(); }
	jni::ref<android::adservices::common::AdSelectionSignals> getSellerSignals() { return call_method<"getSellerSignals", jni::ref<android::adservices::common::AdSelectionSignals>>(); }
	jni::ref<java::util::Map> getPerBuyerSignals() { return call_method<"getPerBuyerSignals", jni::ref<java::util::Map>>(); }
	jni::ref<android::net::Uri> getTrustedScoringSignalsUri() { return call_method<"getTrustedScoringSignalsUri", jni::ref<android::net::Uri>>(); }

protected:

	AdSelectionConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_ADSELECTION_ADSELECTIONCONFIG
