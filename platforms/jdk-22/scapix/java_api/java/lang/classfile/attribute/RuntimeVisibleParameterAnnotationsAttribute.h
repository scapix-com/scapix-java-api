// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>
#include <scapix/java_api/java/lang/classfile/MethodElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::attribute { class RuntimeVisibleParameterAnnotationsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::attribute::RuntimeVisibleParameterAnnotationsAttribute>
{
	static constexpr fixed_string class_name = "java/lang/classfile/attribute/RuntimeVisibleParameterAnnotationsAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Attribute, scapix::java_api::java::lang::classfile::MethodElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEVISIBLEPARAMETERANNOTATIONSATTRIBUTE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEVISIBLEPARAMETERANNOTATIONSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::attribute::RuntimeVisibleParameterAnnotationsAttribute : public jni::object_base<"java/lang/classfile/attribute/RuntimeVisibleParameterAnnotationsAttribute",
	java::lang::Object,
	java::lang::classfile::Attribute,
	java::lang::classfile::MethodElement>
{
public:

	jni::ref<java::util::List> parameterAnnotations() { return call_method<"parameterAnnotations", jni::ref<java::util::List>>(); }
	static jni::ref<java::lang::classfile::attribute::RuntimeVisibleParameterAnnotationsAttribute> of(jni::ref<java::util::List> parameterAnnotations) { return call_static_method<"of", jni::ref<java::lang::classfile::attribute::RuntimeVisibleParameterAnnotationsAttribute>>(parameterAnnotations); }

protected:

	RuntimeVisibleParameterAnnotationsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_ATTRIBUTE_RUNTIMEVISIBLEPARAMETERANNOTATIONSATTRIBUTE