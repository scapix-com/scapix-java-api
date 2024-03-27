// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/telephony/CellIdentity.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class CellIdentityTdscdma; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::CellIdentityTdscdma>
{
	static constexpr fixed_string class_name = "android/telephony/CellIdentityTdscdma";
	using base_classes = std::tuple<scapix::java_api::android::telephony::CellIdentity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::CellIdentityTdscdma : public jni::object_base<"android/telephony/CellIdentityTdscdma",
	android::telephony::CellIdentity>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getMccString() { return call_method<"getMccString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMncString() { return call_method<"getMncString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMobileNetworkOperator() { return call_method<"getMobileNetworkOperator", jni::ref<java::lang::String>>(); }
	jint getLac() { return call_method<"getLac", jint>(); }
	jint getCid() { return call_method<"getCid", jint>(); }
	jint getCpid() { return call_method<"getCpid", jint>(); }
	jint getUarfcn() { return call_method<"getUarfcn", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	CellIdentityTdscdma(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_CELLIDENTITYTDSCDMA
