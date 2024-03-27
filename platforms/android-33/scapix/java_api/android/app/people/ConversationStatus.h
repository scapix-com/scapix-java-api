// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_PEOPLE_CONVERSATIONSTATUS_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_PEOPLE_CONVERSATIONSTATUS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::people { class ConversationStatus; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::people::ConversationStatus>
{
	static constexpr fixed_string class_name = "android/app/people/ConversationStatus";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PEOPLE_CONVERSATIONSTATUS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_PEOPLE_CONVERSATIONSTATUS)
#define SCAPIX_JAVA_API_ANDROID_APP_PEOPLE_CONVERSATIONSTATUS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/drawable/Icon.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/app/people/ConversationStatus_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::people::ConversationStatus : public jni::object_base<"android/app/people/ConversationStatus",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ConversationStatus_Builder;

	static jint ACTIVITY_ANNIVERSARY() { return get_static_field<"ACTIVITY_ANNIVERSARY", jint>(); }
	static jint ACTIVITY_AUDIO() { return get_static_field<"ACTIVITY_AUDIO", jint>(); }
	static jint ACTIVITY_BIRTHDAY() { return get_static_field<"ACTIVITY_BIRTHDAY", jint>(); }
	static jint ACTIVITY_GAME() { return get_static_field<"ACTIVITY_GAME", jint>(); }
	static jint ACTIVITY_LOCATION() { return get_static_field<"ACTIVITY_LOCATION", jint>(); }
	static jint ACTIVITY_NEW_STORY() { return get_static_field<"ACTIVITY_NEW_STORY", jint>(); }
	static jint ACTIVITY_OTHER() { return get_static_field<"ACTIVITY_OTHER", jint>(); }
	static jint ACTIVITY_UPCOMING_BIRTHDAY() { return get_static_field<"ACTIVITY_UPCOMING_BIRTHDAY", jint>(); }
	static jint ACTIVITY_VIDEO() { return get_static_field<"ACTIVITY_VIDEO", jint>(); }
	static jint AVAILABILITY_AVAILABLE() { return get_static_field<"AVAILABILITY_AVAILABLE", jint>(); }
	static jint AVAILABILITY_BUSY() { return get_static_field<"AVAILABILITY_BUSY", jint>(); }
	static jint AVAILABILITY_OFFLINE() { return get_static_field<"AVAILABILITY_OFFLINE", jint>(); }
	static jint AVAILABILITY_UNKNOWN() { return get_static_field<"AVAILABILITY_UNKNOWN", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jint getActivity() { return call_method<"getActivity", jint>(); }
	jint getAvailability() { return call_method<"getAvailability", jint>(); }
	jni::ref<java::lang::CharSequence> getDescription() { return call_method<"getDescription", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::graphics::drawable::Icon> getIcon() { return call_method<"getIcon", jni::ref<android::graphics::drawable::Icon>>(); }
	jlong getStartTimeMillis() { return call_method<"getStartTimeMillis", jlong>(); }
	jlong getEndTimeMillis() { return call_method<"getEndTimeMillis", jlong>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	ConversationStatus(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_PEOPLE_CONVERSATIONSTATUS