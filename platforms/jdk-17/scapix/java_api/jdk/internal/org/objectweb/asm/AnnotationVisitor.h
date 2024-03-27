// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ANNOTATIONVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ANNOTATIONVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class AnnotationVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::AnnotationVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/AnnotationVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ANNOTATIONVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ANNOTATIONVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ANNOTATIONVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::AnnotationVisitor : public jni::object_base<"jdk/internal/org/objectweb/asm/AnnotationVisitor",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> new_object(jint api) { return base_::new_object(api); }
	static jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> new_object(jint api, jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> annotationVisitor) { return base_::new_object(api, annotationVisitor); }
	void visit(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"visit", void>(name, value); }
	void visitEnum(jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor, jni::ref<java::lang::String> value) { return call_method<"visitEnum", void>(name, descriptor, value); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotation(jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(name, descriptor); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitArray(jni::ref<java::lang::String> name) { return call_method<"visitArray", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(name); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	AnnotationVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ANNOTATIONVISITOR
