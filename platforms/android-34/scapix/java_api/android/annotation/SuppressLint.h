// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANNOTATION_SUPPRESSLINT_FWD
#define SCAPIX_JAVA_API_ANDROID_ANNOTATION_SUPPRESSLINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::annotation { class SuppressLint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::annotation::SuppressLint>
{
	static constexpr fixed_string class_name = "android/annotation/SuppressLint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANNOTATION_SUPPRESSLINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANNOTATION_SUPPRESSLINT)
#define SCAPIX_JAVA_API_ANDROID_ANNOTATION_SUPPRESSLINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::annotation::SuppressLint : public jni::object_base<"android/annotation/SuppressLint",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<jni::array<java::lang::String>> value() { return call_method<"value", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	SuppressLint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANNOTATION_SUPPRESSLINT
