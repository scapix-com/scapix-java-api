// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONINVOCATIONHANDLER_UNSAFEACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONINVOCATIONHANDLER_UNSAFEACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class AnnotationInvocationHandler_UnsafeAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::AnnotationInvocationHandler_UnsafeAccessor>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/AnnotationInvocationHandler$UnsafeAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONINVOCATIONHANDLER_UNSAFEACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONINVOCATIONHANDLER_UNSAFEACCESSOR)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONINVOCATIONHANDLER_UNSAFEACCESSOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::annotation::AnnotationInvocationHandler_UnsafeAccessor : public jni::object_base<"sun/reflect/annotation/AnnotationInvocationHandler$UnsafeAccessor",
	java::lang::Object>
{
public:


protected:

	AnnotationInvocationHandler_UnsafeAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONINVOCATIONHANDLER_UNSAFEACCESSOR
