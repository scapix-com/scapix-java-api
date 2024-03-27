// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTIONREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTIONREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class ConnectionRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::ConnectionRequest>
{
	static constexpr fixed_string class_name = "android/telecom/ConnectionRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTIONREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTIONREQUEST)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTIONREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/telecom/Connection_RttTextStream.h>
#include <scapix/java_api/android/telecom/PhoneAccountHandle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::ConnectionRequest : public jni::object_base<"android/telecom/ConnectionRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::telecom::ConnectionRequest> new_object(jni::ref<android::telecom::PhoneAccountHandle> accountHandle, jni::ref<android::net::Uri> handle, jni::ref<android::os::Bundle> extras) { return base_::new_object(accountHandle, handle, extras); }
	static jni::ref<android::telecom::ConnectionRequest> new_object(jni::ref<android::telecom::PhoneAccountHandle> accountHandle, jni::ref<android::net::Uri> handle, jni::ref<android::os::Bundle> extras, jint videoState) { return base_::new_object(accountHandle, handle, extras, videoState); }
	jni::ref<android::telecom::PhoneAccountHandle> getAccountHandle() { return call_method<"getAccountHandle", jni::ref<android::telecom::PhoneAccountHandle>>(); }
	jni::ref<android::net::Uri> getAddress() { return call_method<"getAddress", jni::ref<android::net::Uri>>(); }
	jni::ref<java::util::List> getParticipants() { return call_method<"getParticipants", jni::ref<java::util::List>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jint getVideoState() { return call_method<"getVideoState", jint>(); }
	jboolean isAdhocConferenceCall() { return call_method<"isAdhocConferenceCall", jboolean>(); }
	jni::ref<android::telecom::Connection_RttTextStream> getRttTextStream() { return call_method<"getRttTextStream", jni::ref<android::telecom::Connection_RttTextStream>>(); }
	jboolean isRequestingRtt() { return call_method<"isRequestingRtt", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> destination, jint flags) { return call_method<"writeToParcel", void>(destination, flags); }

protected:

	ConnectionRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTIONREQUEST
