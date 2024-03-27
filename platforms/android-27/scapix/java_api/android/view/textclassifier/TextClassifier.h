// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextClassifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextClassifier>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextClassifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/view/textclassifier/TextClassification.h>
#include <scapix/java_api/android/view/textclassifier/TextSelection.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextClassifier : public jni::object_base<"android/view/textclassifier/TextClassifier",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textclassifier::TextClassifier> NO_OP() { return get_static_field<"NO_OP", jni::ref<android::view::textclassifier::TextClassifier>>(); }
	static jni::ref<java::lang::String> TYPE_ADDRESS() { return get_static_field<"TYPE_ADDRESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_EMAIL() { return get_static_field<"TYPE_EMAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_OTHER() { return get_static_field<"TYPE_OTHER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_PHONE() { return get_static_field<"TYPE_PHONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TYPE_URL() { return get_static_field<"TYPE_URL", jni::ref<java::lang::String>>(); }

	jni::ref<android::view::textclassifier::TextSelection> suggestSelection(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3, jni::ref<android::os::LocaleList> p4) { return call_method<"suggestSelection", jni::ref<android::view::textclassifier::TextSelection>>(p1, p2, p3, p4); }
	jni::ref<android::view::textclassifier::TextClassification> classifyText(jni::ref<java::lang::CharSequence> p1, jint p2, jint p3, jni::ref<android::os::LocaleList> p4) { return call_method<"classifyText", jni::ref<android::view::textclassifier::TextClassification>>(p1, p2, p3, p4); }

protected:

	TextClassifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFIER