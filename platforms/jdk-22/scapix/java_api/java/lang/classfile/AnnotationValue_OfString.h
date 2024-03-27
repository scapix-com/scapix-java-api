// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/AnnotationValue_OfConstant.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFSTRING_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFSTRING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class AnnotationValue_OfString; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::AnnotationValue_OfString>
{
	static constexpr fixed_string class_name = "java/lang/classfile/AnnotationValue$OfString";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::AnnotationValue_OfConstant>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFSTRING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFSTRING)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFSTRING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::AnnotationValue_OfString : public jni::object_base<"java/lang/classfile/AnnotationValue$OfString",
	java::lang::Object,
	java::lang::classfile::AnnotationValue_OfConstant>
{
public:

	jni::ref<java::lang::String> stringValue() { return call_method<"stringValue", jni::ref<java::lang::String>>(); }

protected:

	AnnotationValue_OfString(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ANNOTATIONVALUE_OFSTRING