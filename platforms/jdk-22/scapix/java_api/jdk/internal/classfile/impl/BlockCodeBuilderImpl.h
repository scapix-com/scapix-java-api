// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/NonterminalCodeBuilder.h>
#include <scapix/java_api/java/lang/classfile/CodeBuilder_BlockCodeBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BLOCKCODEBUILDERIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BLOCKCODEBUILDERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BlockCodeBuilderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BlockCodeBuilderImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BlockCodeBuilderImpl";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::NonterminalCodeBuilder, scapix::java_api::java::lang::classfile::CodeBuilder_BlockCodeBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BLOCKCODEBUILDERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BLOCKCODEBUILDERIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BLOCKCODEBUILDERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/CodeBuilder.h>
#include <scapix/java_api/java/lang/classfile/CodeElement.h>
#include <scapix/java_api/java/lang/classfile/Label.h>
#include <scapix/java_api/java/lang/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BlockCodeBuilderImpl : public jni::object_base<"jdk/internal/classfile/impl/BlockCodeBuilderImpl",
	jdk::internal::classfile::impl::NonterminalCodeBuilder,
	java::lang::classfile::CodeBuilder_BlockCodeBuilder>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BlockCodeBuilderImpl> new_object(jni::ref<java::lang::classfile::CodeBuilder> parent, jni::ref<java::lang::classfile::Label> breakLabel) { return base_::new_object(parent, breakLabel); }
	void start() { return call_method<"start", void>(); }
	void end() { return call_method<"end", void>(); }
	jboolean reachable() { return call_method<"reachable", jboolean>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::classfile::CodeBuilder> with(jni::ref<java::lang::classfile::CodeElement> element) { return call_method<"with", jni::ref<java::lang::classfile::CodeBuilder>>(element); }
	jni::ref<java::lang::classfile::Label> startLabel() { return call_method<"startLabel", jni::ref<java::lang::classfile::Label>>(); }
	jni::ref<java::lang::classfile::Label> endLabel() { return call_method<"endLabel", jni::ref<java::lang::classfile::Label>>(); }
	jint allocateLocal(jni::ref<java::lang::classfile::TypeKind> typeKind) { return call_method<"allocateLocal", jint>(typeKind); }
	jni::ref<java::lang::classfile::Label> breakLabel() { return call_method<"breakLabel", jni::ref<java::lang::classfile::Label>>(); }

protected:

	BlockCodeBuilderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BLOCKCODEBUILDERIMPL
