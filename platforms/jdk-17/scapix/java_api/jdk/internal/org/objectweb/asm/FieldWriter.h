// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/FieldVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_FIELDWRITER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_FIELDWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class FieldWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::FieldWriter>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/FieldWriter";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::FieldVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_FIELDWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_FIELDWRITER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_FIELDWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::org::objectweb::asm_::FieldWriter : public jni::object_base<"jdk/internal/org/objectweb/asm/FieldWriter",
	jdk::internal::org::objectweb::asm_::FieldVisitor>
{
public:

	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotation(jni::ref<java::lang::String> descriptor, jboolean visible) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(descriptor, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> descriptor, jboolean visible) { return call_method<"visitTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, descriptor, visible); }
	void visitAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attribute) { return call_method<"visitAttribute", void>(attribute); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	FieldWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_FIELDWRITER
