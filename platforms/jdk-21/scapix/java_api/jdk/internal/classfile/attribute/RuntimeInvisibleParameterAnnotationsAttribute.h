// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Attribute.h>
#include <scapix/java_api/jdk/internal/classfile/MethodElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::attribute { class RuntimeInvisibleParameterAnnotationsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/attribute/RuntimeInvisibleParameterAnnotationsAttribute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Attribute, scapix::java_api::jdk::internal::classfile::MethodElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute : public jni::object_base<"jdk/internal/classfile/attribute/RuntimeInvisibleParameterAnnotationsAttribute",
	java::lang::Object,
	jdk::internal::classfile::Attribute,
	jdk::internal::classfile::MethodElement>
{
public:

	jni::ref<java::util::List> parameterAnnotations() { return call_method<"parameterAnnotations", jni::ref<java::util::List>>(); }
	static jni::ref<jdk::internal::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute> of(jni::ref<java::util::List> parameterAnnotations) { return call_static_method<"of", jni::ref<jdk::internal::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute>>(parameterAnnotations); }

protected:

	RuntimeInvisibleParameterAnnotationsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_ATTRIBUTE_RUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE
