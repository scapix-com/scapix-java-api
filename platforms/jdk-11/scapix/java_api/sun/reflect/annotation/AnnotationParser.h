// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONPARSER_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect::annotation { class AnnotationParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::annotation::AnnotationParser>
{
	static constexpr fixed_string class_name = "sun/reflect/annotation/AnnotationParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONPARSER)
#define SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/reflect/ConstantPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::reflect::annotation::AnnotationParser : public jni::object_base<"sun/reflect/annotation/AnnotationParser",
	java::lang::Object>
{
public:

	static jni::ref<sun::reflect::annotation::AnnotationParser> new_object() { return base_::new_object(); }
	static jni::ref<java::util::Map> parseAnnotations(jni::ref<jni::array<jbyte>> rawAnnotations, jni::ref<jdk::internal::reflect::ConstantPool> constPool, jni::ref<java::lang::Class> container) { return call_static_method<"parseAnnotations", jni::ref<java::util::Map>>(rawAnnotations, constPool, container); }
	static jni::ref<jni::array<jni::array<java::lang::annotation::Annotation>>> parseParameterAnnotations(jni::ref<jni::array<jbyte>> rawAnnotations, jni::ref<jdk::internal::reflect::ConstantPool> constPool, jni::ref<java::lang::Class> container) { return call_static_method<"parseParameterAnnotations", jni::ref<jni::array<jni::array<java::lang::annotation::Annotation>>>>(rawAnnotations, constPool, container); }
	static jni::ref<java::lang::annotation::Annotation> annotationForMap(jni::ref<java::lang::Class> type, jni::ref<java::util::Map> memberValues) { return call_static_method<"annotationForMap", jni::ref<java::lang::annotation::Annotation>>(type, memberValues); }
	static jni::ref<java::lang::Object> parseMemberValue(jni::ref<java::lang::Class> memberType, jni::ref<java::nio::ByteBuffer> buf, jni::ref<jdk::internal::reflect::ConstantPool> constPool, jni::ref<java::lang::Class> container) { return call_static_method<"parseMemberValue", jni::ref<java::lang::Object>>(memberType, buf, constPool, container); }
	static jni::ref<jni::array<java::lang::annotation::Annotation>> toArray(jni::ref<java::util::Map> annotations) { return call_static_method<"toArray", jni::ref<jni::array<java::lang::annotation::Annotation>>>(annotations); }

protected:

	AnnotationParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_ANNOTATION_ANNOTATIONPARSER
