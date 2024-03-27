// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SYNCNOTEDAPPOP_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SYNCNOTEDAPPOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class SyncNotedAppOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::SyncNotedAppOp>
{
	static constexpr fixed_string class_name = "android/app/SyncNotedAppOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SYNCNOTEDAPPOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SYNCNOTEDAPPOP)
#define SCAPIX_JAVA_API_ANDROID_APP_SYNCNOTEDAPPOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::SyncNotedAppOp : public jni::object_base<"android/app/SyncNotedAppOp",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::app::SyncNotedAppOp> new_object(jint opCode, jni::ref<java::lang::String> attributionTag) { return base_::new_object(opCode, attributionTag); }
	jni::ref<java::lang::String> getOp() { return call_method<"getOp", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAttributionTag() { return call_method<"getAttributionTag", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	SyncNotedAppOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SYNCNOTEDAPPOP
