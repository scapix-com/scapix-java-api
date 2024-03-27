// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/ModuleVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULENODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class ModuleNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::ModuleNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/ModuleNode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::ModuleVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULENODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULENODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/ClassVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::ModuleNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/ModuleNode",
	jdk::internal::org::objectweb::asm_::ModuleVisitor>
{
public:

	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	void name(jni::ref<java::lang::String> v) { set_field<"name", jni::ref<java::lang::String>>(v); }
	jint access() { return get_field<"access", jint>(); }
	void access(jint v) { set_field<"access", jint>(v); }
	jni::ref<java::lang::String> version() { return get_field<"version", jni::ref<java::lang::String>>(); }
	void version(jni::ref<java::lang::String> v) { set_field<"version", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> mainClass() { return get_field<"mainClass", jni::ref<java::lang::String>>(); }
	void mainClass(jni::ref<java::lang::String> v) { set_field<"mainClass", jni::ref<java::lang::String>>(v); }
	jni::ref<java::util::List> packages() { return get_field<"packages", jni::ref<java::util::List>>(); }
	void packages(jni::ref<java::util::List> v) { set_field<"packages", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> requires_() { return get_field<"requires", jni::ref<java::util::List>>(); }
	void requires_(jni::ref<java::util::List> v) { set_field<"requires", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> exports() { return get_field<"exports", jni::ref<java::util::List>>(); }
	void exports(jni::ref<java::util::List> v) { set_field<"exports", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> opens() { return get_field<"opens", jni::ref<java::util::List>>(); }
	void opens(jni::ref<java::util::List> v) { set_field<"opens", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> uses() { return get_field<"uses", jni::ref<java::util::List>>(); }
	void uses(jni::ref<java::util::List> v) { set_field<"uses", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> provides() { return get_field<"provides", jni::ref<java::util::List>>(); }
	void provides(jni::ref<java::util::List> v) { set_field<"provides", jni::ref<java::util::List>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::ModuleNode> new_object(jni::ref<java::lang::String> name, jint access, jni::ref<java::lang::String> version) { return base_::new_object(name, access, version); }
	static jni::ref<jdk::internal::org::objectweb::asm_::tree::ModuleNode> new_object(jint api, jni::ref<java::lang::String> name, jint access, jni::ref<java::lang::String> version, jni::ref<java::util::List> requires_, jni::ref<java::util::List> exports, jni::ref<java::util::List> opens, jni::ref<java::util::List> uses, jni::ref<java::util::List> provides) { return base_::new_object(api, name, access, version, requires_, exports, opens, uses, provides); }
	void visitMainClass(jni::ref<java::lang::String> mainClass) { return call_method<"visitMainClass", void>(mainClass); }
	void visitPackage(jni::ref<java::lang::String> packaze) { return call_method<"visitPackage", void>(packaze); }
	void visitRequire(jni::ref<java::lang::String> module, jint access, jni::ref<java::lang::String> version) { return call_method<"visitRequire", void>(module, access, version); }
	void visitExport(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitExport", void>(packaze, access, modules); }
	void visitOpen(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitOpen", void>(packaze, access, modules); }
	void visitUse(jni::ref<java::lang::String> service) { return call_method<"visitUse", void>(service); }
	void visitProvide(jni::ref<java::lang::String> service, jni::ref<jni::array<java::lang::String>> providers) { return call_method<"visitProvide", void>(service, providers); }
	void visitEnd() { return call_method<"visitEnd", void>(); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::ClassVisitor> classVisitor) { return call_method<"accept", void>(classVisitor); }

protected:

	ModuleNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULENODE
