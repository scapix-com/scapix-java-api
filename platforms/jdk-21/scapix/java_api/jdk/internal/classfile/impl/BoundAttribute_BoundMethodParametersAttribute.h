// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/MethodParametersAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMETHODPARAMETERSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMETHODPARAMETERSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundAttribute_BoundMethodParametersAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute_BoundMethodParametersAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundAttribute$BoundMethodParametersAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute, scapix::java_api::jdk::internal::classfile::attribute::MethodParametersAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMETHODPARAMETERSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMETHODPARAMETERSATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMETHODPARAMETERSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/AttributeMapper.h>
#include <scapix/java_api/jdk/internal/classfile/ClassReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundAttribute_BoundMethodParametersAttribute : public jni::object_base<"jdk/internal/classfile/impl/BoundAttribute$BoundMethodParametersAttribute",
	jdk::internal::classfile::impl::BoundAttribute,
	jdk::internal::classfile::attribute::MethodParametersAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BoundAttribute_BoundMethodParametersAttribute> new_object(jni::ref<jdk::internal::classfile::ClassReader> cf, jni::ref<jdk::internal::classfile::AttributeMapper> mapper, jint pos) { return base_::new_object(cf, mapper, pos); }
	jni::ref<java::util::List> parameters() { return call_method<"parameters", jni::ref<java::util::List>>(); }

protected:

	BoundAttribute_BoundMethodParametersAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMETHODPARAMETERSATTRIBUTE