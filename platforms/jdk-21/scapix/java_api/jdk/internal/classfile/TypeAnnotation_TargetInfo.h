// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETINFO_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class TypeAnnotation_TargetInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::TypeAnnotation_TargetInfo>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/TypeAnnotation$TargetInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETINFO)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_CatchTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_EmptyTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_FormalParameterTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_LocalVarTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_OffsetTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_SupertypeTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_TargetType.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_ThrowsTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_TypeArgumentTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_TypeParameterBoundTarget.h>
#include <scapix/java_api/jdk/internal/classfile/TypeAnnotation_TypeParameterTarget.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::TypeAnnotation_TargetInfo : public jni::object_base<"jdk/internal/classfile/TypeAnnotation$TargetInfo",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType() { return call_method<"targetType", jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType>>(); }
	jint size() { return call_method<"size", jint>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterTarget> ofTypeParameter(jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType, jint typeParameterIndex) { return call_static_method<"ofTypeParameter", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterTarget>>(targetType, typeParameterIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterTarget> ofClassTypeParameter(jint typeParameterIndex) { return call_static_method<"ofClassTypeParameter", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterTarget>>(typeParameterIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterTarget> ofMethodTypeParameter(jint typeParameterIndex) { return call_static_method<"ofMethodTypeParameter", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterTarget>>(typeParameterIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_SupertypeTarget> ofClassExtends(jint supertypeIndex) { return call_static_method<"ofClassExtends", jni::ref<jdk::internal::classfile::TypeAnnotation_SupertypeTarget>>(supertypeIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterBoundTarget> ofTypeParameterBound(jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType, jint typeParameterIndex, jint boundIndex) { return call_static_method<"ofTypeParameterBound", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterBoundTarget>>(targetType, typeParameterIndex, boundIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterBoundTarget> ofClassTypeParameterBound(jint typeParameterIndex, jint boundIndex) { return call_static_method<"ofClassTypeParameterBound", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterBoundTarget>>(typeParameterIndex, boundIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterBoundTarget> ofMethodTypeParameterBound(jint typeParameterIndex, jint boundIndex) { return call_static_method<"ofMethodTypeParameterBound", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeParameterBoundTarget>>(typeParameterIndex, boundIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget> of(jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType) { return call_static_method<"of", jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget>>(targetType); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget> ofField() { return call_static_method<"ofField", jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget> ofMethodReturn() { return call_static_method<"ofMethodReturn", jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget> ofMethodReceiver() { return call_static_method<"ofMethodReceiver", jni::ref<jdk::internal::classfile::TypeAnnotation_EmptyTarget>>(); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_FormalParameterTarget> ofMethodFormalParameter(jint formalParameterIndex) { return call_static_method<"ofMethodFormalParameter", jni::ref<jdk::internal::classfile::TypeAnnotation_FormalParameterTarget>>(formalParameterIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_ThrowsTarget> ofThrows(jint throwsTargetIndex) { return call_static_method<"ofThrows", jni::ref<jdk::internal::classfile::TypeAnnotation_ThrowsTarget>>(throwsTargetIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_LocalVarTarget> ofVariable(jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType, jni::ref<java::util::List> table) { return call_static_method<"ofVariable", jni::ref<jdk::internal::classfile::TypeAnnotation_LocalVarTarget>>(targetType, table); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_LocalVarTarget> ofLocalVariable(jni::ref<java::util::List> table) { return call_static_method<"ofLocalVariable", jni::ref<jdk::internal::classfile::TypeAnnotation_LocalVarTarget>>(table); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_LocalVarTarget> ofResourceVariable(jni::ref<java::util::List> table) { return call_static_method<"ofResourceVariable", jni::ref<jdk::internal::classfile::TypeAnnotation_LocalVarTarget>>(table); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_CatchTarget> ofExceptionParameter(jint exceptionTableIndex) { return call_static_method<"ofExceptionParameter", jni::ref<jdk::internal::classfile::TypeAnnotation_CatchTarget>>(exceptionTableIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget> ofOffset(jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType, jni::ref<jdk::internal::classfile::Label> target) { return call_static_method<"ofOffset", jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget>>(targetType, target); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget> ofInstanceofExpr(jni::ref<jdk::internal::classfile::Label> target) { return call_static_method<"ofInstanceofExpr", jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget>>(target); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget> ofNewExpr(jni::ref<jdk::internal::classfile::Label> target) { return call_static_method<"ofNewExpr", jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget>>(target); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget> ofConstructorReference(jni::ref<jdk::internal::classfile::Label> target) { return call_static_method<"ofConstructorReference", jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget>>(target); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget> ofMethodReference(jni::ref<jdk::internal::classfile::Label> target) { return call_static_method<"ofMethodReference", jni::ref<jdk::internal::classfile::TypeAnnotation_OffsetTarget>>(target); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget> ofTypeArgument(jni::ref<jdk::internal::classfile::TypeAnnotation_TargetType> targetType, jni::ref<jdk::internal::classfile::Label> target, jint typeArgumentIndex) { return call_static_method<"ofTypeArgument", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget>>(targetType, target, typeArgumentIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget> ofCastExpr(jni::ref<jdk::internal::classfile::Label> target, jint typeArgumentIndex) { return call_static_method<"ofCastExpr", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget>>(target, typeArgumentIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget> ofConstructorInvocationTypeArgument(jni::ref<jdk::internal::classfile::Label> target, jint typeArgumentIndex) { return call_static_method<"ofConstructorInvocationTypeArgument", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget>>(target, typeArgumentIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget> ofMethodInvocationTypeArgument(jni::ref<jdk::internal::classfile::Label> target, jint typeArgumentIndex) { return call_static_method<"ofMethodInvocationTypeArgument", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget>>(target, typeArgumentIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget> ofConstructorReferenceTypeArgument(jni::ref<jdk::internal::classfile::Label> target, jint typeArgumentIndex) { return call_static_method<"ofConstructorReferenceTypeArgument", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget>>(target, typeArgumentIndex); }
	static jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget> ofMethodReferenceTypeArgument(jni::ref<jdk::internal::classfile::Label> target, jint typeArgumentIndex) { return call_static_method<"ofMethodReferenceTypeArgument", jni::ref<jdk::internal::classfile::TypeAnnotation_TypeArgumentTarget>>(target, typeArgumentIndex); }

protected:

	TypeAnnotation_TargetInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_TYPEANNOTATION_TARGETINFO
