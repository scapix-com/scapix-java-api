// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONCONTEXT_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::translation { class TranslationContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::translation::TranslationContext>
{
	static constexpr fixed_string class_name = "android/view/translation/TranslationContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONCONTEXT)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/translation/TranslationSpec.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/view/translation/TranslationContext_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::translation::TranslationContext : public jni::object_base<"android/view/translation/TranslationContext",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TranslationContext_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_DEFINITIONS() { return get_static_field<"FLAG_DEFINITIONS", jint>(); }
	static jint FLAG_LOW_LATENCY() { return get_static_field<"FLAG_LOW_LATENCY", jint>(); }
	static jint FLAG_TRANSLITERATION() { return get_static_field<"FLAG_TRANSLITERATION", jint>(); }

	jni::ref<android::view::translation::TranslationSpec> getSourceSpec() { return call_method<"getSourceSpec", jni::ref<android::view::translation::TranslationSpec>>(); }
	jni::ref<android::view::translation::TranslationSpec> getTargetSpec() { return call_method<"getTargetSpec", jni::ref<android::view::translation::TranslationSpec>>(); }
	jint getTranslationFlags() { return call_method<"getTranslationFlags", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	TranslationContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_TRANSLATIONCONTEXT
