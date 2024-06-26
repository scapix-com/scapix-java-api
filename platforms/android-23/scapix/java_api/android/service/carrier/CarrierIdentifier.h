// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::carrier { class CarrierIdentifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::carrier::CarrierIdentifier>
{
	static constexpr fixed_string class_name = "android/service/carrier/CarrierIdentifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::carrier::CarrierIdentifier : public jni::object_base<"android/service/carrier/CarrierIdentifier",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::service::carrier::CarrierIdentifier> new_object(jni::ref<java::lang::String> mcc, jni::ref<java::lang::String> mnc, jni::ref<java::lang::String> spn, jni::ref<java::lang::String> imsi, jni::ref<java::lang::String> gid1, jni::ref<java::lang::String> gid2) { return base_::new_object(mcc, mnc, spn, imsi, gid1, gid2); }
	jni::ref<java::lang::String> getMcc() { return call_method<"getMcc", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMnc() { return call_method<"getMnc", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSpn() { return call_method<"getSpn", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getImsi() { return call_method<"getImsi", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getGid1() { return call_method<"getGid1", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getGid2() { return call_method<"getGid2", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	CarrierIdentifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CARRIER_CARRIERIDENTIFIER
