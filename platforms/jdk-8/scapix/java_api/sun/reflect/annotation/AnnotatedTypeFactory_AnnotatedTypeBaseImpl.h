// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedType.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATEDTYPEFACTORY_ANNOTATEDTYPEBASEIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATEDTYPEFACTORY_ANNOTATEDTYPEBASEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class AnnotatedTypeFactory_AnnotatedTypeBaseImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::AnnotatedTypeFactory_AnnotatedTypeBaseImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::AnnotatedType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATEDTYPEFACTORY_ANNOTATEDTYPEBASEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATEDTYPEFACTORY_ANNOTATEDTYPEBASEIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATEDTYPEFACTORY_ANNOTATEDTYPEBASEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/reflect/Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::annotation::AnnotatedTypeFactory_AnnotatedTypeBaseImpl : public jni::object_base<"sun/reflect/annotation/AnnotatedTypeFactory$AnnotatedTypeBaseImpl",
	java::lang::Object,
	java::lang::reflect::AnnotatedType>
{
public:

	jni::ref<jni::array<java::lang::annotation::Annotation>> getAnnotations() { return call_method<"getAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation(jni::ref<java::lang::Class> p1) { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(p1); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getAnnotationsByType(jni::ref<java::lang::Class> p1) { return call_method<"getAnnotationsByType", jni::ref<jni::array<java::lang::annotation::Annotation>>>(p1); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotations() { return call_method<"getDeclaredAnnotations", jni::ref<jni::array<java::lang::annotation::Annotation>>>(); }
	jni::ref<java::lang::annotation::Annotation> getDeclaredAnnotation(jni::ref<java::lang::Class> p1) { return call_method<"getDeclaredAnnotation", jni::ref<java::lang::annotation::Annotation>>(p1); }
	jni::ref<jni::array<java::lang::annotation::Annotation>> getDeclaredAnnotationsByType(jni::ref<java::lang::Class> p1) { return call_method<"getDeclaredAnnotationsByType", jni::ref<jni::array<java::lang::annotation::Annotation>>>(p1); }
	jni::ref<java::lang::reflect::Type> getType() { return call_method<"getType", jni::ref<java::lang::reflect::Type>>(); }

protected:

	AnnotatedTypeFactory_AnnotatedTypeBaseImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATEDTYPEFACTORY_ANNOTATEDTYPEBASEIMPL
