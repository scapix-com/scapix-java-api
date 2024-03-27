// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/ExceptionsAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDEXCEPTIONSATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDEXCEPTIONSATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundExceptionsAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundExceptionsAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundExceptionsAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute, scapix::java_api::jdk::internal::classfile::attribute::ExceptionsAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDEXCEPTIONSATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDEXCEPTIONSATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDEXCEPTIONSATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundExceptionsAttribute : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundExceptionsAttribute",
	jdk::internal::classfile::impl::UnboundAttribute,
	jdk::internal::classfile::attribute::ExceptionsAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundExceptionsAttribute> new_object(jni::ref<java::util::List> exceptions) { return base_::new_object(exceptions); }
	jni::ref<java::util::List> exceptions() { return call_method<"exceptions", jni::ref<java::util::List>>(); }

protected:

	UnboundAttribute_UnboundExceptionsAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDEXCEPTIONSATTRIBUTE
