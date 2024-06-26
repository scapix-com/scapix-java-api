// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLES_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandles; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandles>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandles";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLES)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodHandles_Lookup.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/lang/reflect/Member.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::MethodHandles : public jni::object_base<"java/lang/invoke/MethodHandles",
	java::lang::Object>
{
public:

	using Lookup = MethodHandles_Lookup;

	static jni::ref<java::lang::invoke::MethodHandles_Lookup> lookup() { return call_static_method<"lookup", jni::ref<java::lang::invoke::MethodHandles_Lookup>>(); }
	static jni::ref<java::lang::invoke::MethodHandles_Lookup> publicLookup() { return call_static_method<"publicLookup", jni::ref<java::lang::invoke::MethodHandles_Lookup>>(); }
	static jni::ref<java::lang::reflect::Member> reflectAs(jni::ref<java::lang::Class> expected, jni::ref<java::lang::invoke::MethodHandle> target) { return call_static_method<"reflectAs", jni::ref<java::lang::reflect::Member>>(expected, target); }
	static jni::ref<java::lang::invoke::MethodHandle> arrayElementGetter(jni::ref<java::lang::Class> arrayClass) { return call_static_method<"arrayElementGetter", jni::ref<java::lang::invoke::MethodHandle>>(arrayClass); }
	static jni::ref<java::lang::invoke::MethodHandle> arrayElementSetter(jni::ref<java::lang::Class> arrayClass) { return call_static_method<"arrayElementSetter", jni::ref<java::lang::invoke::MethodHandle>>(arrayClass); }
	static jni::ref<java::lang::invoke::MethodHandle> spreadInvoker(jni::ref<java::lang::invoke::MethodType> type, jint leadingArgCount) { return call_static_method<"spreadInvoker", jni::ref<java::lang::invoke::MethodHandle>>(type, leadingArgCount); }
	static jni::ref<java::lang::invoke::MethodHandle> exactInvoker(jni::ref<java::lang::invoke::MethodType> type) { return call_static_method<"exactInvoker", jni::ref<java::lang::invoke::MethodHandle>>(type); }
	static jni::ref<java::lang::invoke::MethodHandle> invoker(jni::ref<java::lang::invoke::MethodType> type) { return call_static_method<"invoker", jni::ref<java::lang::invoke::MethodHandle>>(type); }
	static jni::ref<java::lang::invoke::MethodHandle> explicitCastArguments(jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::invoke::MethodType> newType) { return call_static_method<"explicitCastArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, newType); }
	static jni::ref<java::lang::invoke::MethodHandle> permuteArguments(jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::invoke::MethodType> newType, jni::ref<jni::array<jint>> reorder) { return call_static_method<"permuteArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, newType, reorder); }
	static jni::ref<java::lang::invoke::MethodHandle> constant(jni::ref<java::lang::Class> type, jni::ref<java::lang::Object> value) { return call_static_method<"constant", jni::ref<java::lang::invoke::MethodHandle>>(type, value); }
	static jni::ref<java::lang::invoke::MethodHandle> identity(jni::ref<java::lang::Class> type) { return call_static_method<"identity", jni::ref<java::lang::invoke::MethodHandle>>(type); }
	static jni::ref<java::lang::invoke::MethodHandle> insertArguments(jni::ref<java::lang::invoke::MethodHandle> target, jint pos, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"insertArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, pos, values); }
	static jni::ref<java::lang::invoke::MethodHandle> dropArguments(jni::ref<java::lang::invoke::MethodHandle> target, jint pos, jni::ref<java::util::List> valueTypes) { return call_static_method<"dropArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, pos, valueTypes); }
	static jni::ref<java::lang::invoke::MethodHandle> dropArguments(jni::ref<java::lang::invoke::MethodHandle> target, jint pos, jni::ref<jni::array<java::lang::Class>> valueTypes) { return call_static_method<"dropArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, pos, valueTypes); }
	static jni::ref<java::lang::invoke::MethodHandle> filterArguments(jni::ref<java::lang::invoke::MethodHandle> target, jint pos, jni::ref<jni::array<java::lang::invoke::MethodHandle>> filters) { return call_static_method<"filterArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, pos, filters); }
	static jni::ref<java::lang::invoke::MethodHandle> collectArguments(jni::ref<java::lang::invoke::MethodHandle> target, jint pos, jni::ref<java::lang::invoke::MethodHandle> filter) { return call_static_method<"collectArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, pos, filter); }
	static jni::ref<java::lang::invoke::MethodHandle> filterReturnValue(jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::invoke::MethodHandle> filter) { return call_static_method<"filterReturnValue", jni::ref<java::lang::invoke::MethodHandle>>(target, filter); }
	static jni::ref<java::lang::invoke::MethodHandle> foldArguments(jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::invoke::MethodHandle> combiner) { return call_static_method<"foldArguments", jni::ref<java::lang::invoke::MethodHandle>>(target, combiner); }
	static jni::ref<java::lang::invoke::MethodHandle> guardWithTest(jni::ref<java::lang::invoke::MethodHandle> test, jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::invoke::MethodHandle> fallback) { return call_static_method<"guardWithTest", jni::ref<java::lang::invoke::MethodHandle>>(test, target, fallback); }
	static jni::ref<java::lang::invoke::MethodHandle> catchException(jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::Class> exType, jni::ref<java::lang::invoke::MethodHandle> handler) { return call_static_method<"catchException", jni::ref<java::lang::invoke::MethodHandle>>(target, exType, handler); }
	static jni::ref<java::lang::invoke::MethodHandle> throwException(jni::ref<java::lang::Class> returnType, jni::ref<java::lang::Class> exType) { return call_static_method<"throwException", jni::ref<java::lang::invoke::MethodHandle>>(returnType, exType); }

protected:

	MethodHandles(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLES
