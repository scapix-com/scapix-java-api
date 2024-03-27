// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/reflect/AccessibleObject.h>
#include <scapix/java_api/java/lang/reflect/GenericDeclaration.h>
#include <scapix/java_api/java/lang/reflect/Member.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_METHOD_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_METHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class Method; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::Method>
{
	static constexpr fixed_string class_name = "java/lang/reflect/Method";
	using base_classes = std::tuple<scapix::java_api::java::lang::reflect::AccessibleObject, scapix::java_api::java::lang::reflect::GenericDeclaration, scapix::java_api::java::lang::reflect::Member>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_METHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_METHOD)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_METHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#include <scapix/java_api/java/lang/reflect/TypeVariable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::Method : public jni::object_base<"java/lang/reflect/Method",
	java::lang::reflect::AccessibleObject,
	java::lang::reflect::GenericDeclaration,
	java::lang::reflect::Member>
{
public:

	jni::ref<jni::array<java::lang::annotation::Annotation>> getAnnotations() { return call_method<"getAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jint getModifiers() { return call_method<"getModifiers", jint>(); }
	jboolean isVarArgs() { return call_method<"isVarArgs", jboolean>(); }
	jboolean isBridge() { return call_method<"isBridge", jboolean>(); }
	jboolean isSynthetic() { return call_method<"isSynthetic", jboolean>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Class> getDeclaringClass() { return call_method<"getDeclaringClass", jni::ref<java::lang::Class>>(); }
	jni::ref<jni::array<java::lang::Class>> getExceptionTypes() { return call_method<"getExceptionTypes", jni::ref<jni::array<java::lang::Class>>>(); }
	jni::ref<jni::array<java::lang::Class>> getParameterTypes() { return call_method<"getParameterTypes", jni::ref<jni::array<java::lang::Class>>>(); }
	jni::ref<java::lang::Class> getReturnType() { return call_method<"getReturnType", jni::ref<java::lang::Class>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jni::ref<java::lang::String> toGenericString() { return call_method<"toGenericString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::reflect::TypeVariable>> getTypeParameters() { return call_method<"getTypeParameters", jni::ref<jni::array<java::lang::reflect::TypeVariable>>>(); }
	jni::ref<jni::array<java::lang::reflect::Type>> getGenericParameterTypes() { return call_method<"getGenericParameterTypes", jni::ref<jni::array<java::lang::reflect::Type>>>(); }
	jboolean isAnnotationPresent(jni::ref<java::lang::Class> annotationType) { return call_method<"isAnnotationPresent", jboolean>(annotationType); }
	jni::ref<jni::array<java::lang::reflect::Type>> getGenericExceptionTypes() { return call_method<"getGenericExceptionTypes", jni::ref<jni::array<java::lang::reflect::Type>>>(); }
	jni::ref<java::lang::reflect::Type> getGenericReturnType() { return call_method<"getGenericReturnType", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotations() { return call_method<"getDeclaredAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation(jni::ref<java::lang::Class> annotationType) { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(annotationType); }
	jni::ref<jni::array<jni::array<java::lang::annotation::Annotation>>> getParameterAnnotations() { return call_method<"getParameterAnnotations", jni::ref<jni::array<jni::array<java::lang::annotation::Annotation>>>>(); }
	jni::ref<java::lang::Object> getDefaultValue() { return call_method<"getDefaultValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Method(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_METHOD