// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_VM_STACKCHUNK_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_STACKCHUNK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::vm { class StackChunk; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::vm::StackChunk>
{
	static constexpr fixed_string class_name = "jdk/internal/vm/StackChunk";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_STACKCHUNK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_VM_STACKCHUNK)
#define SCAPIX_JAVA_API_JDK_INTERNAL_VM_STACKCHUNK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::vm::StackChunk : public jni::object_base<"jdk/internal/vm/StackChunk",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::vm::StackChunk> new_object() { return base_::new_object(); }
	static void init() { return call_static_method<"init", void>(); }
	jni::ref<jdk::internal::vm::StackChunk> parent() { return call_method<"parent", jni::ref<jdk::internal::vm::StackChunk>>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }

protected:

	StackChunk(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_VM_STACKCHUNK
