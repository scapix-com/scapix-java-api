// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute.h>
#include <scapix/java_api/java/lang/classfile/attribute/ModulePackagesAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEPACKAGESATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEPACKAGESATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundModulePackagesAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundModulePackagesAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundModulePackagesAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute, scapix::java_api::java::lang::classfile::attribute::ModulePackagesAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEPACKAGESATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEPACKAGESATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEPACKAGESATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundModulePackagesAttribute : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundModulePackagesAttribute",
	jdk::internal::classfile::impl::UnboundAttribute,
	java::lang::classfile::attribute::ModulePackagesAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundModulePackagesAttribute> new_object(jni::ref<java::util::Collection> packages) { return base_::new_object(packages); }
	jni::ref<java::util::List> packages() { return call_method<"packages", jni::ref<java::util::List>>(); }

protected:

	UnboundAttribute_UnboundModulePackagesAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDMODULEPACKAGESATTRIBUTE
