// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleInts_FieldInstanceReadOnly.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEINTS_FIELDINSTANCEREADWRITE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEINTS_FIELDINSTANCEREADWRITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleInts_FieldInstanceReadWrite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleInts_FieldInstanceReadWrite>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleInts$FieldInstanceReadWrite";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleInts_FieldInstanceReadOnly>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEINTS_FIELDINSTANCEREADWRITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEINTS_FIELDINSTANCEREADWRITE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEINTS_FIELDINSTANCEREADWRITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleInts_FieldInstanceReadWrite : public jni::object_base<"java/lang/invoke/VarHandleInts$FieldInstanceReadWrite",
	java::lang::invoke::VarHandleInts_FieldInstanceReadOnly>
{
public:

	jni::ref<java::lang::invoke::VarHandleInts_FieldInstanceReadWrite> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleInts_FieldInstanceReadWrite>>(); }
	jni::ref<java::lang::invoke::VarHandleInts_FieldInstanceReadWrite> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleInts_FieldInstanceReadWrite>>(); }

protected:

	VarHandleInts_FieldInstanceReadWrite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEINTS_FIELDINSTANCEREADWRITE
