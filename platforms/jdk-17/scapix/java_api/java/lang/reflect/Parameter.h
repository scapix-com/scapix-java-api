// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PARAMETER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PARAMETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class Parameter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::Parameter>
{
	static constexpr fixed_string class_name = "java/lang/reflect/Parameter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::AnnotatedElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PARAMETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PARAMETER)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PARAMETER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>
#include <scapix/java_api/java/lang/reflect/Executable.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::reflect::Parameter : public jni::object_base<"java/lang/reflect/Parameter",
	java::lang::Object,
	java::lang::reflect::AnnotatedElement>
{
public:

	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean isNamePresent() { return call_method<"isNamePresent", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::reflect::Executable> getDeclaringExecutable() { return call_method<"getDeclaringExecutable", jni::ref<java::lang::reflect::Executable>>(); }
	jint getModifiers() { return call_method<"getModifiers", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::reflect::Type> getParameterizedType() { return call_method<"getParameterizedType", jni::ref<java::lang::reflect::Type>>(); }
	jni::ref<java::lang::Class> getType() { return call_method<"getType", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::reflect::AnnotatedType> getAnnotatedType() { return call_method<"getAnnotatedType", jni::ref<java::lang::reflect::AnnotatedType>>(); }
	jboolean isImplicit() { return call_method<"isImplicit", jboolean>(); }
	jboolean isSynthetic() { return call_method<"isSynthetic", jboolean>(); }
	jboolean isVarArgs() { return call_method<"isVarArgs", jboolean>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation(jni::ref<java::lang::Class> annotationClass) { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(annotationClass); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getAnnotationsByType(jni::ref<java::lang::Class> annotationClass) { return call_method<"getAnnotationsByType", jni::ref<jni::array<java::lang::annotation::Annotation>>>(annotationClass); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotations() { return call_method<"getDeclaredAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<java::lang::annotation::Annotation> getDeclaredAnnotation(jni::ref<java::lang::Class> annotationClass) { return call_method<"getDeclaredAnnotation", jni::ref<java::lang::annotation::Annotation>>(annotationClass); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotationsByType(jni::ref<java::lang::Class> annotationClass) { return call_method<"getDeclaredAnnotationsByType", jni::ref<jni::array<java::lang::annotation::Annotation>>>(annotationClass); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getAnnotations() { return call_method<"getAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }

protected:

	Parameter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PARAMETER
