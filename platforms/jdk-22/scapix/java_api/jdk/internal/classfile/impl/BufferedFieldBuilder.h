// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/impl/TerminalFieldBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BufferedFieldBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BufferedFieldBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BufferedFieldBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::impl::TerminalFieldBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/FieldBuilder.h>
#include <scapix/java_api/java/lang/classfile/FieldElement.h>
#include <scapix/java_api/java/lang/classfile/FieldModel.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantPoolBuilder.h>
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/jdk/internal/classfile/impl/ClassFileImpl.h>
#include <scapix/java_api/jdk/internal/classfile/impl/SplitConstantPool.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BufferedFieldBuilder_Model.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BufferedFieldBuilder : public jni::object_base<"jdk/internal/classfile/impl/BufferedFieldBuilder",
	java::lang::Object,
	jdk::internal::classfile::impl::TerminalFieldBuilder>
{
public:

	using Model = BufferedFieldBuilder_Model;

	static jni::ref<jdk::internal::classfile::impl::BufferedFieldBuilder> new_object(jni::ref<jdk::internal::classfile::impl::SplitConstantPool> constantPool, jni::ref<jdk::internal::classfile::impl::ClassFileImpl> context, jni::ref<java::lang::classfile::constantpool::Utf8Entry> name, jni::ref<java::lang::classfile::constantpool::Utf8Entry> type, jni::ref<java::lang::classfile::FieldModel> original) { return base_::new_object(constantPool, context, name, type, original); }
	jni::ref<java::lang::classfile::constantpool::ConstantPoolBuilder> constantPool() { return call_method<"constantPool", jni::ref<java::lang::classfile::constantpool::ConstantPoolBuilder>>(); }
	jni::ref<java::util::Optional> original() { return call_method<"original", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::classfile::FieldBuilder> with(jni::ref<java::lang::classfile::FieldElement> element) { return call_method<"with", jni::ref<java::lang::classfile::FieldBuilder>>(element); }
	jni::ref<jdk::internal::classfile::impl::BufferedFieldBuilder> run(jni::ref<java::util::function::Consumer> handler) { return call_method<"run", jni::ref<jdk::internal::classfile::impl::BufferedFieldBuilder>>(handler); }
	jni::ref<java::lang::classfile::FieldModel> toModel() { return call_method<"toModel", jni::ref<java::lang::classfile::FieldModel>>(); }

protected:

	BufferedFieldBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFFEREDFIELDBUILDER
