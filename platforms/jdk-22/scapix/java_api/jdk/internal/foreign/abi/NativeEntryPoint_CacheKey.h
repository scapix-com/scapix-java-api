// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_NATIVEENTRYPOINT_CACHEKEY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_NATIVEENTRYPOINT_CACHEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class NativeEntryPoint_CacheKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::NativeEntryPoint_CacheKey>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/NativeEntryPoint$CacheKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_NATIVEENTRYPOINT_CACHEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_NATIVEENTRYPOINT_CACHEKEY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_NATIVEENTRYPOINT_CACHEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/foreign/abi/ABIDescriptor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::NativeEntryPoint_CacheKey : public jni::object_base<"jdk/internal/foreign/abi/NativeEntryPoint$CacheKey",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::invoke::MethodType> methodType() { return call_method<"methodType", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<jdk::internal::foreign::abi::ABIDescriptor> abi() { return call_method<"abi", jni::ref<jdk::internal::foreign::abi::ABIDescriptor>>(); }
	jni::ref<java::util::List> argMoves() { return call_method<"argMoves", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> retMoves() { return call_method<"retMoves", jni::ref<java::util::List>>(); }
	jboolean needsReturnBuffer() { return call_method<"needsReturnBuffer", jboolean>(); }
	jint capturedStateMask() { return call_method<"capturedStateMask", jint>(); }
	jboolean needsTransition() { return call_method<"needsTransition", jboolean>(); }

protected:

	NativeEntryPoint_CacheKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_NATIVEENTRYPOINT_CACHEKEY
