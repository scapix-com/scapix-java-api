// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleFloats_FieldInstanceReadOnly.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEFLOATS_FIELDINSTANCEREADWRITE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEFLOATS_FIELDINSTANCEREADWRITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleFloats_FieldInstanceReadWrite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleFloats_FieldInstanceReadWrite>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleFloats$FieldInstanceReadWrite";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleFloats_FieldInstanceReadOnly>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEFLOATS_FIELDINSTANCEREADWRITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEFLOATS_FIELDINSTANCEREADWRITE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEFLOATS_FIELDINSTANCEREADWRITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleFloats_FieldInstanceReadWrite : public jni::object_base<"java/lang/invoke/VarHandleFloats$FieldInstanceReadWrite",
	java::lang::invoke::VarHandleFloats_FieldInstanceReadOnly>
{
public:

	jni::ref<java::lang::invoke::VarHandleFloats_FieldInstanceReadWrite> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleFloats_FieldInstanceReadWrite>>(); }
	jni::ref<java::lang::invoke::VarHandleFloats_FieldInstanceReadWrite> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleFloats_FieldInstanceReadWrite>>(); }

protected:

	VarHandleFloats_FieldInstanceReadWrite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEFLOATS_FIELDINSTANCEREADWRITE
