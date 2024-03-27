// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/telephony/CellSignalStrength.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class CellSignalStrengthTdscdma; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::CellSignalStrengthTdscdma>
{
	static constexpr fixed_string class_name = "android/telephony/CellSignalStrengthTdscdma";
	using base_classes = std::tuple<scapix::java_api::android::telephony::CellSignalStrength, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::CellSignalStrengthTdscdma : public jni::object_base<"android/telephony/CellSignalStrengthTdscdma",
	android::telephony::CellSignalStrength,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getLevel() { return call_method<"getLevel", jint>(); }
	jint getDbm() { return call_method<"getDbm", jint>(); }
	jint getRscp() { return call_method<"getRscp", jint>(); }
	jint getAsuLevel() { return call_method<"getAsuLevel", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	CellSignalStrengthTdscdma(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLSIGNALSTRENGTHTDSCDMA
