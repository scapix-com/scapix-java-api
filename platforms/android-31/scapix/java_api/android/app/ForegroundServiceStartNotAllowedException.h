// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/ServiceStartNotAllowedException.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_FOREGROUNDSERVICESTARTNOTALLOWEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_FOREGROUNDSERVICESTARTNOTALLOWEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ForegroundServiceStartNotAllowedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ForegroundServiceStartNotAllowedException>
{
	static constexpr fixed_string class_name = "android/app/ForegroundServiceStartNotAllowedException";
	using base_classes = std::tuple<scapix::java_api::android::app::ServiceStartNotAllowedException, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_FOREGROUNDSERVICESTARTNOTALLOWEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_FOREGROUNDSERVICESTARTNOTALLOWEDEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_APP_FOREGROUNDSERVICESTARTNOTALLOWEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ForegroundServiceStartNotAllowedException : public jni::object_base<"android/app/ForegroundServiceStartNotAllowedException",
	android::app::ServiceStartNotAllowedException,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::app::ForegroundServiceStartNotAllowedException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	ForegroundServiceStartNotAllowedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_FOREGROUNDSERVICESTARTNOTALLOWEDEXCEPTION
