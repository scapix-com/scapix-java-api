// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SEARCHABLEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SEARCHABLEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class SearchableInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::SearchableInfo>
{
	static constexpr fixed_string class_name = "android/app/SearchableInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SEARCHABLEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SEARCHABLEINFO)
#define SCAPIX_JAVA_API_ANDROID_APP_SEARCHABLEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::SearchableInfo : public jni::object_base<"android/app/SearchableInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getSuggestAuthority() { return call_method<"getSuggestAuthority", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSuggestPackage() { return call_method<"getSuggestPackage", jni::ref<java::lang::String>>(); }
	jni::ref<android::content::ComponentName> getSearchActivity() { return call_method<"getSearchActivity", jni::ref<android::content::ComponentName>>(); }
	jboolean shouldRewriteQueryFromData() { return call_method<"shouldRewriteQueryFromData", jboolean>(); }
	jboolean shouldRewriteQueryFromText() { return call_method<"shouldRewriteQueryFromText", jboolean>(); }
	jint getSettingsDescriptionId() { return call_method<"getSettingsDescriptionId", jint>(); }
	jni::ref<java::lang::String> getSuggestPath() { return call_method<"getSuggestPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSuggestSelection() { return call_method<"getSuggestSelection", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSuggestIntentAction() { return call_method<"getSuggestIntentAction", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSuggestIntentData() { return call_method<"getSuggestIntentData", jni::ref<java::lang::String>>(); }
	jint getSuggestThreshold() { return call_method<"getSuggestThreshold", jint>(); }
	jint getHintId() { return call_method<"getHintId", jint>(); }
	jboolean getVoiceSearchEnabled() { return call_method<"getVoiceSearchEnabled", jboolean>(); }
	jboolean getVoiceSearchLaunchWebSearch() { return call_method<"getVoiceSearchLaunchWebSearch", jboolean>(); }
	jboolean getVoiceSearchLaunchRecognizer() { return call_method<"getVoiceSearchLaunchRecognizer", jboolean>(); }
	jint getVoiceLanguageModeId() { return call_method<"getVoiceLanguageModeId", jint>(); }
	jint getVoicePromptTextId() { return call_method<"getVoicePromptTextId", jint>(); }
	jint getVoiceLanguageId() { return call_method<"getVoiceLanguageId", jint>(); }
	jint getVoiceMaxResults() { return call_method<"getVoiceMaxResults", jint>(); }
	jint getInputType() { return call_method<"getInputType", jint>(); }
	jint getImeOptions() { return call_method<"getImeOptions", jint>(); }
	jboolean shouldIncludeInGlobalSearch() { return call_method<"shouldIncludeInGlobalSearch", jboolean>(); }
	jboolean queryAfterZeroResults() { return call_method<"queryAfterZeroResults", jboolean>(); }
	jboolean autoUrlDetect() { return call_method<"autoUrlDetect", jboolean>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	SearchableInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SEARCHABLEINFO