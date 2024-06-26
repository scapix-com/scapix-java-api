// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion { class AssociationInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::AssociationInfo>
{
	static constexpr fixed_string class_name = "android/companion/AssociationInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONINFO)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/companion/AssociatedDevice.h>
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::AssociationInfo : public jni::object_base<"android/companion/AssociationInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<android::net::MacAddress> getDeviceMacAddress() { return call_method<"getDeviceMacAddress", jni::ref<android::net::MacAddress>>(); }
	jni::ref<java::lang::CharSequence> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getDeviceProfile() { return call_method<"getDeviceProfile", jni::ref<java::lang::String>>(); }
	jni::ref<android::companion::AssociatedDevice> getAssociatedDevice() { return call_method<"getAssociatedDevice", jni::ref<android::companion::AssociatedDevice>>(); }
	jint getSystemDataSyncFlags() { return call_method<"getSystemDataSyncFlags", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	AssociationInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONINFO
