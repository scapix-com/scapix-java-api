// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractDirectBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/ClassBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCLASSBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCLASSBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class DirectClassBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::DirectClassBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/DirectClassBuilder";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractDirectBuilder, scapix::java_api::jdk::internal::classfile::ClassBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCLASSBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCLASSBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCLASSBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/jdk/internal/classfile/ClassElement.h>
#include <scapix/java_api/jdk/internal/classfile/FieldModel.h>
#include <scapix/java_api/jdk/internal/classfile/FieldTransform.h>
#include <scapix/java_api/jdk/internal/classfile/MethodModel.h>
#include <scapix/java_api/jdk/internal/classfile/MethodTransform.h>
#include <scapix/java_api/jdk/internal/classfile/WritableElement.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/SplitConstantPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::DirectClassBuilder : public jni::object_base<"jdk/internal/classfile/impl/DirectClassBuilder",
	jdk::internal::classfile::impl::AbstractDirectBuilder,
	jdk::internal::classfile::ClassBuilder>
{
public:

	static jni::ref<jdk::internal::classfile::impl::DirectClassBuilder> new_object(jni::ref<jdk::internal::classfile::impl::SplitConstantPool> constantPool, jni::ref<jdk::internal::classfile::constantpool::ClassEntry> thisClass) { return base_::new_object(constantPool, thisClass); }
	jni::ref<jdk::internal::classfile::ClassBuilder> with(jni::ref<jdk::internal::classfile::ClassElement> element) { return call_method<"with", jni::ref<jdk::internal::classfile::ClassBuilder>>(element); }
	jni::ref<jdk::internal::classfile::ClassBuilder> withField(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor, jni::ref<java::util::function::Consumer> handler) { return call_method<"withField", jni::ref<jdk::internal::classfile::ClassBuilder>>(name, descriptor, handler); }
	jni::ref<jdk::internal::classfile::ClassBuilder> transformField(jni::ref<jdk::internal::classfile::FieldModel> field, jni::ref<jdk::internal::classfile::FieldTransform> transform) { return call_method<"transformField", jni::ref<jdk::internal::classfile::ClassBuilder>>(field, transform); }
	jni::ref<jdk::internal::classfile::ClassBuilder> withMethod(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor, jint flags, jni::ref<java::util::function::Consumer> handler) { return call_method<"withMethod", jni::ref<jdk::internal::classfile::ClassBuilder>>(name, descriptor, flags, handler); }
	jni::ref<jdk::internal::classfile::ClassBuilder> transformMethod(jni::ref<jdk::internal::classfile::MethodModel> method, jni::ref<jdk::internal::classfile::MethodTransform> transform) { return call_method<"transformMethod", jni::ref<jdk::internal::classfile::ClassBuilder>>(method, transform); }
	jni::ref<jdk::internal::classfile::ClassBuilder> withField(jni::ref<jdk::internal::classfile::WritableElement> field) { return call_method<"withField", jni::ref<jdk::internal::classfile::ClassBuilder>>(field); }
	jni::ref<jdk::internal::classfile::ClassBuilder> withMethod(jni::ref<jdk::internal::classfile::WritableElement> method) { return call_method<"withMethod", jni::ref<jdk::internal::classfile::ClassBuilder>>(method); }
	jni::ref<jni::array<jbyte>> build() { return call_method<"build", jni::ref<jni::array<jbyte>>>(); }

protected:

	DirectClassBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_DIRECTCLASSBUILDER