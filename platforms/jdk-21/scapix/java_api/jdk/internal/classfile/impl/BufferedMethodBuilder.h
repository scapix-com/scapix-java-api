// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/impl/TerminalMethodBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/MethodInfo.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDMETHODBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDMETHODBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BufferedMethodBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BufferedMethodBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BufferedMethodBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::impl::TerminalMethodBuilder, scapix::java_api::jdk::internal::classfile::impl::MethodInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDMETHODBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDMETHODBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDMETHODBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/jdk/internal/classfile/CodeModel.h>
#include <scapix/java_api/jdk/internal/classfile/CodeTransform.h>
#include <scapix/java_api/jdk/internal/classfile/MethodBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/MethodElement.h>
#include <scapix/java_api/jdk/internal/classfile/MethodModel.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BufferedCodeBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/impl/SplitConstantPool.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BufferedMethodBuilder_Model.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BufferedMethodBuilder : public jni::object_base<"jdk/internal/classfile/impl/BufferedMethodBuilder",
	java::lang::Object,
	jdk::internal::classfile::impl::TerminalMethodBuilder,
	jdk::internal::classfile::impl::MethodInfo>
{
public:

	using Model = BufferedMethodBuilder_Model;

	static jni::ref<jdk::internal::classfile::impl::BufferedMethodBuilder> new_object(jni::ref<jdk::internal::classfile::impl::SplitConstantPool> constantPool, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> nameInfo, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> typeInfo, jni::ref<jdk::internal::classfile::MethodModel> original) { return base_::new_object(constantPool, nameInfo, typeInfo, original); }
	jni::ref<jdk::internal::classfile::MethodBuilder> with(jni::ref<jdk::internal::classfile::MethodElement> element) { return call_method<"with", jni::ref<jdk::internal::classfile::MethodBuilder>>(element); }
	jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool() { return call_method<"constantPool", jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder>>(); }
	jni::ref<java::util::Optional> original() { return call_method<"original", jni::ref<java::util::Optional>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> methodName() { return call_method<"methodName", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> methodType() { return call_method<"methodType", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::constant::MethodTypeDesc> methodTypeSymbol() { return call_method<"methodTypeSymbol", jni::ref<java::lang::constant::MethodTypeDesc>>(); }
	jint methodFlags() { return call_method<"methodFlags", jint>(); }
	jint parameterSlot(jint paramNo) { return call_method<"parameterSlot", jint>(paramNo); }
	jni::ref<jdk::internal::classfile::MethodBuilder> withCode(jni::ref<java::util::function::Consumer> handler) { return call_method<"withCode", jni::ref<jdk::internal::classfile::MethodBuilder>>(handler); }
	jni::ref<jdk::internal::classfile::MethodBuilder> transformCode(jni::ref<jdk::internal::classfile::CodeModel> code, jni::ref<jdk::internal::classfile::CodeTransform> transform) { return call_method<"transformCode", jni::ref<jdk::internal::classfile::MethodBuilder>>(code, transform); }
	jni::ref<jdk::internal::classfile::impl::BufferedCodeBuilder> bufferedCodeBuilder(jni::ref<jdk::internal::classfile::CodeModel> original) { return call_method<"bufferedCodeBuilder", jni::ref<jdk::internal::classfile::impl::BufferedCodeBuilder>>(original); }
	jni::ref<jdk::internal::classfile::impl::BufferedMethodBuilder> run(jni::ref<java::util::function::Consumer> handler) { return call_method<"run", jni::ref<jdk::internal::classfile::impl::BufferedMethodBuilder>>(handler); }
	jni::ref<jdk::internal::classfile::MethodModel> toModel() { return call_method<"toModel", jni::ref<jdk::internal::classfile::MethodModel>>(); }

protected:

	BufferedMethodBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDMETHODBUILDER
