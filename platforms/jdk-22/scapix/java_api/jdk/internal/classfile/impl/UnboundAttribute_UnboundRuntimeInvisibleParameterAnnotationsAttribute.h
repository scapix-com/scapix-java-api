// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute.h>
#include <scapix/java_api/java/lang/classfile/attribute/RuntimeInvisibleParameterAnnotationsAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundRuntimeInvisibleParameterAnnotationsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundRuntimeInvisibleParameterAnnotationsAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundRuntimeInvisibleParameterAnnotationsAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute, scapix::java_api::java::lang::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundRuntimeInvisibleParameterAnnotationsAttribute : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundRuntimeInvisibleParameterAnnotationsAttribute",
	jdk::internal::classfile::impl::UnboundAttribute,
	java::lang::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundRuntimeInvisibleParameterAnnotationsAttribute> new_object(jni::ref<java::util::List> elements) { return base_::new_object(elements); }
	jni::ref<java::util::List> parameterAnnotations() { return call_method<"parameterAnnotations", jni::ref<java::util::List>>(); }

protected:

	UnboundAttribute_UnboundRuntimeInvisibleParameterAnnotationsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE
