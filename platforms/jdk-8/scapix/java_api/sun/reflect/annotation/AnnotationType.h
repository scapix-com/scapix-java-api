// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPE_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class AnnotationType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::AnnotationType>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/AnnotationType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPE)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/annotation/RetentionPolicy.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::annotation::AnnotationType : public jni::object_base<"sun/reflect/annotation/AnnotationType",
	java::lang::Object>
{
public:

	static jni::ref<sun::reflect::annotation::AnnotationType> getInstance(jni::ref<java::lang::Class> p1) { return call_static_method<"getInstance", jni::ref<sun::reflect::annotation::AnnotationType>>(p1); }
	static jni::ref<java::lang::Class> invocationHandlerReturnType(jni::ref<java::lang::Class> p1) { return call_static_method<"invocationHandlerReturnType", jni::ref<java::lang::Class>>(p1); }
	jni::ref<java::util::Map> memberTypes() { return call_method<"memberTypes", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> members() { return call_method<"members", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> memberDefaults() { return call_method<"memberDefaults", jni::ref<java::util::Map>>(); }
	jni::ref<java::lang::annotation::RetentionPolicy> retention() { return call_method<"retention", jni::ref<java::lang::annotation::RetentionPolicy>>(); }
	jboolean isInherited() { return call_method<"isInherited", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AnnotationType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONTYPE
