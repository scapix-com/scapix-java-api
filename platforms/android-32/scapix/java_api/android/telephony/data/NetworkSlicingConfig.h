// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_NETWORKSLICINGCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_NETWORKSLICINGCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::data { class NetworkSlicingConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::data::NetworkSlicingConfig>
{
	static constexpr fixed_string class_name = "android/telephony/data/NetworkSlicingConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_NETWORKSLICINGCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_NETWORKSLICINGCONFIG)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_NETWORKSLICINGCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::data::NetworkSlicingConfig : public jni::object_base<"android/telephony/data/NetworkSlicingConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::telephony::data::NetworkSlicingConfig> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> getUrspRules() { return call_method<"getUrspRules", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getSliceInfo() { return call_method<"getSliceInfo", jni::ref<java::util::List>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NetworkSlicingConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_NETWORKSLICINGCONFIG
