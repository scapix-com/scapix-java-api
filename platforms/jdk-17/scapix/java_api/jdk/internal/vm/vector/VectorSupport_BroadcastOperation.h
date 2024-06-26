// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_BROADCASTOPERATION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_BROADCASTOPERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::vector { class VectorSupport_BroadcastOperation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::vector::VectorSupport_BroadcastOperation>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/vector/VectorSupport$BroadcastOperation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_BROADCASTOPERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_BROADCASTOPERATION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_BROADCASTOPERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/vm/vector/VectorSupport_VectorSpecies.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::vector::VectorSupport_BroadcastOperation : public jni::object_base<"jdk/internal/vm/vector/VectorSupport$BroadcastOperation",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> broadcast(jlong p1, jni::ref<jdk::internal::vm::vector::VectorSupport_VectorSpecies> p2) { return call_method<"broadcast", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	VectorSupport_BroadcastOperation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_BROADCASTOPERATION
