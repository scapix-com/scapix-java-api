// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/MethodBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDMETHODBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDMETHODBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ChainedMethodBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ChainedMethodBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ChainedMethodBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::MethodBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDMETHODBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDMETHODBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDMETHODBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/jdk/internal/classfile/CodeModel.h>
#include <scapix/java_api/jdk/internal/classfile/CodeTransform.h>
#include <scapix/java_api/jdk/internal/classfile/MethodElement.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ChainedMethodBuilder : public jni::object_base<"jdk/internal/classfile/impl/ChainedMethodBuilder",
	java::lang::Object,
	jdk::internal::classfile::MethodBuilder>
{
public:

	static jni::ref<jdk::internal::classfile::impl::ChainedMethodBuilder> new_object(jni::ref<jdk::internal::classfile::MethodBuilder> downstream, jni::ref<java::util::function::Consumer> consumer) { return base_::new_object(downstream, consumer); }
	jni::ref<jdk::internal::classfile::MethodBuilder> with(jni::ref<jdk::internal::classfile::MethodElement> element) { return call_method<"with", jni::ref<jdk::internal::classfile::MethodBuilder>>(element); }
	jni::ref<jdk::internal::classfile::MethodBuilder> withCode(jni::ref<java::util::function::Consumer> handler) { return call_method<"withCode", jni::ref<jdk::internal::classfile::MethodBuilder>>(handler); }
	jni::ref<jdk::internal::classfile::MethodBuilder> transformCode(jni::ref<jdk::internal::classfile::CodeModel> code, jni::ref<jdk::internal::classfile::CodeTransform> transform) { return call_method<"transformCode", jni::ref<jdk::internal::classfile::MethodBuilder>>(code, transform); }
	jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool() { return call_method<"constantPool", jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder>>(); }
	jni::ref<java::util::Optional> original() { return call_method<"original", jni::ref<java::util::Optional>>(); }

protected:

	ChainedMethodBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDMETHODBUILDER
