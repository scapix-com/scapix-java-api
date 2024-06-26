// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/UnboundAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/attribute/AnnotationDefaultAttribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDANNOTATIONDEFAULTATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDANNOTATIONDEFAULTATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class UnboundAttribute_UnboundAnnotationDefaultAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute_UnboundAnnotationDefaultAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/UnboundAttribute$UnboundAnnotationDefaultAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::UnboundAttribute, scapix::java_api::jdk::internal::classfile::attribute::AnnotationDefaultAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDANNOTATIONDEFAULTATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDANNOTATIONDEFAULTATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDANNOTATIONDEFAULTATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/AnnotationValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::UnboundAttribute_UnboundAnnotationDefaultAttribute : public jni::object_base<"jdk/internal/classfile/impl/UnboundAttribute$UnboundAnnotationDefaultAttribute",
	jdk::internal::classfile::impl::UnboundAttribute,
	jdk::internal::classfile::attribute::AnnotationDefaultAttribute>
{
public:

	static jni::ref<jdk::internal::classfile::impl::UnboundAttribute_UnboundAnnotationDefaultAttribute> new_object(jni::ref<jdk::internal::classfile::AnnotationValue> annotationDefault) { return base_::new_object(annotationDefault); }
	jni::ref<jdk::internal::classfile::AnnotationValue> defaultValue() { return call_method<"defaultValue", jni::ref<jdk::internal::classfile::AnnotationValue>>(); }

protected:

	UnboundAttribute_UnboundAnnotationDefaultAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_UNBOUNDATTRIBUTE_UNBOUNDANNOTATIONDEFAULTATTRIBUTE
