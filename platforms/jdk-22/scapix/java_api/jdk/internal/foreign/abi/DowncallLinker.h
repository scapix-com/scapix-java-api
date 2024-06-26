// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_DOWNCALLLINKER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_DOWNCALLLINKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class DowncallLinker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::DowncallLinker>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/DowncallLinker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_DOWNCALLLINKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_DOWNCALLLINKER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_DOWNCALLLINKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/jdk/internal/foreign/abi/ABIDescriptor.h>
#include <scapix/java_api/jdk/internal/foreign/abi/CallingSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::DowncallLinker : public jni::object_base<"jdk/internal/foreign/abi/DowncallLinker",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::foreign::abi::DowncallLinker> new_object(jni::ref<jdk::internal::foreign::abi::ABIDescriptor> abi, jni::ref<jdk::internal::foreign::abi::CallingSequence> callingSequence) { return base_::new_object(abi, callingSequence); }
	jni::ref<java::lang::invoke::MethodHandle> getBoundMethodHandle() { return call_method<"getBoundMethodHandle", jni::ref<java::lang::invoke::MethodHandle>>(); }

protected:

	DowncallLinker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_DOWNCALLLINKER
