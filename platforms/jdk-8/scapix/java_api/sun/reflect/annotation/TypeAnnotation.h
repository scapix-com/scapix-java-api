// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_TYPEANNOTATION_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_TYPEANNOTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class TypeAnnotation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::TypeAnnotation>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/TypeAnnotation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_TYPEANNOTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_TYPEANNOTATION)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_TYPEANNOTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/lang/reflect/AnnotatedElement.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/sun/reflect/annotation/TypeAnnotation_LocationInfo.h>
#include <scapix/java_api/sun/reflect/annotation/TypeAnnotation_TypeAnnotationTarget.h>
#include <scapix/java_api/sun/reflect/annotation/TypeAnnotation_TypeAnnotationTargetInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::annotation::TypeAnnotation : public jni::object_base<"sun/reflect/annotation/TypeAnnotation",
	java::lang::Object>
{
public:

	using TypeAnnotationTarget = TypeAnnotation_TypeAnnotationTarget;
	using TypeAnnotationTargetInfo = TypeAnnotation_TypeAnnotationTargetInfo;
	using LocationInfo = TypeAnnotation_LocationInfo;

	static jni::ref<sun::reflect::annotation::TypeAnnotation> new_object(jni::ref<sun::reflect::annotation::TypeAnnotation_TypeAnnotationTargetInfo> p1, jni::ref<sun::reflect::annotation::TypeAnnotation_LocationInfo> p2, jni::ref<java::lang::annotation::Annotation> p3, jni::ref<java::lang::reflect::AnnotatedElement> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<sun::reflect::annotation::TypeAnnotation_TypeAnnotationTargetInfo> getTargetInfo() { return call_method<"getTargetInfo", jni::ref<sun::reflect::annotation::TypeAnnotation_TypeAnnotationTargetInfo>>(); }
	jni::ref<java::lang::annotation::Annotation> getAnnotation() { return call_method<"getAnnotation", jni::ref<java::lang::annotation::Annotation>>(); }
	jni::ref<java::lang::reflect::AnnotatedElement> getBaseDeclaration() { return call_method<"getBaseDeclaration", jni::ref<java::lang::reflect::AnnotatedElement>>(); }
	jni::ref<sun::reflect::annotation::TypeAnnotation_LocationInfo> getLocationInfo() { return call_method<"getLocationInfo", jni::ref<sun::reflect::annotation::TypeAnnotation_LocationInfo>>(); }
	static jni::ref<java::util::List> filter(jni::ref<jni::array<sun::reflect::annotation::TypeAnnotation>> p1, jni::ref<sun::reflect::annotation::TypeAnnotation_TypeAnnotationTarget> p2) { return call_static_method<"filter", jni::ref<java::util::List>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	TypeAnnotation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_TYPEANNOTATION
