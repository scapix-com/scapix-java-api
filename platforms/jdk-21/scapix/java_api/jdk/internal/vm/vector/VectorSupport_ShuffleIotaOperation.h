// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_SHUFFLEIOTAOPERATION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_SHUFFLEIOTAOPERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::vector { class VectorSupport_ShuffleIotaOperation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::vector::VectorSupport_ShuffleIotaOperation>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_SHUFFLEIOTAOPERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_SHUFFLEIOTAOPERATION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_SHUFFLEIOTAOPERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/vm/vector/VectorSupport_VectorShuffle.h>
#include <scapix/java_api/jdk/internal/vm/vector/VectorSupport_VectorSpecies.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::vector::VectorSupport_ShuffleIotaOperation : public jni::object_base<"jdk/internal/vm/vector/VectorSupport$ShuffleIotaOperation",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::vm::vector::VectorSupport_VectorShuffle> apply(jint p1, jint p2, jint p3, jni::ref<jdk::internal::vm::vector::VectorSupport_VectorSpecies> p4) { return call_method<"apply", jni::ref<jdk::internal::vm::vector::VectorSupport_VectorShuffle>>(p1, p2, p3, p4); }

protected:

	VectorSupport_ShuffleIotaOperation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_SHUFFLEIOTAOPERATION