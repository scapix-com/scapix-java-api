// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/DirectMethodHandleDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESCIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESCIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class DirectMethodHandleDescImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::DirectMethodHandleDescImpl>
{
	static constexpr fixed_string class_name = "java/lang/constant/DirectMethodHandleDescImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::constant::DirectMethodHandleDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESCIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESCIMPL)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESCIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/constant/DirectMethodHandleDesc_Kind.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::constant::DirectMethodHandleDescImpl : public jni::object_base<"java/lang/constant/DirectMethodHandleDescImpl",
	java::lang::Object,
	java::lang::constant::DirectMethodHandleDesc>
{
public:

	jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind> kind() { return call_method<"kind", jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind>>(); }
	jint refKind() { return call_method<"refKind", jint>(); }
	jboolean isOwnerInterface() { return call_method<"isOwnerInterface", jboolean>(); }
	jni::ref<java::lang::constant::ClassDesc> owner() { return call_method<"owner", jni::ref<java::lang::constant::ClassDesc>>(); }
	jni::ref<java::lang::String> methodName() { return call_method<"methodName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::constant::MethodTypeDesc> invocationType() { return call_method<"invocationType", jni::ref<java::lang::constant::MethodTypeDesc>>(); }
	jni::ref<java::lang::String> lookupDescriptor() { return call_method<"lookupDescriptor", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::invoke::MethodHandle> resolveConstantDesc(jni::ref<java::lang::invoke::MethodHandles_Lookup> lookup) { return call_method<"resolveConstantDesc", jni::ref<java::lang::invoke::MethodHandle>>(lookup); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DirectMethodHandleDescImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESCIMPL