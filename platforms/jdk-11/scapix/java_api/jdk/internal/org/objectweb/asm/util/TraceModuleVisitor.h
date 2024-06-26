// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/ModuleVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACEMODULEVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACEMODULEVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class TraceModuleVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::TraceModuleVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/TraceModuleVisitor";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::ModuleVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACEMODULEVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACEMODULEVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACEMODULEVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/util/Printer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::TraceModuleVisitor : public jni::object_base<"jdk/internal/org/objectweb/asm/util/TraceModuleVisitor",
	jdk::internal::org::objectweb::asm_::ModuleVisitor>
{
public:

	jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> p() { return get_field<"p", jni::ref<jdk::internal::org::objectweb::asm_::util::Printer>>(); }

	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceModuleVisitor> new_object(jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> p) { return base_::new_object(p); }
	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceModuleVisitor> new_object(jni::ref<jdk::internal::org::objectweb::asm_::ModuleVisitor> mv, jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> p) { return base_::new_object(mv, p); }
	void visitMainClass(jni::ref<java::lang::String> mainClass) { return call_method<"visitMainClass", void>(mainClass); }
	void visitPackage(jni::ref<java::lang::String> packaze) { return call_method<"visitPackage", void>(packaze); }
	void visitRequire(jni::ref<java::lang::String> module, jint access, jni::ref<java::lang::String> version) { return call_method<"visitRequire", void>(module, access, version); }
	void visitExport(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitExport", void>(packaze, access, modules); }
	void visitOpen(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitOpen", void>(packaze, access, modules); }
	void visitUse(jni::ref<java::lang::String> use) { return call_method<"visitUse", void>(use); }
	void visitProvide(jni::ref<java::lang::String> service, jni::ref<jni::array<java::lang::String>> providers) { return call_method<"visitProvide", void>(service, providers); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	TraceModuleVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACEMODULEVISITOR
