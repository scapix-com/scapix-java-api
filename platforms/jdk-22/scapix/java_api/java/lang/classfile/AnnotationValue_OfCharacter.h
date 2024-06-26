// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfConstant.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFCHARACTER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFCHARACTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class AnnotationValue_OfCharacter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::AnnotationValue_OfCharacter>
{
	static constexpr fixed_string class_name = "java/lang/classfile/AnnotationValue$OfCharacter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::AnnotationValue_OfConstant>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFCHARACTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFCHARACTER)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFCHARACTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::AnnotationValue_OfCharacter : public jni::object_base<"java/lang/classfile/AnnotationValue$OfCharacter",
	java::lang::Object,
	java::lang::classfile::AnnotationValue_OfConstant>
{
public:

	jchar charValue() { return call_method<"charValue", jchar>(); }

protected:

	AnnotationValue_OfCharacter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFCHARACTER
