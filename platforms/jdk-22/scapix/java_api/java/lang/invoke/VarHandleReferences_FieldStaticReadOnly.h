// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADONLY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADONLY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleReferences_FieldStaticReadOnly; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleReferences_FieldStaticReadOnly>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleReferences$FieldStaticReadOnly";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADONLY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADONLY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADONLY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleReferences_FieldStaticReadOnly : public jni::object_base<"java/lang/invoke/VarHandleReferences$FieldStaticReadOnly",
	java::lang::invoke::VarHandle>
{
public:

	jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadOnly> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadOnly>>(); }
	jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadOnly> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleReferences_FieldStaticReadOnly>>(); }
	jni::ref<java::util::Optional> describeConstable() { return call_method<"describeConstable", jni::ref<java::util::Optional>>(); }

protected:

	VarHandleReferences_FieldStaticReadOnly(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLEREFERENCES_FIELDSTATICREADONLY
