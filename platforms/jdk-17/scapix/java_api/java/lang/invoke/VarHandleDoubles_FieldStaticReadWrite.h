// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleDoubles_FieldStaticReadOnly.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADWRITE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADWRITE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleDoubles_FieldStaticReadWrite; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleDoubles_FieldStaticReadWrite>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleDoubles$FieldStaticReadWrite";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleDoubles_FieldStaticReadOnly>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADWRITE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADWRITE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADWRITE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleDoubles_FieldStaticReadWrite : public jni::object_base<"java/lang/invoke/VarHandleDoubles$FieldStaticReadWrite",
	java::lang::invoke::VarHandleDoubles_FieldStaticReadOnly>
{
public:

	jni::ref<java::lang::invoke::VarHandleDoubles_FieldStaticReadWrite> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleDoubles_FieldStaticReadWrite>>(); }
	jni::ref<java::lang::invoke::VarHandleDoubles_FieldStaticReadWrite> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleDoubles_FieldStaticReadWrite>>(); }

protected:

	VarHandleDoubles_FieldStaticReadWrite(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEDOUBLES_FIELDSTATICREADWRITE
