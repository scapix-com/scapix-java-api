// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::translation { class ViewTranslationRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::translation::ViewTranslationRequest>
{
	static constexpr fixed_string class_name = "android/view/translation/ViewTranslationRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONREQUEST)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/android/view/translation/TranslationRequestValue.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/android/view/translation/ViewTranslationRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::translation::ViewTranslationRequest : public jni::object_base<"android/view/translation/ViewTranslationRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = ViewTranslationRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jni::ref<java::lang::String> ID_TEXT() { return get_static_field<"ID_TEXT", jni::ref<java::lang::String>>(); }

	jni::ref<android::view::translation::TranslationRequestValue> getValue(jni::ref<java::lang::String> key) { return call_method<"getValue", jni::ref<android::view::translation::TranslationRequestValue>>(key); }
	jni::ref<java::util::Set> getKeys() { return call_method<"getKeys", jni::ref<java::util::Set>>(); }
	jni::ref<android::view::autofill::AutofillId> getAutofillId() { return call_method<"getAutofillId", jni::ref<android::view::autofill::AutofillId>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	ViewTranslationRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONREQUEST
