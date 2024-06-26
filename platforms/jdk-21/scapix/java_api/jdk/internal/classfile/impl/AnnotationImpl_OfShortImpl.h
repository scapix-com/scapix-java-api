// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/impl/AnnotationImpl_OfConstantImpl.h>
#include <scapix/java_api/jdk/internal/classfile/AnnotationValue_OfShort.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFSHORTIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFSHORTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AnnotationImpl_OfShortImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AnnotationImpl_OfShortImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AnnotationImpl$OfShortImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::impl::AnnotationImpl_OfConstantImpl, scapix::java_api::jdk::internal::classfile::AnnotationValue_OfShort>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFSHORTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFSHORTIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFSHORTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/IntegerEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AnnotationImpl_OfShortImpl : public jni::object_base<"jdk/internal/classfile/impl/AnnotationImpl$OfShortImpl",
	java::lang::Record,
	jdk::internal::classfile::impl::AnnotationImpl_OfConstantImpl,
	jdk::internal::classfile::AnnotationValue_OfShort>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AnnotationImpl_OfShortImpl> new_object(jni::ref<jdk::internal::classfile::constantpool::IntegerEntry> constant) { return base_::new_object(constant); }
	jchar tag() { return call_method<"tag", jchar>(); }
	jshort shortValue() { return call_method<"shortValue", jshort>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::classfile::constantpool::IntegerEntry> constant() { return call_method<"constant", jni::ref<jdk::internal::classfile::constantpool::IntegerEntry>>(); }

protected:

	AnnotationImpl_OfShortImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ANNOTATIONIMPL_OFSHORTIMPL
