// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv::interactive { class TvInteractiveAppServiceInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::interactive::TvInteractiveAppServiceInfo>
{
	static constexpr fixed_string class_name = "android/media/tv/interactive/TvInteractiveAppServiceInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICEINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::interactive::TvInteractiveAppServiceInfo : public jni::object_base<"android/media/tv/interactive/TvInteractiveAppServiceInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint INTERACTIVE_APP_TYPE_ATSC() { return get_static_field<"INTERACTIVE_APP_TYPE_ATSC", jint>(); }
	static jint INTERACTIVE_APP_TYPE_GINGA() { return get_static_field<"INTERACTIVE_APP_TYPE_GINGA", jint>(); }
	static jint INTERACTIVE_APP_TYPE_HBBTV() { return get_static_field<"INTERACTIVE_APP_TYPE_HBBTV", jint>(); }
	static jint INTERACTIVE_APP_TYPE_OTHER() { return get_static_field<"INTERACTIVE_APP_TYPE_OTHER", jint>(); }
	static jint INTERACTIVE_APP_TYPE_TARGETED_AD() { return get_static_field<"INTERACTIVE_APP_TYPE_TARGETED_AD", jint>(); }

	static jni::ref<android::media::tv::interactive::TvInteractiveAppServiceInfo> new_object(jni::ref<android::content::Context> context, jni::ref<android::content::ComponentName> component) { return base_::new_object(context, component); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::pm::ServiceInfo> getServiceInfo() { return call_method<"getServiceInfo", jni::ref<android::content::pm::ServiceInfo>>(); }
	jint getSupportedTypes() { return call_method<"getSupportedTypes", jint>(); }
	jni::ref<java::util::List> getCustomSupportedTypes() { return call_method<"getCustomSupportedTypes", jni::ref<java::util::List>>(); }

protected:

	TvInteractiveAppServiceInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_INTERACTIVE_TVINTERACTIVEAPPSERVICEINFO