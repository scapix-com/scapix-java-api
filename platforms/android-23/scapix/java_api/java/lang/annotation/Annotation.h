// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::annotation { class Annotation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::annotation::Annotation>
{
	static constexpr fixed_string class_name = "java/lang/annotation/Annotation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATION)
#define SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::annotation::Annotation : public jni::object_base<"java/lang/annotation/Annotation",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Class> annotationType() { return call_method<"annotationType", jni::ref<java::lang::Class>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Annotation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_ANNOTATION_ANNOTATION
