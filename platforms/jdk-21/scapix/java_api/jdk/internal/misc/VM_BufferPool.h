// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_BUFFERPOOL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_BUFFERPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class VM_BufferPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::VM_BufferPool>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/VM$BufferPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_BUFFERPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_BUFFERPOOL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_BUFFERPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::misc::VM_BufferPool : public jni::object_base<"jdk/internal/misc/VM$BufferPool",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jlong getCount() { return call_method<"getCount", jlong>(); }
	jlong getTotalCapacity() { return call_method<"getTotalCapacity", jlong>(); }
	jlong getMemoryUsed() { return call_method<"getMemoryUsed", jlong>(); }

protected:

	VM_BufferPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_BUFFERPOOL
