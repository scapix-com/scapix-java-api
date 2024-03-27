// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute.h>
#include <scapix/java_api/java/lang/classfile/attribute/RuntimeInvisibleParameterAnnotationsAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundAttribute$BoundRuntimeInvisibleParameterAnnotationsAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute, scapix::java_api::java::lang::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/AttributeMapper.h>
#include <scapix/java_api/java/lang/classfile/ClassReader.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute : public jni::object_base<"jdk/internal/classfile/impl/BoundAttribute$BoundRuntimeInvisibleParameterAnnotationsAttribute",
	jdk::internal::classfile::impl::BoundAttribute,
	java::lang::classfile::attribute::RuntimeInvisibleParameterAnnotationsAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute> new_object(jni::ref<java::lang::classfile::ClassReader> cf, jni::ref<java::lang::classfile::AttributeMapper> mapper, jint pos) { return base_::new_object(cf, mapper, pos); }
	jni::ref<java::util::List> parameterAnnotations() { return call_method<"parameterAnnotations", jni::ref<java::util::List>>(); }

protected:

	BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDRUNTIMEINVISIBLEPARAMETERANNOTATIONSATTRIBUTE
