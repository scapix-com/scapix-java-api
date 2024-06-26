// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYGSM_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYGSM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class CellIdentityGsm; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::CellIdentityGsm>
{
	static constexpr fixed_string class_name = "android/telephony/CellIdentityGsm";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYGSM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYGSM)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYGSM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::CellIdentityGsm : public jni::object_base<"android/telephony/CellIdentityGsm",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getMcc() { return call_method<"getMcc", jint>(); }
	jint getMnc() { return call_method<"getMnc", jint>(); }
	jint getLac() { return call_method<"getLac", jint>(); }
	jint getCid() { return call_method<"getCid", jint>(); }
	jint getPsc() { return call_method<"getPsc", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	CellIdentityGsm(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYGSM
