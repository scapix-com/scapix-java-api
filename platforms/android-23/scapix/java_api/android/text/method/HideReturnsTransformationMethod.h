// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/method/ReplacementTransformationMethod.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::method { class HideReturnsTransformationMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::method::HideReturnsTransformationMethod>
{
	static constexpr fixed_string class_name = "android/text/method/HideReturnsTransformationMethod";
	using base_classes = std::tuple<scapix::java_api::android::text::method::ReplacementTransformationMethod>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD)
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::method::HideReturnsTransformationMethod : public jni::object_base<"android/text/method/HideReturnsTransformationMethod",
	android::text::method::ReplacementTransformationMethod>
{
public:

	static jni::ref<android::text::method::HideReturnsTransformationMethod> new_object() { return base_::new_object(); }
	static jni::ref<android::text::method::HideReturnsTransformationMethod> getInstance() { return call_static_method<"getInstance", jni::ref<android::text::method::HideReturnsTransformationMethod>>(); }

protected:

	HideReturnsTransformationMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD
