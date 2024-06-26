// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/AnnotationValue_OfConstant.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ANNOTATIONVALUE_OFBYTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ANNOTATIONVALUE_OFBYTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class AnnotationValue_OfByte; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::AnnotationValue_OfByte>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/AnnotationValue$OfByte";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::AnnotationValue_OfConstant>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ANNOTATIONVALUE_OFBYTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ANNOTATIONVALUE_OFBYTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ANNOTATIONVALUE_OFBYTE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::AnnotationValue_OfByte : public jni::object_base<"jdk/internal/classfile/AnnotationValue$OfByte",
	java::lang::Object,
	jdk::internal::classfile::AnnotationValue_OfConstant>
{
public:

	jbyte byteValue() { return call_method<"byteValue", jbyte>(); }

protected:

	AnnotationValue_OfByte(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ANNOTATIONVALUE_OFBYTE
