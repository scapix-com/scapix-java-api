// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleByteArrayAsChars_ByteArrayViewVarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_BYTEBUFFERHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_BYTEBUFFERHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleByteArrayAsChars_ByteBufferHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsChars_ByteBufferHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleByteArrayAsChars_ByteArrayViewVarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_BYTEBUFFERHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_BYTEBUFFERHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_BYTEBUFFERHANDLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleByteArrayAsChars_ByteBufferHandle : public jni::object_base<"java/lang/invoke/VarHandleByteArrayAsChars$ByteBufferHandle",
	java::lang::invoke::VarHandleByteArrayAsChars_ByteArrayViewVarHandle>
{
public:


protected:

	VarHandleByteArrayAsChars_ByteBufferHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEBYTEARRAYASCHARS_BYTEBUFFERHANDLE
