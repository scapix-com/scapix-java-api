// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_VARHANDLEDESC_KIND_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_VARHANDLEDESC_KIND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandle_VarHandleDesc_Kind; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandle_VarHandleDesc_Kind>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandle$VarHandleDesc$Kind";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_VARHANDLEDESC_KIND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_VARHANDLEDESC_KIND)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_VARHANDLEDESC_KIND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandle_VarHandleDesc_Kind : public jni::object_base<"java/lang/invoke/VarHandle$VarHandleDesc$Kind",
	java::lang::Enum>
{
public:

	static jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind> FIELD() { return get_static_field<"FIELD", jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind>>(); }
	static jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind> STATIC_FIELD() { return get_static_field<"STATIC_FIELD", jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind>>(); }
	static jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind> ARRAY() { return get_static_field<"ARRAY", jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind>>(); }

	static jni::ref<jni::array<java::lang::invoke::VarHandle_VarHandleDesc_Kind>> values() { return call_static_method<"values", jni::ref<jni::array<java::lang::invoke::VarHandle_VarHandleDesc_Kind>>>(); }
	static jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<java::lang::invoke::VarHandle_VarHandleDesc_Kind>>(name); }

protected:

	VarHandle_VarHandleDesc_Kind(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_VARHANDLEDESC_KIND
