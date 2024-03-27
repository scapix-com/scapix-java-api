// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/constant/MethodHandleDesc.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESC_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::constant { class DirectMethodHandleDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::constant::DirectMethodHandleDesc>
{
	static constexpr fixed_string class_name = "java/lang/constant/DirectMethodHandleDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::constant::MethodHandleDesc>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESC)
#define SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/lang/constant/DirectMethodHandleDesc_Kind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::constant::DirectMethodHandleDesc : public jni::object_base<"java/lang/constant/DirectMethodHandleDesc",
	java::lang::Object,
	java::lang::constant::MethodHandleDesc>
{
public:

	using Kind = DirectMethodHandleDesc_Kind;

	jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind> kind() { return call_method<"kind", jni::ref<java::lang::constant::DirectMethodHandleDesc_Kind>>(); }
	jint refKind() { return call_method<"refKind", jint>(); }
	jboolean isOwnerInterface() { return call_method<"isOwnerInterface", jboolean>(); }
	jni::ref<java::lang::constant::ClassDesc> owner() { return call_method<"owner", jni::ref<java::lang::constant::ClassDesc>>(); }
	jni::ref<java::lang::String> methodName() { return call_method<"methodName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> lookupDescriptor() { return call_method<"lookupDescriptor", jni::ref<java::lang::String>>(); }

protected:

	DirectMethodHandleDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CONSTANT_DIRECTMETHODHANDLEDESC
