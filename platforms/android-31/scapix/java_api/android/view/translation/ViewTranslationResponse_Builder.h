// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONRESPONSE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONRESPONSE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::translation { class ViewTranslationResponse_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::translation::ViewTranslationResponse_Builder>
{
	static constexpr fixed_string class_name = "android/view/translation/ViewTranslationResponse$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONRESPONSE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONRESPONSE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONRESPONSE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/android/view/translation/TranslationResponseValue.h>
#include <scapix/java_api/android/view/translation/ViewTranslationResponse.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::translation::ViewTranslationResponse_Builder : public jni::object_base<"android/view/translation/ViewTranslationResponse$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::translation::ViewTranslationResponse_Builder> new_object(jni::ref<android::view::autofill::AutofillId> autofillId) { return base_::new_object(autofillId); }
	jni::ref<android::view::translation::ViewTranslationResponse> build() { return call_method<"build", jni::ref<android::view::translation::ViewTranslationResponse>>(); }
	jni::ref<android::view::translation::ViewTranslationResponse_Builder> setValue(jni::ref<java::lang::String> key, jni::ref<android::view::translation::TranslationResponseValue> value) { return call_method<"setValue", jni::ref<android::view::translation::ViewTranslationResponse_Builder>>(key, value); }

protected:

	ViewTranslationResponse_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TRANSLATION_VIEWTRANSLATIONRESPONSE_BUILDER