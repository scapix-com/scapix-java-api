// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleByteArrayAsInts_ByteArrayViewVarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASINTS_BYTEBUFFERHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASINTS_BYTEBUFFERHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleByteArrayAsInts_ByteBufferHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsInts_ByteBufferHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsInts_ByteArrayViewVarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASINTS_BYTEBUFFERHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASINTS_BYTEBUFFERHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASINTS_BYTEBUFFERHANDLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleByteArrayAsInts_ByteBufferHandle : public jni::object_base<"java/lang/invoke/VarHandleByteArrayAsInts$ByteBufferHandle",
	java::lang::invoke::VarHandleByteArrayAsInts_ByteArrayViewVarHandle>
{
public:

	jni::ref<java::lang::invoke::VarHandleByteArrayAsInts_ByteBufferHandle> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleByteArrayAsInts_ByteBufferHandle>>(); }
	jni::ref<java::lang::invoke::VarHandleByteArrayAsInts_ByteBufferHandle> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleByteArrayAsInts_ByteBufferHandle>>(); }

protected:

	VarHandleByteArrayAsInts_ByteBufferHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASINTS_BYTEBUFFERHANDLE
