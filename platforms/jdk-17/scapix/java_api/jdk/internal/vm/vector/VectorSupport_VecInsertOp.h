// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECINSERTOP_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECINSERTOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::vector { class VectorSupport_VecInsertOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::vector::VectorSupport_VecInsertOp>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/vector/VectorSupport$VecInsertOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECINSERTOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECINSERTOP)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECINSERTOP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::vector::VectorSupport_VecInsertOp : public jni::object_base<"jdk/internal/vm/vector/VectorSupport$VecInsertOp",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> apply(jni::ref<java::lang::Object> p1, jint p2, jlong p3) { return call_method<"apply", jni::ref<java::lang::Object>>(p1, p2, p3); }

protected:

	VectorSupport_VecInsertOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECINSERTOP
