// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONRESPONSEVALUE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONRESPONSEVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::translation { class TranslationResponseValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::translation::TranslationResponseValue>
{
	static constexpr fixed_string class_name = "android/view/translation/TranslationResponseValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONRESPONSEVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONRESPONSEVALUE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONRESPONSEVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/view/translation/TranslationResponseValue_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::translation::TranslationResponseValue : public jni::object_base<"android/view/translation/TranslationResponseValue",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TranslationResponseValue_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> EXTRA_DEFINITIONS() { return get_static_field<"EXTRA_DEFINITIONS", jni::ref<java::lang::String>>(); }
	static jint STATUS_ERROR() { return get_static_field<"STATUS_ERROR", jint>(); }
	static jint STATUS_SUCCESS() { return get_static_field<"STATUS_SUCCESS", jint>(); }

	static jni::ref<android::view::translation::TranslationResponseValue> forError() { return call_static_method<"forError", jni::ref<android::view::translation::TranslationResponseValue>>(); }
	jint getStatusCode() { return call_method<"getStatusCode", jint>(); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<java::lang::CharSequence> getTransliteration() { return call_method<"getTransliteration", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	TranslationResponseValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONRESPONSEVALUE
