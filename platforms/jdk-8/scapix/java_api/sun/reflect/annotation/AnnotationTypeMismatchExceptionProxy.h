// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/annotation/ExceptionProxy.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTIONPROXY_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTIONPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class AnnotationTypeMismatchExceptionProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::AnnotationTypeMismatchExceptionProxy>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/AnnotationTypeMismatchExceptionProxy";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::annotation::ExceptionProxy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTIONPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTIONPROXY)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTIONPROXY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::annotation::AnnotationTypeMismatchExceptionProxy : public jni::object_base<"sun/reflect/annotation/AnnotationTypeMismatchExceptionProxy",
	sun::reflect::annotation::ExceptionProxy>
{
public:


protected:

	AnnotationTypeMismatchExceptionProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPEMISMATCHEXCEPTIONPROXY
