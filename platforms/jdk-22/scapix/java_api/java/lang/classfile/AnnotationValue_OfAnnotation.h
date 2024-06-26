// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFANNOTATION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFANNOTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class AnnotationValue_OfAnnotation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::AnnotationValue_OfAnnotation>
{
	static constexpr fixed_string class_name = "java/lang/classfile/AnnotationValue$OfAnnotation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::AnnotationValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFANNOTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFANNOTATION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFANNOTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/Annotation.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::AnnotationValue_OfAnnotation : public jni::object_base<"java/lang/classfile/AnnotationValue$OfAnnotation",
	java::lang::Object,
	java::lang::classfile::AnnotationValue>
{
public:

	jni::ref<java::lang::classfile::Annotation> annotation() { return call_method<"annotation", jni::ref<java::lang::classfile::Annotation>>(); }

protected:

	AnnotationValue_OfAnnotation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFANNOTATION
