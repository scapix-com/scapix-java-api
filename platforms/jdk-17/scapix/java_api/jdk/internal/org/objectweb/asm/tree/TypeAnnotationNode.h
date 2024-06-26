// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_TYPEANNOTATIONNODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_TYPEANNOTATIONNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::tree { class TypeAnnotationNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::TypeAnnotationNode>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::tree::AnnotationNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_TYPEANNOTATIONNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_TYPEANNOTATIONNODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_TYPEANNOTATIONNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::tree::TypeAnnotationNode : public jni::object_base<"jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode",
	jdk::internal::org::objectweb::asm_::tree::AnnotationNode>
{
public:

	jint typeRef() { return get_field<"typeRef", jint>(); }
	void typeRef(jint v) { set_field<"typeRef", jint>(v); }
	jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath() { return get_field<"typePath", jni::ref<jdk::internal::org::objectweb::asm_::TypePath>>(); }
	void typePath(jni::ref<jdk::internal::org::objectweb::asm_::TypePath> v) { set_field<"typePath", jni::ref<jdk::internal::org::objectweb::asm_::TypePath>>(v); }

	static jni::ref<jdk::internal::org::objectweb::asm_::tree::TypeAnnotationNode> new_object(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> descriptor) { return base_::new_object(typeRef, typePath, descriptor); }
	static jni::ref<jdk::internal::org::objectweb::asm_::tree::TypeAnnotationNode> new_object(jint api, jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> descriptor) { return base_::new_object(api, typeRef, typePath, descriptor); }

protected:

	TypeAnnotationNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_TREE_TYPEANNOTATIONNODE
