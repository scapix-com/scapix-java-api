// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VERIFYTYPE_FWD
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VERIFYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::invoke::util { class VerifyType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::invoke::util::VerifyType>
{
	static constexpr fixed_string class_name = "sun/invoke/util/VerifyType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VERIFYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VERIFYTYPE)
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VERIFYTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::invoke::util::VerifyType : public jni::object_base<"sun/invoke/util/VerifyType",
	java::lang::Object>
{
public:

	static jboolean isNullConversion(jni::ref<java::lang::Class> src, jni::ref<java::lang::Class> dst, jboolean keepInterfaces) { return call_static_method<"isNullConversion", jboolean>(src, dst, keepInterfaces); }
	static jboolean isNullReferenceConversion(jni::ref<java::lang::Class> src, jni::ref<java::lang::Class> dst) { return call_static_method<"isNullReferenceConversion", jboolean>(src, dst); }
	static jboolean isNullType(jni::ref<java::lang::Class> type) { return call_static_method<"isNullType", jboolean>(type); }
	static jboolean isNullConversion(jni::ref<java::lang::invoke::MethodType> call, jni::ref<java::lang::invoke::MethodType> recv, jboolean keepInterfaces) { return call_static_method<"isNullConversion", jboolean>(call, recv, keepInterfaces); }
	static jint canPassUnchecked(jni::ref<java::lang::Class> src, jni::ref<java::lang::Class> dst) { return call_static_method<"canPassUnchecked", jint>(src, dst); }
	static jboolean isSpreadArgType(jni::ref<java::lang::Class> spreadArg) { return call_static_method<"isSpreadArgType", jboolean>(spreadArg); }
	static jni::ref<java::lang::Class> spreadArgElementType(jni::ref<java::lang::Class> spreadArg, jint i) { return call_static_method<"spreadArgElementType", jni::ref<java::lang::Class>>(spreadArg, i); }

protected:

	VerifyType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VERIFYTYPE
