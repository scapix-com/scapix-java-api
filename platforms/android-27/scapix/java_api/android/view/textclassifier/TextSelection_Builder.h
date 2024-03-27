// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::textclassifier { class TextSelection_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::textclassifier::TextSelection_Builder>
{
	static constexpr fixed_string class_name = "android/view/textclassifier/TextSelection$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/textclassifier/TextSelection.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::textclassifier::TextSelection_Builder : public jni::object_base<"android/view/textclassifier/TextSelection$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::textclassifier::TextSelection_Builder> new_object(jint startIndex, jint endIndex) { return base_::new_object(startIndex, endIndex); }
	jni::ref<android::view::textclassifier::TextSelection_Builder> setEntityType(jni::ref<java::lang::String> type, jfloat confidenceScore) { return call_method<"setEntityType", jni::ref<android::view::textclassifier::TextSelection_Builder>>(type, confidenceScore); }
	jni::ref<android::view::textclassifier::TextSelection> build() { return call_method<"build", jni::ref<android::view::textclassifier::TextSelection>>(); }

protected:

	TextSelection_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_BUILDER
