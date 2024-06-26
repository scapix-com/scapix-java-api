// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/classfile/TypeAnnotation_TypeParameterTarget.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEPARAMETERTARGETIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEPARAMETERTARGETIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TargetInfoImpl_TypeParameterTargetImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TargetInfoImpl_TypeParameterTargetImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TargetInfoImpl$TypeParameterTargetImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::classfile::TypeAnnotation_TypeParameterTarget>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEPARAMETERTARGETIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEPARAMETERTARGETIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEPARAMETERTARGETIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/TypeAnnotation_TargetType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TargetInfoImpl_TypeParameterTargetImpl : public jni::object_base<"jdk/internal/classfile/impl/TargetInfoImpl$TypeParameterTargetImpl",
	java::lang::Record,
	java::lang::classfile::TypeAnnotation_TypeParameterTarget>
{
public:

	static jni::ref<jdk::internal::classfile::impl::TargetInfoImpl_TypeParameterTargetImpl> new_object(jni::ref<java::lang::classfile::TypeAnnotation_TargetType> targetType, jint typeParameterIndex) { return base_::new_object(targetType, typeParameterIndex); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::classfile::TypeAnnotation_TargetType> targetType() { return call_method<"targetType", jni::ref<java::lang::classfile::TypeAnnotation_TargetType>>(); }
	jint typeParameterIndex() { return call_method<"typeParameterIndex", jint>(); }

protected:

	TargetInfoImpl_TypeParameterTargetImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEPARAMETERTARGETIMPL
