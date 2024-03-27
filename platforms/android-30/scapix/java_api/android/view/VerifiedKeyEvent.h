// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/VerifiedInputEvent.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VERIFIEDKEYEVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VERIFIEDKEYEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class VerifiedKeyEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::VerifiedKeyEvent>
{
	static constexpr fixed_string class_name = "android/view/VerifiedKeyEvent";
	using base_classes = std::tuple<scapix::java_api::android::view::VerifiedInputEvent, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VERIFIEDKEYEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VERIFIEDKEYEVENT)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VERIFIEDKEYEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::VerifiedKeyEvent : public jni::object_base<"android/view/VerifiedKeyEvent",
	android::view::VerifiedInputEvent,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::Boolean> getFlag(jint flag) { return call_method<"getFlag", jni::ref<java::lang::Boolean>>(flag); }
	jint getAction() { return call_method<"getAction", jint>(); }
	jlong getDownTimeNanos() { return call_method<"getDownTimeNanos", jlong>(); }
	jint getKeyCode() { return call_method<"getKeyCode", jint>(); }
	jint getScanCode() { return call_method<"getScanCode", jint>(); }
	jint getMetaState() { return call_method<"getMetaState", jint>(); }
	jint getRepeatCount() { return call_method<"getRepeatCount", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	VerifiedKeyEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VERIFIEDKEYEVENT
