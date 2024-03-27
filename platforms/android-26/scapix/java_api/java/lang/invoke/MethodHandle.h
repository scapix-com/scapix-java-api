// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::MethodHandle : public jni::object_base<"java/lang/invoke/MethodHandle",
	java::lang::Object>
{
public:

	jni::ref<java::lang::invoke::MethodType> type() { return call_method<"type", jni::ref<java::lang::invoke::MethodType>>(); }
	jni::ref<java::lang::Object> invokeExact(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"invokeExact", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> invoke(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> invokeWithArguments(jni::ref<jni::array<java::lang::Object>> arguments) { return call_method<"invokeWithArguments", jni::ref<java::lang::Object>>(arguments); }
	jni::ref<java::lang::Object> invokeWithArguments(jni::ref<java::util::List> arguments) { return call_method<"invokeWithArguments", jni::ref<java::lang::Object>>(arguments); }
	jni::ref<java::lang::invoke::MethodHandle> asType(jni::ref<java::lang::invoke::MethodType> newType) { return call_method<"asType", jni::ref<java::lang::invoke::MethodHandle>>(newType); }
	jni::ref<java::lang::invoke::MethodHandle> asSpreader(jni::ref<java::lang::Class> arrayType, jint arrayLength) { return call_method<"asSpreader", jni::ref<java::lang::invoke::MethodHandle>>(arrayType, arrayLength); }
	jni::ref<java::lang::invoke::MethodHandle> asCollector(jni::ref<java::lang::Class> arrayType, jint arrayLength) { return call_method<"asCollector", jni::ref<java::lang::invoke::MethodHandle>>(arrayType, arrayLength); }
	jni::ref<java::lang::invoke::MethodHandle> asVarargsCollector(jni::ref<java::lang::Class> arrayType) { return call_method<"asVarargsCollector", jni::ref<java::lang::invoke::MethodHandle>>(arrayType); }
	jboolean isVarargsCollector() { return call_method<"isVarargsCollector", jboolean>(); }
	jni::ref<java::lang::invoke::MethodHandle> asFixedArity() { return call_method<"asFixedArity", jni::ref<java::lang::invoke::MethodHandle>>(); }
	jni::ref<java::lang::invoke::MethodHandle> bindTo(jni::ref<java::lang::Object> x) { return call_method<"bindTo", jni::ref<java::lang::invoke::MethodHandle>>(x); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MethodHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLE
