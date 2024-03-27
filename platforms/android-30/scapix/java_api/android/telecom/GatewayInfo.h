// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_GATEWAYINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_GATEWAYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class GatewayInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::GatewayInfo>
{
	static constexpr fixed_string class_name = "android/telecom/GatewayInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_GATEWAYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_GATEWAYINFO)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_GATEWAYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::GatewayInfo : public jni::object_base<"android/telecom/GatewayInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::telecom::GatewayInfo> new_object(jni::ref<java::lang::String> packageName, jni::ref<android::net::Uri> gatewayUri, jni::ref<android::net::Uri> originalAddress) { return base_::new_object(packageName, gatewayUri, originalAddress); }
	jni::ref<java::lang::String> getGatewayProviderPackageName() { return call_method<"getGatewayProviderPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<android::net::Uri> getGatewayAddress() { return call_method<"getGatewayAddress", jni::ref<android::net::Uri>>(); }
	jni::ref<android::net::Uri> getOriginalAddress() { return call_method<"getOriginalAddress", jni::ref<android::net::Uri>>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> destination, jint flags) { return call_method<"writeToParcel", void>(destination, flags); }

protected:

	GatewayInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_GATEWAYINFO
