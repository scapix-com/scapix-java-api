// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleReferences_FieldStaticReadOnly.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADWRITE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADWRITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleReferences_FieldStaticReadWrite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleReferences_FieldStaticReadWrite>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleReferences$FieldStaticReadWrite";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleReferences_FieldStaticReadOnly>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADWRITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADWRITE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADWRITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleReferences_FieldStaticReadWrite : public jni::object_base<"java/lang/invoke/VarHandleReferences$FieldStaticReadWrite",
	java::lang::invoke::VarHandleReferences_FieldStaticReadOnly>
{
public:

	jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadWrite> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadWrite>>(); }
	jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadWrite> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadWrite>>(); }

protected:

	VarHandleReferences_FieldStaticReadWrite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADWRITE
