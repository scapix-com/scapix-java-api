// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_JUMPINSNNODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_JUMPINSNNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class JumpInsnNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::JumpInsnNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/JumpInsnNode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_JUMPINSNNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_JUMPINSNNODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_JUMPINSNNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::JumpInsnNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/JumpInsnNode",
	jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>
{
public:

	jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> label() { return get_field<"label", jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode>>(); }
	void label(jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> v) { set_field<"label", jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::JumpInsnNode> new_object(jint opcode, jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> label) { return base_::new_object(opcode, label); }
	void setOpcode(jint opcode) { return call_method<"setOpcode", void>(opcode); }
	jint getType() { return call_method<"getType", jint>(); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> mv) { return call_method<"accept", void>(mv); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> clone(jni::ref<java::util::Map> labels) { return call_method<"clone", jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>>(labels); }

protected:

	JumpInsnNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_JUMPINSNNODE
