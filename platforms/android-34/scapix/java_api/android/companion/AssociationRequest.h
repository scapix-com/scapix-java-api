// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::companion { class AssociationRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::companion::AssociationRequest>
{
	static constexpr fixed_string class_name = "android/companion/AssociationRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST)
#define SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/companion/AssociationRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::companion::AssociationRequest : public jni::object_base<"android/companion/AssociationRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AssociationRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> DEVICE_PROFILE_APP_STREAMING() { return get_static_field<"DEVICE_PROFILE_APP_STREAMING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_PROFILE_AUTOMOTIVE_PROJECTION() { return get_static_field<"DEVICE_PROFILE_AUTOMOTIVE_PROJECTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_PROFILE_COMPUTER() { return get_static_field<"DEVICE_PROFILE_COMPUTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_PROFILE_GLASSES() { return get_static_field<"DEVICE_PROFILE_GLASSES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_PROFILE_NEARBY_DEVICE_STREAMING() { return get_static_field<"DEVICE_PROFILE_NEARBY_DEVICE_STREAMING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DEVICE_PROFILE_WATCH() { return get_static_field<"DEVICE_PROFILE_WATCH", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::String> getDeviceProfile() { return call_method<"getDeviceProfile", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getDisplayName() { return call_method<"getDisplayName", jni::ref<java::lang::CharSequence>>(); }
	jboolean isSelfManaged() { return call_method<"isSelfManaged", jboolean>(); }
	jboolean isForceConfirmation() { return call_method<"isForceConfirmation", jboolean>(); }
	jboolean isSingleDevice() { return call_method<"isSingleDevice", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	AssociationRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_COMPANION_ASSOCIATIONREQUEST
