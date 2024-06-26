// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::aware { class PublishConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::aware::PublishConfig>
{
	static constexpr fixed_string class_name = "android/net/wifi/aware/PublishConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/net/wifi/aware/PublishConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::aware::PublishConfig : public jni::object_base<"android/net/wifi/aware/PublishConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = PublishConfig_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint PUBLISH_TYPE_SOLICITED() { return get_static_field<"PUBLISH_TYPE_SOLICITED", jint>(); }
	static jint PUBLISH_TYPE_UNSOLICITED() { return get_static_field<"PUBLISH_TYPE_UNSOLICITED", jint>(); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	PublishConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG
