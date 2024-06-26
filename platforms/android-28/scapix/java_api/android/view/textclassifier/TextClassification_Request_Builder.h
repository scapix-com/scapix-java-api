// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassification_Request_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassification_Request_Builder>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassification$Request$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/view/textclassifier/TextClassification_Request.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/time/ZonedDateTime.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassification_Request_Builder : public jni::object_base<"android/view/textclassifier/TextClassification$Request$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textclassifier::TextClassification_Request_Builder> new_object(jni::ref<java::lang::CharSequence> text, jint startIndex, jint endIndex) { return base_::new_object(text, startIndex, endIndex); }
	jni::ref<android::view::textclassifier::TextClassification_Request_Builder> setDefaultLocales(jni::ref<android::os::LocaleList> defaultLocales) { return call_method<"setDefaultLocales", jni::ref<android::view::textclassifier::TextClassification_Request_Builder>>(defaultLocales); }
	jni::ref<android::view::textclassifier::TextClassification_Request_Builder> setReferenceTime(jni::ref<java::time::ZonedDateTime> referenceTime) { return call_method<"setReferenceTime", jni::ref<android::view::textclassifier::TextClassification_Request_Builder>>(referenceTime); }
	jni::ref<android::view::textclassifier::TextClassification_Request> build() { return call_method<"build", jni::ref<android::view::textclassifier::TextClassification_Request>>(); }

protected:

	TextClassification_Request_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST_BUILDER
