// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACERECORDCOMPONENTVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACERECORDCOMPONENTVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class TraceRecordComponentVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::TraceRecordComponentVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/TraceRecordComponentVisitor";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::RecordComponentVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACERECORDCOMPONENTVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACERECORDCOMPONENTVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACERECORDCOMPONENTVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/util/Printer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::TraceRecordComponentVisitor : public jni::object_base<"jdk/internal/org/objectweb/asm/util/TraceRecordComponentVisitor",
	jdk::internal::org::objectweb::asm_::RecordComponentVisitor>
{
public:

	jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> printer() { return get_field<"printer", jni::ref<jdk::internal::org::objectweb::asm_::util::Printer>>(); }

	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceRecordComponentVisitor> new_object(jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> printer) { return base_::new_object(printer); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceRecordComponentVisitor> new_object(jni::ref<jdk::internal::org::objectweb::asm_::RecordComponentVisitor> recordComponentVisitor, jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> printer) { return base_::new_object(recordComponentVisitor, printer); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotation(jni::ref<java::lang::String> descriptor, jboolean visible) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(descriptor, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> descriptor, jboolean visible) { return call_method<"visitTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, descriptor, visible); }
	void visitAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attribute) { return call_method<"visitAttribute", void>(attribute); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	TraceRecordComponentVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACERECORDCOMPONENTVISITOR