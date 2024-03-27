// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputInfo>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/content/pm/ServiceInfo.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/tv/TvInputInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputInfo : public jni::object_base<"android/media/tv/TvInputInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TvInputInfo_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> EXTRA_INPUT_ID() { return get_static_field<"EXTRA_INPUT_ID", jni::ref<java::lang::String>>(); }
	static jint TYPE_COMPONENT() { return get_static_field<"TYPE_COMPONENT", jint>(); }
	static jint TYPE_COMPOSITE() { return get_static_field<"TYPE_COMPOSITE", jint>(); }
	static jint TYPE_DISPLAY_PORT() { return get_static_field<"TYPE_DISPLAY_PORT", jint>(); }
	static jint TYPE_DVI() { return get_static_field<"TYPE_DVI", jint>(); }
	static jint TYPE_HDMI() { return get_static_field<"TYPE_HDMI", jint>(); }
	static jint TYPE_OTHER() { return get_static_field<"TYPE_OTHER", jint>(); }
	static jint TYPE_SCART() { return get_static_field<"TYPE_SCART", jint>(); }
	static jint TYPE_SVIDEO() { return get_static_field<"TYPE_SVIDEO", jint>(); }
	static jint TYPE_TUNER() { return get_static_field<"TYPE_TUNER", jint>(); }
	static jint TYPE_VGA() { return get_static_field<"TYPE_VGA", jint>(); }

	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getParentId() { return call_method<"getParentId", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::pm::ServiceInfo> getServiceInfo() { return call_method<"getServiceInfo", jni::ref<android::content::pm::ServiceInfo>>(); }
	jni::ref<android::content::Intent> createSetupIntent() { return call_method<"createSetupIntent", jni::ref<android::content::Intent>>(); }
	jni::ref<android::content::Intent> createSettingsIntent() { return call_method<"createSettingsIntent", jni::ref<android::content::Intent>>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jint getTunerCount() { return call_method<"getTunerCount", jint>(); }
	jboolean canRecord() { return call_method<"canRecord", jboolean>(); }
	jboolean canPauseRecording() { return call_method<"canPauseRecording", jboolean>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jboolean isPassthroughInput() { return call_method<"isPassthroughInput", jboolean>(); }
	jboolean isHidden(jni::ref<android::content::Context> context) { return call_method<"isHidden", jboolean>(context); }
	jni::ref<java::lang::CharSequence> loadLabel(jni::ref<android::content::Context> context) { return call_method<"loadLabel", jni::ref<java::lang::CharSequence>>(context); }
	jni::ref<java::lang::CharSequence> loadCustomLabel(jni::ref<android::content::Context> context) { return call_method<"loadCustomLabel", jni::ref<java::lang::CharSequence>>(context); }
	jni::ref<android::graphics::drawable::Drawable> loadIcon(jni::ref<android::content::Context> context) { return call_method<"loadIcon", jni::ref<android::graphics::drawable::Drawable>>(context); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	TvInputInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO
