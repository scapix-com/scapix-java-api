// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORSPECIES_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORSPECIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm::vector { class VectorSupport_VectorSpecies; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::vector::VectorSupport_VectorSpecies>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/vector/VectorSupport$VectorSpecies";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORSPECIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORSPECIES)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORSPECIES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::vector::VectorSupport_VectorSpecies : public jni::object_base<"jdk/internal/vm/vector/VectorSupport$VectorSpecies",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::vm::vector::VectorSupport_VectorSpecies> new_object() { return base_::new_object(); }

protected:

	VectorSupport_VectorSpecies(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_VECTOR_VECTORSUPPORT_VECTORSPECIES