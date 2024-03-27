// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/reflect/AccessorGenerator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORGENERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::reflect { class MethodAccessorGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::reflect::MethodAccessorGenerator>
{
	static constexpr fixed_string class_name = "jdk/internal/reflect/MethodAccessorGenerator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::reflect::AccessorGenerator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORGENERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/reflect/ConstructorAccessor.h>
#include <scapix/java_api/jdk/internal/reflect/MethodAccessor.h>
#include <scapix/java_api/jdk/internal/reflect/SerializationConstructorAccessorImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::reflect::MethodAccessorGenerator : public jni::object_base<"jdk/internal/reflect/MethodAccessorGenerator",
	jdk::internal::reflect::AccessorGenerator>
{
public:

	jni::ref<jdk::internal::reflect::MethodAccessor> generateMethod(jni::ref<java::lang::Class> declaringClass, jni::ref<java::lang::String> name, jni::ref<jni::array<java::lang::Class>> parameterTypes, jni::ref<java::lang::Class> returnType, jint modifiers) { return call_method<"generateMethod", jni::ref<jdk::internal::reflect::MethodAccessor>>(declaringClass, name, parameterTypes, returnType, modifiers); }
	jni::ref<jdk::internal::reflect::ConstructorAccessor> generateConstructor(jni::ref<java::lang::Class> declaringClass, jni::ref<jni::array<java::lang::Class>> parameterTypes, jint modifiers) { return call_method<"generateConstructor", jni::ref<jdk::internal::reflect::ConstructorAccessor>>(declaringClass, parameterTypes, modifiers); }
	jni::ref<jdk::internal::reflect::SerializationConstructorAccessorImpl> generateSerializationConstructor(jni::ref<java::lang::Class> declaringClass, jni::ref<jni::array<java::lang::Class>> parameterTypes, jint modifiers, jni::ref<java::lang::Class> targetConstructorClass) { return call_method<"generateSerializationConstructor", jni::ref<jdk::internal::reflect::SerializationConstructorAccessorImpl>>(declaringClass, parameterTypes, modifiers, targetConstructorClass); }

protected:

	MethodAccessorGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_REFLECT_METHODACCESSORGENERATOR
