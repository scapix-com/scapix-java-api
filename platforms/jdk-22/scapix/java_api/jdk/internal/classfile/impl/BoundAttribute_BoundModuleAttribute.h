// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute.h>
#include <scapix/java_api/java/lang/classfile/attribute/ModuleAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMODULEATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMODULEATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundAttribute_BoundModuleAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute_BoundModuleAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundAttribute$BoundModuleAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute, scapix::java_api::java::lang::classfile::attribute::ModuleAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMODULEATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMODULEATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMODULEATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/AttributeMapper.h>
#include <scapix/java_api/java/lang/classfile/ClassReader.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ModuleEntry.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundAttribute_BoundModuleAttribute : public jni::object_base<"jdk/internal/classfile/impl/BoundAttribute$BoundModuleAttribute",
	jdk::internal::classfile::impl::BoundAttribute,
	java::lang::classfile::attribute::ModuleAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BoundAttribute_BoundModuleAttribute> new_object(jni::ref<java::lang::classfile::ClassReader> cf, jni::ref<java::lang::classfile::AttributeMapper> mapper, jint pos) { return base_::new_object(cf, mapper, pos); }
	jni::ref<java::lang::classfile::constantpool::ModuleEntry> moduleName() { return call_method<"moduleName", jni::ref<java::lang::classfile::constantpool::ModuleEntry>>(); }
	jint moduleFlagsMask() { return call_method<"moduleFlagsMask", jint>(); }
	jni::ref<java::util::Optional> moduleVersion() { return call_method<"moduleVersion", jni::ref<java::util::Optional>>(); }
	jni::ref<java::util::List> requires_() { return call_method<"requires", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> exports() { return call_method<"exports", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> opens() { return call_method<"opens", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> uses() { return call_method<"uses", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> provides() { return call_method<"provides", jni::ref<java::util::List>>(); }

protected:

	BoundAttribute_BoundModuleAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_BOUNDMODULEATTRIBUTE
