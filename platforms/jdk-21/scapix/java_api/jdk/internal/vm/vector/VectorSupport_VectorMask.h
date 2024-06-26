// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/vm/vector/VectorSupport_VectorPayload.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORMASK_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORMASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::vector { class VectorSupport_VectorMask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::vector::VectorSupport_VectorMask>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/vector/VectorSupport$VectorMask";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::vm::vector::VectorSupport_VectorPayload>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORMASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORMASK)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORMASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::vector::VectorSupport_VectorMask : public jni::object_base<"jdk/internal/vm/vector/VectorSupport$VectorMask",
	jdk::internal::vm::vector::VectorSupport_VectorPayload>
{
public:

	static jni::ref<jdk::internal::vm::vector::VectorSupport_VectorMask> new_object(jni::ref<java::lang::Object> payload) { return base_::new_object(payload); }

protected:

	VectorSupport_VectorMask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORMASK
