// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ABSTRACTINSNNODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ABSTRACTINSNNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class AbstractInsnNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/AbstractInsnNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ABSTRACTINSNNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ABSTRACTINSNNODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ABSTRACTINSNNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/AbstractInsnNode",
	java::lang::Object>
{
public:

	static jint INSN() { return get_static_field<"INSN", jint>(); }
	static jint INT_INSN() { return get_static_field<"INT_INSN", jint>(); }
	static jint VAR_INSN() { return get_static_field<"VAR_INSN", jint>(); }
	static jint TYPE_INSN() { return get_static_field<"TYPE_INSN", jint>(); }
	static jint FIELD_INSN() { return get_static_field<"FIELD_INSN", jint>(); }
	static jint METHOD_INSN() { return get_static_field<"METHOD_INSN", jint>(); }
	static jint INVOKE_DYNAMIC_INSN() { return get_static_field<"INVOKE_DYNAMIC_INSN", jint>(); }
	static jint JUMP_INSN() { return get_static_field<"JUMP_INSN", jint>(); }
	static jint LABEL() { return get_static_field<"LABEL", jint>(); }
	static jint LDC_INSN() { return get_static_field<"LDC_INSN", jint>(); }
	static jint IINC_INSN() { return get_static_field<"IINC_INSN", jint>(); }
	static jint TABLESWITCH_INSN() { return get_static_field<"TABLESWITCH_INSN", jint>(); }
	static jint LOOKUPSWITCH_INSN() { return get_static_field<"LOOKUPSWITCH_INSN", jint>(); }
	static jint MULTIANEWARRAY_INSN() { return get_static_field<"MULTIANEWARRAY_INSN", jint>(); }
	static jint FRAME() { return get_static_field<"FRAME", jint>(); }
	static jint LINE() { return get_static_field<"LINE", jint>(); }
	jni::ref<java::util::List> visibleTypeAnnotations() { return get_field<"visibleTypeAnnotations", jni::ref<java::util::List>>(); }
	void visibleTypeAnnotations(jni::ref<java::util::List> v) { set_field<"visibleTypeAnnotations", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> invisibleTypeAnnotations() { return get_field<"invisibleTypeAnnotations", jni::ref<java::util::List>>(); }
	void invisibleTypeAnnotations(jni::ref<java::util::List> v) { set_field<"invisibleTypeAnnotations", jni::ref<java::util::List>>(v); }

	jint getOpcode() { return call_method<"getOpcode", jint>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> getPrevious() { return call_method<"getPrevious", jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> getNext() { return call_method<"getNext", jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>>(); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> p1) { return call_method<"accept", void>(p1); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> clone(jni::ref<java::util::Map> p1) { return call_method<"clone", jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>>(p1); }

protected:

	AbstractInsnNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ABSTRACTINSNNODE
