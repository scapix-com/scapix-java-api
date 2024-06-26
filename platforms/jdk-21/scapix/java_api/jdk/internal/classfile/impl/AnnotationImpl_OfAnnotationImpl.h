// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/AnnotationValue_OfAnnotation.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFANNOTATIONIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFANNOTATIONIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AnnotationImpl_OfAnnotationImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AnnotationImpl_OfAnnotationImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AnnotationImpl$OfAnnotationImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::AnnotationValue_OfAnnotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFANNOTATIONIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFANNOTATIONIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFANNOTATIONIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/Annotation.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AnnotationImpl_OfAnnotationImpl : public jni::object_base<"jdk/internal/classfile/impl/AnnotationImpl$OfAnnotationImpl",
	java::lang::Record,
	jdk::internal::classfile::AnnotationValue_OfAnnotation>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AnnotationImpl_OfAnnotationImpl> new_object(jni::ref<jdk::internal::classfile::Annotation> annotation) { return base_::new_object(annotation); }
	jchar tag() { return call_method<"tag", jchar>(); }
	void writeTo(jni::ref<jdk::internal::classfile::BufWriter> buf) { return call_method<"writeTo", void>(buf); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::classfile::Annotation> annotation() { return call_method<"annotation", jni::ref<jdk::internal::classfile::Annotation>>(); }

protected:

	AnnotationImpl_OfAnnotationImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFANNOTATIONIMPL
