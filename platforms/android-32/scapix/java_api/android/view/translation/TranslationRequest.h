// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::translation { class TranslationRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::translation::TranslationRequest>
{
	static constexpr fixed_string class_name = "android/view/translation/TranslationRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONREQUEST)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/view/translation/TranslationRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::translation::TranslationRequest : public jni::object_base<"android/view/translation/TranslationRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TranslationRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_DICTIONARY_RESULT() { return get_static_field<"FLAG_DICTIONARY_RESULT", jint>(); }
	static jint FLAG_PARTIAL_RESPONSES() { return get_static_field<"FLAG_PARTIAL_RESPONSES", jint>(); }
	static jint FLAG_TRANSLATION_RESULT() { return get_static_field<"FLAG_TRANSLATION_RESULT", jint>(); }
	static jint FLAG_TRANSLITERATION_RESULT() { return get_static_field<"FLAG_TRANSLITERATION_RESULT", jint>(); }

	jint getFlags() { return call_method<"getFlags", jint>(); }
	jni::ref<java::util::List> getTranslationRequestValues() { return call_method<"getTranslationRequestValues", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getViewTranslationRequests() { return call_method<"getViewTranslationRequests", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	TranslationRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONREQUEST
