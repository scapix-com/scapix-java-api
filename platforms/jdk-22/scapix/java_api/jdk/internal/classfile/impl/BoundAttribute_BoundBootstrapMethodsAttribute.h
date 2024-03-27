// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute.h>
#include <scapix/java_api/java/lang/classfile/attribute/BootstrapMethodsAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDBOOTSTRAPMETHODSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDBOOTSTRAPMETHODSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundAttribute_BoundBootstrapMethodsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute_BoundBootstrapMethodsAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundAttribute$BoundBootstrapMethodsAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute, scapix::java_api::java::lang::classfile::attribute::BootstrapMethodsAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDBOOTSTRAPMETHODSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDBOOTSTRAPMETHODSATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDBOOTSTRAPMETHODSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/AttributeMapper.h>
#include <scapix/java_api/java/lang/classfile/ClassReader.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundAttribute_BoundBootstrapMethodsAttribute : public jni::object_base<"jdk/internal/classfile/impl/BoundAttribute$BoundBootstrapMethodsAttribute",
	jdk::internal::classfile::impl::BoundAttribute,
	java::lang::classfile::attribute::BootstrapMethodsAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BoundAttribute_BoundBootstrapMethodsAttribute> new_object(jni::ref<java::lang::classfile::ClassReader> reader, jni::ref<java::lang::classfile::AttributeMapper> mapper, jint pos) { return base_::new_object(reader, mapper, pos); }
	jint bootstrapMethodsSize() { return call_method<"bootstrapMethodsSize", jint>(); }
	jni::ref<java::util::List> bootstrapMethods() { return call_method<"bootstrapMethods", jni::ref<java::util::List>>(); }

protected:

	BoundAttribute_BoundBootstrapMethodsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDBOOTSTRAPMETHODSATTRIBUTE