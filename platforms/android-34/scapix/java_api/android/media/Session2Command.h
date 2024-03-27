// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION2COMMAND_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION2COMMAND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class Session2Command; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::Session2Command>
{
	static constexpr fixed_string class_name = "android/media/Session2Command";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION2COMMAND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION2COMMAND)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION2COMMAND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/Session2Command_Result.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::Session2Command : public jni::object_base<"android/media/Session2Command",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Result = Session2Command_Result;

	static jint COMMAND_CODE_CUSTOM() { return get_static_field<"COMMAND_CODE_CUSTOM", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::media::Session2Command> new_object(jint commandCode) { return base_::new_object(commandCode); }
	static jni::ref<android::media::Session2Command> new_object(jni::ref<java::lang::String> action, jni::ref<android::os::Bundle> extras) { return base_::new_object(action, extras); }
	jint getCommandCode() { return call_method<"getCommandCode", jint>(); }
	jni::ref<java::lang::String> getCustomAction() { return call_method<"getCustomAction", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::Bundle> getCustomExtras() { return call_method<"getCustomExtras", jni::ref<android::os::Bundle>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Session2Command(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SESSION2COMMAND