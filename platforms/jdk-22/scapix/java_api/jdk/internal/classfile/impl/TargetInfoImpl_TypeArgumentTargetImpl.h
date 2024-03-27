// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>
#include <scapix/java_api/java/lang/classfile/TypeAnnotation_TypeArgumentTarget.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEARGUMENTTARGETIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEARGUMENTTARGETIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TargetInfoImpl_TypeArgumentTargetImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TargetInfoImpl_TypeArgumentTargetImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TargetInfoImpl$TypeArgumentTargetImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record, scapix::java_api::java::lang::classfile::TypeAnnotation_TypeArgumentTarget>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEARGUMENTTARGETIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEARGUMENTTARGETIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEARGUMENTTARGETIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Label.h>
#include <scapix/java_api/java/lang/classfile/TypeAnnotation_TargetType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TargetInfoImpl_TypeArgumentTargetImpl : public jni::object_base<"jdk/internal/classfile/impl/TargetInfoImpl$TypeArgumentTargetImpl",
	java::lang::Record,
	java::lang::classfile::TypeAnnotation_TypeArgumentTarget>
{
public:

	static jni::ref<jdk::internal::classfile::impl::TargetInfoImpl_TypeArgumentTargetImpl> new_object(jni::ref<java::lang::classfile::TypeAnnotation_TargetType> targetType, jni::ref<java::lang::classfile::Label> target, jint typeArgumentIndex) { return base_::new_object(targetType, target, typeArgumentIndex); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::classfile::TypeAnnotation_TargetType> targetType() { return call_method<"targetType", jni::ref<java::lang::classfile::TypeAnnotation_TargetType>>(); }
	jni::ref<java::lang::classfile::Label> target() { return call_method<"target", jni::ref<java::lang::classfile::Label>>(); }
	jint typeArgumentIndex() { return call_method<"typeArgumentIndex", jint>(); }

protected:

	TargetInfoImpl_TypeArgumentTargetImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TARGETINFOIMPL_TYPEARGUMENTTARGETIMPL