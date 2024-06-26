// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/ClassfileBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_METHODBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_METHODBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class MethodBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::MethodBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/MethodBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::ClassfileBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_METHODBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_METHODBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_METHODBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/reflect/AccessFlag.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/jdk/internal/classfile/CodeModel.h>
#include <scapix/java_api/jdk/internal/classfile/CodeTransform.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::MethodBuilder : public jni::object_base<"jdk/internal/classfile/MethodBuilder",
	java::lang::Object,
	jdk::internal::classfile::ClassfileBuilder>
{
public:

	jni::ref<java::util::Optional> original() { return call_method<"original", jni::ref<java::util::Optional>>(); }
	jni::ref<jdk::internal::classfile::MethodBuilder> withFlags(jint flags) { return call_method<"withFlags", jni::ref<jdk::internal::classfile::MethodBuilder>>(flags); }
	jni::ref<jdk::internal::classfile::MethodBuilder> withFlags(jni::ref<jni::array<java::lang::reflect::AccessFlag>> flags) { return call_method<"withFlags", jni::ref<jdk::internal::classfile::MethodBuilder>>(flags); }
	jni::ref<jdk::internal::classfile::MethodBuilder> withCode(jni::ref<java::util::function::Consumer> p1) { return call_method<"withCode", jni::ref<jdk::internal::classfile::MethodBuilder>>(p1); }
	jni::ref<jdk::internal::classfile::MethodBuilder> transformCode(jni::ref<jdk::internal::classfile::CodeModel> p1, jni::ref<jdk::internal::classfile::CodeTransform> p2) { return call_method<"transformCode", jni::ref<jdk::internal::classfile::MethodBuilder>>(p1, p2); }

protected:

	MethodBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_METHODBUILDER
