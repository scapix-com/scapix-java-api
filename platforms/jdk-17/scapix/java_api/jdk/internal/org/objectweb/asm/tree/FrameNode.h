// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_FRAMENODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_FRAMENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class FrameNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::FrameNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/FrameNode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_FRAMENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_FRAMENODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_FRAMENODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::FrameNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/FrameNode",
	jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>
{
public:

	jint type() { return get_field<"type", jint>(); }
	void type(jint v) { set_field<"type", jint>(v); }
	jni::ref<java::util::List> local() { return get_field<"local", jni::ref<java::util::List>>(); }
	void local(jni::ref<java::util::List> v) { set_field<"local", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> stack() { return get_field<"stack", jni::ref<java::util::List>>(); }
	void stack(jni::ref<java::util::List> v) { set_field<"stack", jni::ref<java::util::List>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::FrameNode> new_object(jint type, jint numLocal, jni::ref<jni::array<java::lang::Object>> local, jint numStack, jni::ref<jni::array<java::lang::Object>> stack) { return base_::new_object(type, numLocal, local, numStack, stack); }
	jint getType() { return call_method<"getType", jint>(); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> methodVisitor) { return call_method<"accept", void>(methodVisitor); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> clone(jni::ref<java::util::Map> clonedLabels) { return call_method<"clone", jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode>>(clonedLabels); }

protected:

	FrameNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_FRAMENODE
