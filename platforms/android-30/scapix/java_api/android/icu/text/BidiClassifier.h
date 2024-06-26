// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ICU_TEXT_BIDICLASSIFIER_FWD
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_BIDICLASSIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::icu::text { class BidiClassifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::icu::text::BidiClassifier>
{
	static constexpr fixed_string class_name = "android/icu/text/BidiClassifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_BIDICLASSIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ICU_TEXT_BIDICLASSIFIER)
#define SCAPIX_JAVA_API_ANDROID_ICU_TEXT_BIDICLASSIFIER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::icu::text::BidiClassifier : public jni::object_base<"android/icu/text/BidiClassifier",
	java::lang::Object>
{
public:

	static jni::ref<android::icu::text::BidiClassifier> new_object(jni::ref<java::lang::Object> context) { return base_::new_object(context); }
	void setContext(jni::ref<java::lang::Object> context) { return call_method<"setContext", void>(context); }
	jni::ref<java::lang::Object> getContext() { return call_method<"getContext", jni::ref<java::lang::Object>>(); }
	jint classify(jint c) { return call_method<"classify", jint>(c); }

protected:

	BidiClassifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ICU_TEXT_BIDICLASSIFIER
