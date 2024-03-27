// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTCONTENT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTCONTENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::assist { class AssistContent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::assist::AssistContent>
{
	static constexpr fixed_string class_name = "android/app/assist/AssistContent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTCONTENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTCONTENT)
#define SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTCONTENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ClipData.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::assist::AssistContent : public jni::object_base<"android/app/assist/AssistContent",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::app::assist::AssistContent> new_object() { return base_::new_object(); }
	void setIntent(jni::ref<android::content::Intent> intent) { return call_method<"setIntent", void>(intent); }
	jni::ref<android::content::Intent> getIntent() { return call_method<"getIntent", jni::ref<android::content::Intent>>(); }
	jboolean isAppProvidedIntent() { return call_method<"isAppProvidedIntent", jboolean>(); }
	void setClipData(jni::ref<android::content::ClipData> clip) { return call_method<"setClipData", void>(clip); }
	jni::ref<android::content::ClipData> getClipData() { return call_method<"getClipData", jni::ref<android::content::ClipData>>(); }
	void setStructuredData(jni::ref<java::lang::String> structuredData) { return call_method<"setStructuredData", void>(structuredData); }
	jni::ref<java::lang::String> getStructuredData() { return call_method<"getStructuredData", jni::ref<java::lang::String>>(); }
	void setWebUri(jni::ref<android::net::Uri> uri) { return call_method<"setWebUri", void>(uri); }
	jni::ref<android::net::Uri> getWebUri() { return call_method<"getWebUri", jni::ref<android::net::Uri>>(); }
	jboolean isAppProvidedWebUri() { return call_method<"isAppProvidedWebUri", jboolean>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	AssistContent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTCONTENT