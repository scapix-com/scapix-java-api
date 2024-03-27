// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class VoiceInteractor_PickOptionRequest_Option; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::VoiceInteractor_PickOptionRequest_Option>
{
	static constexpr fixed_string class_name = "android/app/VoiceInteractor$PickOptionRequest$Option";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION)
#define SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::VoiceInteractor_PickOptionRequest_Option : public jni::object_base<"android/app/VoiceInteractor$PickOptionRequest$Option",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::app::VoiceInteractor_PickOptionRequest_Option> new_object(jni::ref<java::lang::CharSequence> label, jint index) { return base_::new_object(label, index); }
	jni::ref<android::app::VoiceInteractor_PickOptionRequest_Option> addSynonym(jni::ref<java::lang::CharSequence> synonym) { return call_method<"addSynonym", jni::ref<android::app::VoiceInteractor_PickOptionRequest_Option>>(synonym); }
	jni::ref<java::lang::CharSequence> getLabel() { return call_method<"getLabel", jni::ref<java::lang::CharSequence>>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jint countSynonyms() { return call_method<"countSynonyms", jint>(); }
	jni::ref<java::lang::CharSequence> getSynonymAt(jint index) { return call_method<"getSynonymAt", jni::ref<java::lang::CharSequence>>(index); }
	void setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", void>(extras); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	VoiceInteractor_PickOptionRequest_Option(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_VOICEINTERACTOR_PICKOPTIONREQUEST_OPTION
