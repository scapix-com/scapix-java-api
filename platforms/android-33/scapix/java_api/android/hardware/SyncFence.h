// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_SYNCFENCE_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SYNCFENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware { class SyncFence; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::SyncFence>
{
	static constexpr fixed_string class_name = "android/hardware/SyncFence";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SYNCFENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_SYNCFENCE)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_SYNCFENCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/time/Duration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::SyncFence : public jni::object_base<"android/hardware/SyncFence",
	java::lang::Object,
	java::lang::AutoCloseable,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jlong SIGNAL_TIME_INVALID() { return get_static_field<"SIGNAL_TIME_INVALID", jlong>(); }
	static jlong SIGNAL_TIME_PENDING() { return get_static_field<"SIGNAL_TIME_PENDING", jlong>(); }

	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	jboolean await(jni::ref<java::time::Duration> timeout) { return call_method<"await", jboolean>(timeout); }
	jboolean awaitForever() { return call_method<"awaitForever", jboolean>(); }
	jlong getSignalTime() { return call_method<"getSignalTime", jlong>(); }
	void close() { return call_method<"close", void>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	SyncFence(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_SYNCFENCE
