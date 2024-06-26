// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/NestHostAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDNESTHOSTATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDNESTHOSTATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundAttribute_BoundNestHostAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute_BoundNestHostAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundAttribute$BoundNestHostAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute, scapix::java_api::jdk::internal::classfile::attribute::NestHostAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDNESTHOSTATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDNESTHOSTATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDNESTHOSTATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/AttributeMapper.h>
#include <scapix/java_api/jdk/internal/classfile/ClassReader.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundAttribute_BoundNestHostAttribute : public jni::object_base<"jdk/internal/classfile/impl/BoundAttribute$BoundNestHostAttribute",
	jdk::internal::classfile::impl::BoundAttribute,
	jdk::internal::classfile::attribute::NestHostAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BoundAttribute_BoundNestHostAttribute> new_object(jni::ref<jdk::internal::classfile::ClassReader> cf, jni::ref<jdk::internal::classfile::AttributeMapper> mapper, jint pos) { return base_::new_object(cf, mapper, pos); }
	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> nestHost() { return call_method<"nestHost", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(); }

protected:

	BoundAttribute_BoundNestHostAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDNESTHOSTATTRIBUTE
