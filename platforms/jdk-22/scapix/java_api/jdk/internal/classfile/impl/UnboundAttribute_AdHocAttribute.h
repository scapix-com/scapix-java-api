// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_ADHOCATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_ADHOCATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_AdHocAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_AdHocAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$AdHocAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_ADHOCATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_ADHOCATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_ADHOCATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/AttributeMapper.h>
#include <scapix/java_api/java/lang/classfile/BufWriter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_AdHocAttribute : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$AdHocAttribute",
	jdk::internal::classfile::impl::UnboundAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_AdHocAttribute> new_object(jni::ref<java::lang::classfile::AttributeMapper> mapper) { return base_::new_object(mapper); }
	void writeBody(jni::ref<java::lang::classfile::BufWriter> p1) { return call_method<"writeBody", void>(p1); }
	void writeTo(jni::ref<java::lang::classfile::BufWriter> b) { return call_method<"writeTo", void>(b); }

protected:

	UnboundAttribute_AdHocAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_ADHOCATTRIBUTE
