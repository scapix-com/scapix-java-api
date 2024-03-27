// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_MODULEVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_MODULEVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class ModuleVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::ModuleVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/ModuleVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_MODULEVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_MODULEVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_MODULEVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::ModuleVisitor : public jni::object_base<"jdk/internal/org/objectweb/asm/ModuleVisitor",
	java::lang::Object>
{
public:

	void visitMainClass(jni::ref<java::lang::String> mainClass) { return call_method<"visitMainClass", void>(mainClass); }
	void visitPackage(jni::ref<java::lang::String> packaze) { return call_method<"visitPackage", void>(packaze); }
	void visitRequire(jni::ref<java::lang::String> module, jint access, jni::ref<java::lang::String> version) { return call_method<"visitRequire", void>(module, access, version); }
	void visitExport(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitExport", void>(packaze, access, modules); }
	void visitOpen(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitOpen", void>(packaze, access, modules); }
	void visitUse(jni::ref<java::lang::String> service) { return call_method<"visitUse", void>(service); }
	void visitProvide(jni::ref<java::lang::String> service, jni::ref<jni::array<java::lang::String>> providers) { return call_method<"visitProvide", void>(service, providers); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	ModuleVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_MODULEVISITOR