// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULEREQUIRENODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULEREQUIRENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class ModuleRequireNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::ModuleRequireNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/ModuleRequireNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULEREQUIRENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULEREQUIRENODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULEREQUIRENODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::ModuleRequireNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/ModuleRequireNode",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> module() { return get_field<"module", jni::ref<java::lang::String>>(); }
	void module(jni::ref<java::lang::String> v) { set_field<"module", jni::ref<java::lang::String>>(v); }
	jint access() { return get_field<"access", jint>(); }
	void access(jint v) { set_field<"access", jint>(v); }
	jni::ref<java::lang::String> version() { return get_field<"version", jni::ref<java::lang::String>>(); }
	void version(jni::ref<java::lang::String> v) { set_field<"version", jni::ref<java::lang::String>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::ModuleRequireNode> new_object(jni::ref<java::lang::String> module, jint access, jni::ref<java::lang::String> version) { return base_::new_object(module, access, version); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::ModuleVisitor> mv) { return call_method<"accept", void>(mv); }

protected:

	ModuleRequireNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_MODULEREQUIRENODE
