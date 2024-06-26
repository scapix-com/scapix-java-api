// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractElement.h>
#include <scapix/java_api/java/lang/classfile/Attribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BoundAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BoundAttribute>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BoundAttribute";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractElement, scapix::java_api::java::lang::classfile::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/AttributeMapper.h>
#include <scapix/java_api/java/lang/classfile/AttributedElement.h>
#include <scapix/java_api/java/lang/classfile/BufWriter.h>
#include <scapix/java_api/java/lang/classfile/ClassReader.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantPool.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectClassBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectFieldBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectMethodBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundUnknownAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundCodeAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundPermittedSubclassesAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRuntimeVisibleAnnotationsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRuntimeInvisibleAnnotationsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRuntimeVisibleParameterAnnotationsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRuntimeInvisibleTypeAnnotationsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRuntimeVisibleTypeAnnotationsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundAnnotationDefaultAttr.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundEnclosingMethodAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundInnerClassesAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundBootstrapMethodsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundNestMembersAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundModulePackagesAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundModuleAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundExceptionsAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundModuleResolutionAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundSourceIDAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundCompilationIDAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundModuleTargetAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundConstantValueAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundSourceDebugExtensionAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundNestHostAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundModuleMainClassAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundSourceFileAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundSignatureAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundDeprecatedAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundRecordAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundModuleHashesAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundMethodParametersAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundLocalVariableTypeTableAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundLocalVariableTableAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundCharacterRangeTableAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundLineNumberTableAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundSyntheticAttribute.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BoundAttribute_BoundStackMapTableAttribute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BoundAttribute : public jni::object_base<"jdk/internal/classfile/impl/BoundAttribute",
	jdk::internal::classfile::impl::AbstractElement,
	java::lang::classfile::Attribute>
{
public:

	using BoundUnknownAttribute = BoundAttribute_BoundUnknownAttribute;
	using BoundCodeAttribute = BoundAttribute_BoundCodeAttribute;
	using BoundPermittedSubclassesAttribute = BoundAttribute_BoundPermittedSubclassesAttribute;
	using BoundRuntimeVisibleAnnotationsAttribute = BoundAttribute_BoundRuntimeVisibleAnnotationsAttribute;
	using BoundRuntimeInvisibleAnnotationsAttribute = BoundAttribute_BoundRuntimeInvisibleAnnotationsAttribute;
	using BoundRuntimeInvisibleParameterAnnotationsAttribute = BoundAttribute_BoundRuntimeInvisibleParameterAnnotationsAttribute;
	using BoundRuntimeVisibleParameterAnnotationsAttribute = BoundAttribute_BoundRuntimeVisibleParameterAnnotationsAttribute;
	using BoundRuntimeInvisibleTypeAnnotationsAttribute = BoundAttribute_BoundRuntimeInvisibleTypeAnnotationsAttribute;
	using BoundRuntimeVisibleTypeAnnotationsAttribute = BoundAttribute_BoundRuntimeVisibleTypeAnnotationsAttribute;
	using BoundAnnotationDefaultAttr = BoundAttribute_BoundAnnotationDefaultAttr;
	using BoundEnclosingMethodAttribute = BoundAttribute_BoundEnclosingMethodAttribute;
	using BoundInnerClassesAttribute = BoundAttribute_BoundInnerClassesAttribute;
	using BoundBootstrapMethodsAttribute = BoundAttribute_BoundBootstrapMethodsAttribute;
	using BoundNestMembersAttribute = BoundAttribute_BoundNestMembersAttribute;
	using BoundModulePackagesAttribute = BoundAttribute_BoundModulePackagesAttribute;
	using BoundModuleAttribute = BoundAttribute_BoundModuleAttribute;
	using BoundExceptionsAttribute = BoundAttribute_BoundExceptionsAttribute;
	using BoundModuleResolutionAttribute = BoundAttribute_BoundModuleResolutionAttribute;
	using BoundSourceIDAttribute = BoundAttribute_BoundSourceIDAttribute;
	using BoundCompilationIDAttribute = BoundAttribute_BoundCompilationIDAttribute;
	using BoundModuleTargetAttribute = BoundAttribute_BoundModuleTargetAttribute;
	using BoundConstantValueAttribute = BoundAttribute_BoundConstantValueAttribute;
	using BoundSourceDebugExtensionAttribute = BoundAttribute_BoundSourceDebugExtensionAttribute;
	using BoundNestHostAttribute = BoundAttribute_BoundNestHostAttribute;
	using BoundModuleMainClassAttribute = BoundAttribute_BoundModuleMainClassAttribute;
	using BoundSourceFileAttribute = BoundAttribute_BoundSourceFileAttribute;
	using BoundSignatureAttribute = BoundAttribute_BoundSignatureAttribute;
	using BoundDeprecatedAttribute = BoundAttribute_BoundDeprecatedAttribute;
	using BoundRecordAttribute = BoundAttribute_BoundRecordAttribute;
	using BoundModuleHashesAttribute = BoundAttribute_BoundModuleHashesAttribute;
	using BoundMethodParametersAttribute = BoundAttribute_BoundMethodParametersAttribute;
	using BoundLocalVariableTypeTableAttribute = BoundAttribute_BoundLocalVariableTypeTableAttribute;
	using BoundLocalVariableTableAttribute = BoundAttribute_BoundLocalVariableTableAttribute;
	using BoundCharacterRangeTableAttribute = BoundAttribute_BoundCharacterRangeTableAttribute;
	using BoundLineNumberTableAttribute = BoundAttribute_BoundLineNumberTableAttribute;
	using BoundSyntheticAttribute = BoundAttribute_BoundSyntheticAttribute;
	using BoundStackMapTableAttribute = BoundAttribute_BoundStackMapTableAttribute;

	jint payloadLen() { return call_method<"payloadLen", jint>(); }
	jni::ref<java::lang::String> attributeName() { return call_method<"attributeName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::classfile::AttributeMapper> attributeMapper() { return call_method<"attributeMapper", jni::ref<java::lang::classfile::AttributeMapper>>(); }
	jni::ref<jni::array<jbyte>> contents() { return call_method<"contents", jni::ref<jni::array<jbyte>>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectClassBuilder> builder) { return call_method<"writeTo", void>(builder); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> builder) { return call_method<"writeTo", void>(builder); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectMethodBuilder> builder) { return call_method<"writeTo", void>(builder); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectFieldBuilder> builder) { return call_method<"writeTo", void>(builder); }
	void writeTo(jni::ref<java::lang::classfile::BufWriter> buf) { return call_method<"writeTo", void>(buf); }
	jni::ref<java::lang::classfile::constantpool::ConstantPool> constantPool() { return call_method<"constantPool", jni::ref<java::lang::classfile::constantpool::ConstantPool>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::util::List> readAttributes(jni::ref<java::lang::classfile::AttributedElement> enclosing, jni::ref<java::lang::classfile::ClassReader> reader, jint pos, jni::ref<java::util::function::Function> customAttributes) { return call_static_method<"readAttributes", jni::ref<java::util::List>>(enclosing, reader, pos, customAttributes); }

protected:

	BoundAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BOUNDATTRIBUTE
