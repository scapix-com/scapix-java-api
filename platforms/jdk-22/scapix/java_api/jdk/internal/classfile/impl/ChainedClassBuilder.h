// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/ClassBuilder.h>
#include <scapix/java_api/java/util/function/Consumer.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDCLASSBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDCLASSBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ChainedClassBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ChainedClassBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ChainedClassBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::ClassBuilder, scapix::java_api::java::util::function::Consumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDCLASSBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDCLASSBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDCLASSBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/ClassElement.h>
#include <scapix/java_api/java/lang/classfile/FieldModel.h>
#include <scapix/java_api/java/lang/classfile/FieldTransform.h>
#include <scapix/java_api/java/lang/classfile/MethodModel.h>
#include <scapix/java_api/java/lang/classfile/MethodTransform.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantPoolBuilder.h>
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ChainedClassBuilder : public jni::object_base<"jdk/internal/classfile/impl/ChainedClassBuilder",
	java::lang::Object,
	java::lang::classfile::ClassBuilder,
	java::util::function::Consumer>
{
public:

	static jni::ref<jdk::internal::classfile::impl::ChainedClassBuilder> new_object(jni::ref<java::lang::classfile::ClassBuilder> downstream, jni::ref<java::util::function::Consumer> consumer) { return base_::new_object(downstream, consumer); }
	jni::ref<java::lang::classfile::ClassBuilder> with(jni::ref<java::lang::classfile::ClassElement> element) { return call_method<"with", jni::ref<java::lang::classfile::ClassBuilder>>(element); }
	jni::ref<java::util::Optional> original() { return call_method<"original", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::classfile::ClassBuilder> withField(jni::ref<java::lang::classfile::constantpool::Utf8Entry> name, jni::ref<java::lang::classfile::constantpool::Utf8Entry> descriptor, jni::ref<java::util::function::Consumer> handler) { return call_method<"withField", jni::ref<java::lang::classfile::ClassBuilder>>(name, descriptor, handler); }
	jni::ref<java::lang::classfile::ClassBuilder> transformField(jni::ref<java::lang::classfile::FieldModel> field, jni::ref<java::lang::classfile::FieldTransform> transform) { return call_method<"transformField", jni::ref<java::lang::classfile::ClassBuilder>>(field, transform); }
	jni::ref<java::lang::classfile::ClassBuilder> withMethod(jni::ref<java::lang::classfile::constantpool::Utf8Entry> name, jni::ref<java::lang::classfile::constantpool::Utf8Entry> descriptor, jint flags, jni::ref<java::util::function::Consumer> handler) { return call_method<"withMethod", jni::ref<java::lang::classfile::ClassBuilder>>(name, descriptor, flags, handler); }
	jni::ref<java::lang::classfile::ClassBuilder> transformMethod(jni::ref<java::lang::classfile::MethodModel> method, jni::ref<java::lang::classfile::MethodTransform> transform) { return call_method<"transformMethod", jni::ref<java::lang::classfile::ClassBuilder>>(method, transform); }
	jni::ref<java::lang::classfile::constantpool::ConstantPoolBuilder> constantPool() { return call_method<"constantPool", jni::ref<java::lang::classfile::constantpool::ConstantPoolBuilder>>(); }

protected:

	ChainedClassBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CHAINEDCLASSBUILDER
