// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>
#include <scapix/java_api/java/lang/classfile/ClassElement.h>
#include <scapix/java_api/java/lang/classfile/MethodElement.h>
#include <scapix/java_api/java/lang/classfile/FieldElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_UNKNOWNATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_UNKNOWNATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class UnknownAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::UnknownAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/UnknownAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute, scapix::java_api::java::lang::classfile::ClassElement, scapix::java_api::java::lang::classfile::MethodElement, scapix::java_api::java::lang::classfile::FieldElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_UNKNOWNATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_UNKNOWNATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_UNKNOWNATTRIBUTE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::UnknownAttribute : public jni::object_base<"java/lang/classfile/attribute/UnknownAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute,
	java::lang::classfile::ClassElement,
	java::lang::classfile::MethodElement,
	java::lang::classfile::FieldElement>
{
public:

	jni::ref<jni::array<jbyte>> contents() { return call_method<"contents", jni::ref<jni::array<jbyte>>>(); }

protected:

	UnknownAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_UNKNOWNATTRIBUTE
