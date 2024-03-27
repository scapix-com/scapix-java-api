// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_FRAME_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_FRAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis { class Frame; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::analysis::Frame>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/analysis/Frame";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_FRAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_FRAME)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_FRAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/AbstractInsnNode.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/analysis/Interpreter.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/analysis/Value.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::analysis::Frame : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/analysis/Frame",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> new_object(jint numLocals, jint maxStack) { return base_::new_object(numLocals, maxStack); }
	static jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> new_object(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> frame) { return base_::new_object(frame); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> init(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> frame) { return call_method<"init", jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame>>(frame); }
	void initJumpTarget(jint opcode, jni::ref<jdk::internal::org::objectweb::asm_::tree::LabelNode> target) { return call_method<"initJumpTarget", void>(opcode, target); }
	void setReturn(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> v) { return call_method<"setReturn", void>(v); }
	jint getLocals() { return call_method<"getLocals", jint>(); }
	jint getMaxStackSize() { return call_method<"getMaxStackSize", jint>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> getLocal(jint index) { return call_method<"getLocal", jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value>>(index); }
	void setLocal(jint index, jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> value) { return call_method<"setLocal", void>(index, value); }
	jint getStackSize() { return call_method<"getStackSize", jint>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> getStack(jint index) { return call_method<"getStack", jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value>>(index); }
	void setStack(jint index, jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> value) { return call_method<"setStack", void>(index, value); }
	void clearStack() { return call_method<"clearStack", void>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> pop() { return call_method<"pop", jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value>>(); }
	void push(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Value> value) { return call_method<"push", void>(value); }
	void execute(jni::ref<jdk::internal::org::objectweb::asm_::tree::AbstractInsnNode> insn, jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Interpreter> interpreter) { return call_method<"execute", void>(insn, interpreter); }
	jboolean merge(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> frame, jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Interpreter> interpreter) { return call_method<"merge", jboolean>(frame, interpreter); }
	jboolean merge(jni::ref<jdk::internal::org::objectweb::asm_::tree::analysis::Frame> frame, jni::ref<jni::array<jboolean>> localsUsed) { return call_method<"merge", jboolean>(frame, localsUsed); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Frame(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_ANALYSIS_FRAME
