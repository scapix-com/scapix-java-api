// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_FWD
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::invoke::util { class ValueConversions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::invoke::util::ValueConversions>
{
	static constexpr fixed_string class_name = "sun/invoke/util/ValueConversions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS)
#define SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/sun/invoke/util/Wrapper.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::invoke::util::ValueConversions : public jni::object_base<"sun/invoke/util/ValueConversions",
	java::lang::Object>
{
public:

	static jni::ref<sun::invoke::util::ValueConversions> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::invoke::MethodHandle> unboxExact(jni::ref<sun::invoke::util::Wrapper> type) { return call_static_method<"unboxExact", jni::ref<java::lang::invoke::MethodHandle>>(type); }
	static jni::ref<java::lang::invoke::MethodHandle> unboxExact(jni::ref<sun::invoke::util::Wrapper> type, jboolean throwNPE) { return call_static_method<"unboxExact", jni::ref<java::lang::invoke::MethodHandle>>(type, throwNPE); }
	static jni::ref<java::lang::invoke::MethodHandle> unboxWiden(jni::ref<sun::invoke::util::Wrapper> type) { return call_static_method<"unboxWiden", jni::ref<java::lang::invoke::MethodHandle>>(type); }
	static jni::ref<java::lang::invoke::MethodHandle> unboxCast(jni::ref<sun::invoke::util::Wrapper> type) { return call_static_method<"unboxCast", jni::ref<java::lang::invoke::MethodHandle>>(type); }
	static jni::ref<java::lang::Number> primitiveConversion(jni::ref<sun::invoke::util::Wrapper> wrap, jni::ref<java::lang::Object> x, jboolean cast) { return call_static_method<"primitiveConversion", jni::ref<java::lang::Number>>(wrap, x, cast); }
	static jint widenSubword(jni::ref<java::lang::Object> x) { return call_static_method<"widenSubword", jint>(x); }
	static jni::ref<java::lang::invoke::MethodHandle> boxExact(jni::ref<sun::invoke::util::Wrapper> wrap) { return call_static_method<"boxExact", jni::ref<java::lang::invoke::MethodHandle>>(wrap); }
	static jni::ref<java::lang::invoke::MethodHandle> ignore() { return call_static_method<"ignore", jni::ref<java::lang::invoke::MethodHandle>>(); }
	static jni::ref<java::lang::invoke::MethodHandle> convertPrimitive(jni::ref<sun::invoke::util::Wrapper> wsrc, jni::ref<sun::invoke::util::Wrapper> wdst) { return call_static_method<"convertPrimitive", jni::ref<java::lang::invoke::MethodHandle>>(wsrc, wdst); }
	static jni::ref<java::lang::invoke::MethodHandle> convertPrimitive(jni::ref<java::lang::Class> src, jni::ref<java::lang::Class> dst) { return call_static_method<"convertPrimitive", jni::ref<java::lang::invoke::MethodHandle>>(src, dst); }

protected:

	ValueConversions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_INVOKE_UTIL_VALUECONVERSIONS
