// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_LOCALVARIABLEANNOTATIONNODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_LOCALVARIABLEANNOTATIONNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class LocalVariableAnnotationNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::LocalVariableAnnotationNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/LocalVariableAnnotationNode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::TypeAnnotationNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_LOCALVARIABLEANNOTATIONNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_LOCALVARIABLEANNOTATIONNODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_LOCALVARIABLEANNOTATIONNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::LocalVariableAnnotationNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/LocalVariableAnnotationNode",
	jdk::internal::org::objectweb::asm_::tree::TypeAnnotationNode>
{
public:

	jni::ref<java::util::List> start() { return get_field<"start", jni::ref<java::util::List>>(); }
	void start(jni::ref<java::util::List> v) { set_field<"start", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> end() { return get_field<"end", jni::ref<java::util::List>>(); }
	void end(jni::ref<java::util::List> v) { set_field<"end", jni::ref<java::util::List>>(v); }
	jni::ref<java::util::List> index() { return get_field<"index", jni::ref<java::util::List>>(); }
	void index(jni::ref<java::util::List> v) { set_field<"index", jni::ref<java::util::List>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::LocalVariableAnnotationNode> new_object(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::tree::LabelNode>> start, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::tree::LabelNode>> end, jni::ref<jni::array<jint>> index, jni::ref<java::lang::String> descriptor) { return base_::new_object(typeRef, typePath, start, end, index, descriptor); }
	static jni::ref<jdk::internal::org::objectweb::asm_::tree::LocalVariableAnnotationNode> new_object(jint api, jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::tree::LabelNode>> start, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::tree::LabelNode>> end, jni::ref<jni::array<jint>> index, jni::ref<java::lang::String> descriptor) { return base_::new_object(api, typeRef, typePath, start, end, index, descriptor); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> methodVisitor, jboolean visible) { return call_method<"accept", void>(methodVisitor, visible); }

protected:

	LocalVariableAnnotationNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_LOCALVARIABLEANNOTATIONNODE