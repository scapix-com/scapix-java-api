// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/impl/AnnotationImpl_OfConstantImpl.h>
#include <scapix/java_api/jdk/internal/classfile/AnnotationValue_OfFloat.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFFLOATIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFFLOATIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AnnotationImpl_OfFloatImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AnnotationImpl_OfFloatImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AnnotationImpl$OfFloatImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::impl::AnnotationImpl_OfConstantImpl, scapix::java_api::jdk::internal::classfile::AnnotationValue_OfFloat>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFFLOATIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFFLOATIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFFLOATIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/FloatEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AnnotationImpl_OfFloatImpl : public jni::object_base<"jdk/internal/classfile/impl/AnnotationImpl$OfFloatImpl",
	java::lang::Record,
	jdk::internal::classfile::impl::AnnotationImpl_OfConstantImpl,
	jdk::internal::classfile::AnnotationValue_OfFloat>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AnnotationImpl_OfFloatImpl> new_object(jni::ref<jdk::internal::classfile::constantpool::FloatEntry> constant) { return base_::new_object(constant); }
	jchar tag() { return call_method<"tag", jchar>(); }
	jfloat floatValue() { return call_method<"floatValue", jfloat>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::classfile::constantpool::FloatEntry> constant() { return call_method<"constant", jni::ref<jdk::internal::classfile::constantpool::FloatEntry>>(); }

protected:

	AnnotationImpl_OfFloatImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFFLOATIMPL
