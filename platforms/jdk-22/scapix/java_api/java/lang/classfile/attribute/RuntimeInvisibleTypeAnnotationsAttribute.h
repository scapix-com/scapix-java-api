// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>
#include <scapix/java_api/java/lang/classfile/ClassElement.h>
#include <scapix/java_api/java/lang/classfile/MethodElement.h>
#include <scapix/java_api/java/lang/classfile/FieldElement.h>
#include <scapix/java_api/java/lang/classfile/CodeElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLETYPEANNOTATIONSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLETYPEANNOTATIONSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class RuntimeInvisibleTypeAnnotationsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::RuntimeInvisibleTypeAnnotationsAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/RuntimeInvisibleTypeAnnotationsAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute, scapix::java_api::java::lang::classfile::ClassElement, scapix::java_api::java::lang::classfile::MethodElement, scapix::java_api::java::lang::classfile::FieldElement, scapix::java_api::java::lang::classfile::CodeElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLETYPEANNOTATIONSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLETYPEANNOTATIONSATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLETYPEANNOTATIONSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/TypeAnnotation.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::RuntimeInvisibleTypeAnnotationsAttribute : public jni::object_base<"java/lang/classfile/attribute/RuntimeInvisibleTypeAnnotationsAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute,
	java::lang::classfile::ClassElement,
	java::lang::classfile::MethodElement,
	java::lang::classfile::FieldElement,
	java::lang::classfile::CodeElement>
{
public:

	jni::ref<java::util::List> annotations() { return call_method<"annotations", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::classfile::attribute::RuntimeInvisibleTypeAnnotationsAttribute> of(jni::ref<java::util::List> annotations) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::RuntimeInvisibleTypeAnnotationsAttribute>>(annotations); }
	static jni::ref<java::lang::classfile::attribute::RuntimeInvisibleTypeAnnotationsAttribute> of(jni::ref<jni::array<java::lang::classfile::TypeAnnotation>> annotations) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::RuntimeInvisibleTypeAnnotationsAttribute>>(annotations); }

protected:

	RuntimeInvisibleTypeAnnotationsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLETYPEANNOTATIONSATTRIBUTE
