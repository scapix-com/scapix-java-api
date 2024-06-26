// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_DISCONNECTCAUSE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_DISCONNECTCAUSE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class DisconnectCause; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::DisconnectCause>
{
	static constexpr fixed_string class_name = "android/telecom/DisconnectCause";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_DISCONNECTCAUSE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_DISCONNECTCAUSE)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_DISCONNECTCAUSE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::DisconnectCause : public jni::object_base<"android/telecom/DisconnectCause",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint ANSWERED_ELSEWHERE() { return get_static_field<"ANSWERED_ELSEWHERE", jint>(); }
	static jint BUSY() { return get_static_field<"BUSY", jint>(); }
	static jint CALL_PULLED() { return get_static_field<"CALL_PULLED", jint>(); }
	static jint CANCELED() { return get_static_field<"CANCELED", jint>(); }
	static jint CONNECTION_MANAGER_NOT_SUPPORTED() { return get_static_field<"CONNECTION_MANAGER_NOT_SUPPORTED", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint ERROR() { return get_static_field<"ERROR", jint>(); }
	static jint LOCAL() { return get_static_field<"LOCAL", jint>(); }
	static jint MISSED() { return get_static_field<"MISSED", jint>(); }
	static jint OTHER() { return get_static_field<"OTHER", jint>(); }
	static jint REJECTED() { return get_static_field<"REJECTED", jint>(); }
	static jint REMOTE() { return get_static_field<"REMOTE", jint>(); }
	static jint RESTRICTED() { return get_static_field<"RESTRICTED", jint>(); }
	static jint UNKNOWN() { return get_static_field<"UNKNOWN", jint>(); }

	static jni::ref<android::telecom::DisconnectCause> new_object(jint code) { return base_::new_object(code); }
	static jni::ref<android::telecom::DisconnectCause> new_object(jint code, jni::ref<java::lang::String> reason) { return base_::new_object(code, reason); }
	static jni::ref<android::telecom::DisconnectCause> new_object(jint code, jni::ref<java::lang::CharSequence> label, jni::ref<java::lang::CharSequence> description, jni::ref<java::lang::String> reason) { return base_::new_object(code, label, description, reason); }
	static jni::ref<android::telecom::DisconnectCause> new_object(jint code, jni::ref<java::lang::CharSequence> label, jni::ref<java::lang::CharSequence> description, jni::ref<java::lang::String> reason, jint toneToPlay) { return base_::new_object(code, label, description, reason, toneToPlay); }
	jint getCode() { return call_method<"getCode", jint>(); }
	jni::ref<java::lang::CharSequence> getLabel() { return call_method<"getLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getDescription() { return call_method<"getDescription", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getReason() { return call_method<"getReason", jni::ref<java::lang::String>>(); }
	jint getTone() { return call_method<"getTone", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> destination, jint flags) { return call_method<"writeToParcel", void>(destination, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DisconnectCause(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_DISCONNECTCAUSE
