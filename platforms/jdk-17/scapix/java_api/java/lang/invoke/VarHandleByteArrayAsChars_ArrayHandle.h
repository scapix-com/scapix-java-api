// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleByteArrayAsChars_ByteArrayViewVarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_ARRAYHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_ARRAYHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleByteArrayAsChars_ArrayHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsChars_ArrayHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleByteArrayAsChars$ArrayHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsChars_ByteArrayViewVarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_ARRAYHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_ARRAYHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_ARRAYHANDLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleByteArrayAsChars_ArrayHandle : public jni::object_base<"java/lang/invoke/VarHandleByteArrayAsChars$ArrayHandle",
	java::lang::invoke::VarHandleByteArrayAsChars_ByteArrayViewVarHandle>
{
public:

	jni::ref<java::lang::invoke::VarHandleByteArrayAsChars_ArrayHandle> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleByteArrayAsChars_ArrayHandle>>(); }
	jni::ref<java::lang::invoke::VarHandleByteArrayAsChars_ArrayHandle> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleByteArrayAsChars_ArrayHandle>>(); }

protected:

	VarHandleByteArrayAsChars_ArrayHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_ARRAYHANDLE