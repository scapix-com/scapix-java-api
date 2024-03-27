// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/impl/TransformImpl_UnresolvedClassTransform.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CLASSMETHODTRANSFORM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CLASSMETHODTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TransformImpl_ClassMethodTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TransformImpl_ClassMethodTransform>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TransformImpl$ClassMethodTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::impl::TransformImpl_UnresolvedClassTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CLASSMETHODTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CLASSMETHODTRANSFORM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CLASSMETHODTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/function/Predicate.h>
#include <scapix/java_api/jdk/internal/classfile/ClassBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/ClassTransform.h>
#include <scapix/java_api/jdk/internal/classfile/ClassfileTransform_ResolvedTransform.h>
#include <scapix/java_api/jdk/internal/classfile/MethodTransform.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TransformImpl_ClassMethodTransform : public jni::object_base<"jdk/internal/classfile/impl/TransformImpl$ClassMethodTransform",
	java::lang::Record,
	jdk::internal::classfile::impl::TransformImpl_UnresolvedClassTransform>
{
public:

	static jni::ref<jdk::internal::classfile::impl::TransformImpl_ClassMethodTransform> new_object(jni::ref<jdk::internal::classfile::MethodTransform> transform, jni::ref<java::util::function::Predicate> filter) { return base_::new_object(transform, filter); }
	jni::ref<jdk::internal::classfile::ClassfileTransform_ResolvedTransform> resolve(jni::ref<jdk::internal::classfile::ClassBuilder> builder) { return call_method<"resolve", jni::ref<jdk::internal::classfile::ClassfileTransform_ResolvedTransform>>(builder); }
	jni::ref<jdk::internal::classfile::ClassTransform> andThen(jni::ref<jdk::internal::classfile::ClassTransform> next) { return call_method<"andThen", jni::ref<jdk::internal::classfile::ClassTransform>>(next); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jdk::internal::classfile::MethodTransform> transform() { return call_method<"transform", jni::ref<jdk::internal::classfile::MethodTransform>>(); }
	jni::ref<java::util::function::Predicate> filter() { return call_method<"filter", jni::ref<java::util::function::Predicate>>(); }

protected:

	TransformImpl_ClassMethodTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CLASSMETHODTRANSFORM
