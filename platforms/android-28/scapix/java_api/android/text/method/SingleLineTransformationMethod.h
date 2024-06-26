// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/method/ReplacementTransformationMethod.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::method { class SingleLineTransformationMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::method::SingleLineTransformationMethod>
{
	static constexpr fixed_string class_name = "android/text/method/SingleLineTransformationMethod";
	using base_classes = std::tuple<scapix::java_api::android::text::method::ReplacementTransformationMethod>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD)
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::method::SingleLineTransformationMethod : public jni::object_base<"android/text/method/SingleLineTransformationMethod",
	android::text::method::ReplacementTransformationMethod>
{
public:

	static jni::ref<android::text::method::SingleLineTransformationMethod> new_object() { return base_::new_object(); }
	static jni::ref<android::text::method::SingleLineTransformationMethod> getInstance() { return call_static_method<"getInstance", jni::ref<android::text::method::SingleLineTransformationMethod>>(); }

protected:

	SingleLineTransformationMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD
