// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::euicc { class EuiccInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::euicc::EuiccInfo>
{
	static constexpr fixed_string class_name = "android/telephony/euicc/EuiccInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCINFO)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::euicc::EuiccInfo : public jni::object_base<"android/telephony/euicc/EuiccInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::telephony::euicc::EuiccInfo> new_object(jni::ref<java::lang::String> osVersion) { return base_::new_object(osVersion); }
	jni::ref<java::lang::String> getOsVersion() { return call_method<"getOsVersion", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	EuiccInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_EUICC_EUICCINFO
