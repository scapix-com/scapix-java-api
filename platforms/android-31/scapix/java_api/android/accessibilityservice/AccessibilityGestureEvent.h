// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYGESTUREEVENT_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYGESTUREEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class AccessibilityGestureEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::AccessibilityGestureEvent>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/AccessibilityGestureEvent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYGESTUREEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYGESTUREEVENT)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYGESTUREEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::AccessibilityGestureEvent : public jni::object_base<"android/accessibilityservice/AccessibilityGestureEvent",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getDisplayId() { return call_method<"getDisplayId", jint>(); }
	jint getGestureId() { return call_method<"getGestureId", jint>(); }
	jni::ref<java::util::List> getMotionEvents() { return call_method<"getMotionEvents", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> gestureIdToString(jint id) { return call_static_method<"gestureIdToString", jni::ref<java::lang::String>>(id); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	AccessibilityGestureEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYGESTUREEVENT
