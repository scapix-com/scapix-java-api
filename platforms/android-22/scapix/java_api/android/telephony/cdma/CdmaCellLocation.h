// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/telephony/CellLocation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::cdma { class CdmaCellLocation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::cdma::CdmaCellLocation>
{
	static constexpr fixed_string class_name = "android/telephony/cdma/CdmaCellLocation";
	using base_classes = std::tuple<scapix::java_api::android::telephony::CellLocation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::cdma::CdmaCellLocation : public jni::object_base<"android/telephony/cdma/CdmaCellLocation",
	android::telephony::CellLocation>
{
public:

	static jni::ref<android::telephony::cdma::CdmaCellLocation> new_object() { return base_::new_object(); }
	static jni::ref<android::telephony::cdma::CdmaCellLocation> new_object(jni::ref<android::os::Bundle> bundle) { return base_::new_object(bundle); }
	jint getBaseStationId() { return call_method<"getBaseStationId", jint>(); }
	jint getBaseStationLatitude() { return call_method<"getBaseStationLatitude", jint>(); }
	jint getBaseStationLongitude() { return call_method<"getBaseStationLongitude", jint>(); }
	jint getSystemId() { return call_method<"getSystemId", jint>(); }
	jint getNetworkId() { return call_method<"getNetworkId", jint>(); }
	void setStateInvalid() { return call_method<"setStateInvalid", void>(); }
	void setCellLocationData(jint baseStationId, jint baseStationLatitude, jint baseStationLongitude) { return call_method<"setCellLocationData", void>(baseStationId, baseStationLatitude, baseStationLongitude); }
	void setCellLocationData(jint baseStationId, jint baseStationLatitude, jint baseStationLongitude, jint systemId, jint networkId) { return call_method<"setCellLocationData", void>(baseStationId, baseStationLatitude, baseStationLongitude, systemId, networkId); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void fillInNotifierBundle(jni::ref<android::os::Bundle> bundleToFill) { return call_method<"fillInNotifierBundle", void>(bundleToFill); }
	static jdouble convertQuartSecToDecDegrees(jint quartSec) { return call_static_method<"convertQuartSecToDecDegrees", jdouble>(quartSec); }

protected:

	CdmaCellLocation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CDMA_CDMACELLLOCATION