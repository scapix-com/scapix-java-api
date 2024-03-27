// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/jdk/internal/classfile/impl/TransformImpl_UnresolvedMethodTransform.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CHAINEDMETHODTRANSFORM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CHAINEDMETHODTRANSFORM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TransformImpl_ChainedMethodTransform; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TransformImpl_ChainedMethodTransform>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TransformImpl$ChainedMethodTransform";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::jdk::internal::classfile::impl::TransformImpl_UnresolvedMethodTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CHAINEDMETHODTRANSFORM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CHAINEDMETHODTRANSFORM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CHAINEDMETHODTRANSFORM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/ClassFileTransform_ResolvedTransform.h>
#include <scapix/java_api/java/lang/classfile/MethodBuilder.h>
#include <scapix/java_api/java/lang/classfile/MethodTransform.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TransformImpl_ChainedMethodTransform : public jni::object_base<"jdk/internal/classfile/impl/TransformImpl$ChainedMethodTransform",
	java::lang::Record,
	jdk::internal::classfile::impl::TransformImpl_UnresolvedMethodTransform>
{
public:

	static jni::ref<jdk::internal::classfile::impl::TransformImpl_ChainedMethodTransform> new_object(jni::ref<java::lang::classfile::MethodTransform> t, jni::ref<java::lang::classfile::MethodTransform> next) { return base_::new_object(t, next); }
	jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform> resolve(jni::ref<java::lang::classfile::MethodBuilder> builder) { return call_method<"resolve", jni::ref<java::lang::classfile::ClassFileTransform_ResolvedTransform>>(builder); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::classfile::MethodTransform> t() { return call_method<"t", jni::ref<java::lang::classfile::MethodTransform>>(); }
	jni::ref<java::lang::classfile::MethodTransform> next() { return call_method<"next", jni::ref<java::lang::classfile::MethodTransform>>(); }

protected:

	TransformImpl_ChainedMethodTransform(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TRANSFORMIMPL_CHAINEDMETHODTRANSFORM