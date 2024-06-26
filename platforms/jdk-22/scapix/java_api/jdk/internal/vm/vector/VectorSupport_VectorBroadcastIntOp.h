// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORBROADCASTINTOP_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORBROADCASTINTOP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::vector { class VectorSupport_VectorBroadcastIntOp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::vector::VectorSupport_VectorBroadcastIntOp>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORBROADCASTINTOP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORBROADCASTINTOP)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORBROADCASTINTOP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/vm/vector/VectorSupport_Vector.h>
#include <scapix/java_api/jdk/internal/vm/vector/VectorSupport_VectorMask.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::vector::VectorSupport_VectorBroadcastIntOp : public jni::object_base<"jdk/internal/vm/vector/VectorSupport$VectorBroadcastIntOp",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::vm::vector::VectorSupport_Vector> apply(jni::ref<jdk::internal::vm::vector::VectorSupport_Vector> p1, jint p2, jni::ref<jdk::internal::vm::vector::VectorSupport_VectorMask> p3) { return call_method<"apply", jni::ref<jdk::internal::vm::vector::VectorSupport_Vector>>(p1, p2, p3); }

protected:

	VectorSupport_VectorBroadcastIntOp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORBROADCASTINTOP
