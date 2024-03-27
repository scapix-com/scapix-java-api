// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class RemoteInput; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::RemoteInput>
{
	static constexpr fixed_string class_name = "android/app/RemoteInput";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT)
#define SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/app/RemoteInput_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::RemoteInput : public jni::object_base<"android/app/RemoteInput",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = RemoteInput_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint EDIT_CHOICES_BEFORE_SENDING_AUTO() { return get_static_field<"EDIT_CHOICES_BEFORE_SENDING_AUTO", jint>(); }
	static jint EDIT_CHOICES_BEFORE_SENDING_DISABLED() { return get_static_field<"EDIT_CHOICES_BEFORE_SENDING_DISABLED", jint>(); }
	static jint EDIT_CHOICES_BEFORE_SENDING_ENABLED() { return get_static_field<"EDIT_CHOICES_BEFORE_SENDING_ENABLED", jint>(); }
	static jni::ref<java::lang::String> EXTRA_RESULTS_DATA() { return get_static_field<"EXTRA_RESULTS_DATA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RESULTS_CLIP_LABEL() { return get_static_field<"RESULTS_CLIP_LABEL", jni::ref<java::lang::String>>(); }
	static jint SOURCE_CHOICE() { return get_static_field<"SOURCE_CHOICE", jint>(); }
	static jint SOURCE_FREE_FORM_INPUT() { return get_static_field<"SOURCE_FREE_FORM_INPUT", jint>(); }

	jni::ref<java::lang::String> getResultKey() { return call_method<"getResultKey", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getLabel() { return call_method<"getLabel", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<jni::array<java::lang::CharSequence>> getChoices() { return call_method<"getChoices", jni::ref<jni::array<java::lang::CharSequence>>>(); }
	jni::ref<java::util::Set> getAllowedDataTypes() { return call_method<"getAllowedDataTypes", jni::ref<java::util::Set>>(); }
	jboolean isDataOnly() { return call_method<"isDataOnly", jboolean>(); }
	jboolean getAllowFreeFormInput() { return call_method<"getAllowFreeFormInput", jboolean>(); }
	jint getEditChoicesBeforeSending() { return call_method<"getEditChoicesBeforeSending", jint>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	static jni::ref<java::util::Map> getDataResultsFromIntent(jni::ref<android::content::Intent> intent, jni::ref<java::lang::String> remoteInputResultKey) { return call_static_method<"getDataResultsFromIntent", jni::ref<java::util::Map>>(intent, remoteInputResultKey); }
	static jni::ref<android::os::Bundle> getResultsFromIntent(jni::ref<android::content::Intent> intent) { return call_static_method<"getResultsFromIntent", jni::ref<android::os::Bundle>>(intent); }
	static void addResultsToIntent(jni::ref<jni::array<android::app::RemoteInput>> remoteInputs, jni::ref<android::content::Intent> intent, jni::ref<android::os::Bundle> results) { return call_static_method<"addResultsToIntent", void>(remoteInputs, intent, results); }
	static void addDataResultToIntent(jni::ref<android::app::RemoteInput> remoteInput, jni::ref<android::content::Intent> intent, jni::ref<java::util::Map> results) { return call_static_method<"addDataResultToIntent", void>(remoteInput, intent, results); }
	static void setResultsSource(jni::ref<android::content::Intent> intent, jint source) { return call_static_method<"setResultsSource", void>(intent, source); }
	static jint getResultsSource(jni::ref<android::content::Intent> intent) { return call_static_method<"getResultsSource", jint>(intent); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }

protected:

	RemoteInput(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT
