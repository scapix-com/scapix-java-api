// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::annotation { class AnnotationFormatError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::annotation::AnnotationFormatError>
{
	static constexpr fixed_string class_name = "java/lang/annotation/AnnotationFormatError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR)
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::annotation::AnnotationFormatError : public jni::object_base<"java/lang/annotation/AnnotationFormatError",
	java::lang::Error>
{
public:

	static jni::ref<java::lang::annotation::AnnotationFormatError> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<java::lang::annotation::AnnotationFormatError> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	static jni::ref<java::lang::annotation::AnnotationFormatError> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	AnnotationFormatError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATIONFORMATERROR