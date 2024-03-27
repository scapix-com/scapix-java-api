// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/ClassVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACECLASSVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACECLASSVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class TraceClassVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::TraceClassVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/TraceClassVisitor";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::ClassVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACECLASSVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACECLASSVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACECLASSVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/util/Printer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::TraceClassVisitor : public jni::object_base<"jdk/internal/org/objectweb/asm/util/TraceClassVisitor",
	jdk::internal::org::objectweb::asm_::ClassVisitor>
{
public:

	jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> p() { return get_field<"p", jni::ref<jdk::internal::org::objectweb::asm_::util::Printer>>(); }

	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceClassVisitor> new_object(jni::ref<java::io::PrintWriter> printWriter) { return base_::new_object(printWriter); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceClassVisitor> new_object(jni::ref<jdk::internal::org::objectweb::asm_::ClassVisitor> classVisitor, jni::ref<java::io::PrintWriter> printWriter) { return base_::new_object(classVisitor, printWriter); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceClassVisitor> new_object(jni::ref<jdk::internal::org::objectweb::asm_::ClassVisitor> classVisitor, jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> printer, jni::ref<java::io::PrintWriter> printWriter) { return base_::new_object(classVisitor, printer, printWriter); }
	void visit(jint version, jint access, jni::ref<java::lang::String> name, jni::ref<java::lang::String> signature, jni::ref<java::lang::String> superName, jni::ref<jni::array<java::lang::String>> interfaces) { return call_method<"visit", void>(version, access, name, signature, superName, interfaces); }
	void visitSource(jni::ref<java::lang::String> file, jni::ref<java::lang::String> debug) { return call_method<"visitSource", void>(file, debug); }
	jni::ref<jdk::internal::org::objectweb::asm_::ModuleVisitor> visitModule(jni::ref<java::lang::String> name, jint flags, jni::ref<java::lang::String> version) { return call_method<"visitModule", jni::ref<jdk::internal::org::objectweb::asm_::ModuleVisitor>>(name, flags, version); }
	void visitNestHost(jni::ref<java::lang::String> nestHost) { return call_method<"visitNestHost", void>(nestHost); }
	void visitOuterClass(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor) { return call_method<"visitOuterClass", void>(owner, name, descriptor); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotation(jni::ref<java::lang::String> descriptor, jboolean visible) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(descriptor, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> descriptor, jboolean visible) { return call_method<"visitTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, descriptor, visible); }
	void visitAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attribute) { return call_method<"visitAttribute", void>(attribute); }
	void visitNestMember(jni::ref<java::lang::String> nestMember) { return call_method<"visitNestMember", void>(nestMember); }
	void visitPermittedSubclassExperimental(jni::ref<java::lang::String> permittedSubclass) { return call_method<"visitPermittedSubclassExperimental", void>(permittedSubclass); }
	void visitInnerClass(jni::ref<java::lang::String> name, jni::ref<java::lang::String> outerName, jni::ref<java::lang::String> innerName, jint access) { return call_method<"visitInnerClass", void>(name, outerName, innerName, access); }
	jni::ref<jdk::internal::org::objectweb::asm_::RecordComponentVisitor> visitRecordComponent(jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor, jni::ref<java::lang::String> signature) { return call_method<"visitRecordComponent", jni::ref<jdk::internal::org::objectweb::asm_::RecordComponentVisitor>>(name, descriptor, signature); }
	jni::ref<jdk::internal::org::objectweb::asm_::FieldVisitor> visitField(jint access, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor, jni::ref<java::lang::String> signature, jni::ref<java::lang::Object> value) { return call_method<"visitField", jni::ref<jdk::internal::org::objectweb::asm_::FieldVisitor>>(access, name, descriptor, signature, value); }
	jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> visitMethod(jint access, jni::ref<java::lang::String> name, jni::ref<java::lang::String> descriptor, jni::ref<java::lang::String> signature, jni::ref<jni::array<java::lang::String>> exceptions) { return call_method<"visitMethod", jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor>>(access, name, descriptor, signature, exceptions); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	TraceClassVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACECLASSVISITOR
