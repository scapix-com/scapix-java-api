// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_IINCINSNNODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_IINCINSNNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class IincInsnNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::IincInsnNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/IincInsnNode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_IINCINSNNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_IINCINSNNODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_IINCINSNNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::IincInsnNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/IincInsnNode",
	jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>
{
public:

	jint var() { return get_field<"var", jint>(); }
	void var(jint v) { set_field<"var", jint>(v); }
	jint incr() { return get_field<"incr", jint>(); }
	void incr(jint v) { set_field<"incr", jint>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::IincInsnNode> new_object(jint varIndex, jint incr) { return base_::new_object(varIndex, incr); }
	jint getType() { return call_method<"getType", jint>(); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> methodVisitor) { return call_method<"accept", void>(methodVisitor); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> clone(jni::ref<java::util::Map> clonedLabels) { return call_method<"clone", jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>>(clonedLabels); }

protected:

	IincInsnNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_IINCINSNNODE