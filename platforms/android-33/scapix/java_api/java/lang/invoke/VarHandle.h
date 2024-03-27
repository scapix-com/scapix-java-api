// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/lang/invoke/VarHandle_AccessMode.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::VarHandle : public jni::object_base<"java/lang/invoke/VarHandle",
	java::lang::Object>
{
public:

	using AccessMode = VarHandle_AccessMode;

	jni::ref<java::lang::Object> get(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	void set(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"set", void>(p1); }
	jni::ref<java::lang::Object> getVolatile(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getVolatile", jni::ref<java::lang::Object>>(p1); }
	void setVolatile(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"setVolatile", void>(p1); }
	jni::ref<java::lang::Object> getOpaque(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getOpaque", jni::ref<java::lang::Object>>(p1); }
	void setOpaque(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"setOpaque", void>(p1); }
	jni::ref<java::lang::Object> getAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAcquire", jni::ref<java::lang::Object>>(p1); }
	void setRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"setRelease", void>(p1); }
	jboolean compareAndSet(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"compareAndSet", jboolean>(p1); }
	jni::ref<java::lang::Object> compareAndExchange(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"compareAndExchange", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> compareAndExchangeAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"compareAndExchangeAcquire", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> compareAndExchangeRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"compareAndExchangeRelease", jni::ref<java::lang::Object>>(p1); }
	jboolean weakCompareAndSetPlain(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"weakCompareAndSetPlain", jboolean>(p1); }
	jboolean weakCompareAndSet(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"weakCompareAndSet", jboolean>(p1); }
	jboolean weakCompareAndSetAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"weakCompareAndSetAcquire", jboolean>(p1); }
	jboolean weakCompareAndSetRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"weakCompareAndSetRelease", jboolean>(p1); }
	jni::ref<java::lang::Object> getAndSet(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndSet", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndSetAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndSetAcquire", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndSetRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndSetRelease", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndAdd(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndAdd", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndAddAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndAddAcquire", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndAddRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndAddRelease", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseOr(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseOr", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseOrAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseOrAcquire", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseOrRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseOrRelease", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseAnd(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseAnd", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseAndAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseAndAcquire", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseAndRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseAndRelease", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseXor(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseXor", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseXorAcquire(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseXorAcquire", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAndBitwiseXorRelease(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"getAndBitwiseXorRelease", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Class> varType() { return call_method<"varType", jni::ref<java::lang::Class>>(); }
	jni::ref<java::util::List> coordinateTypes() { return call_method<"coordinateTypes", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::invoke::MethodType> accessModeType(jni::ref<java::lang::invoke::VarHandle_AccessMode> accessMode) { return call_method<"accessModeType", jni::ref<java::lang::invoke::MethodType>>(accessMode); }
	jboolean isAccessModeSupported(jni::ref<java::lang::invoke::VarHandle_AccessMode> accessMode) { return call_method<"isAccessModeSupported", jboolean>(accessMode); }
	jni::ref<java::lang::invoke::MethodHandle> toMethodHandle(jni::ref<java::lang::invoke::VarHandle_AccessMode> accessMode) { return call_method<"toMethodHandle", jni::ref<java::lang::invoke::MethodHandle>>(accessMode); }
	static void fullFence() { return call_static_method<"fullFence", void>(); }
	static void acquireFence() { return call_static_method<"acquireFence", void>(); }
	static void releaseFence() { return call_static_method<"releaseFence", void>(); }
	static void loadLoadFence() { return call_static_method<"loadLoadFence", void>(); }
	static void storeStoreFence() { return call_static_method<"storeStoreFence", void>(); }

protected:

	VarHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE