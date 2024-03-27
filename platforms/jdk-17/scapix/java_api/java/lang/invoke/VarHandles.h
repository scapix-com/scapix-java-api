// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLES_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandles; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandles>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandles";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLES)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/VarHandle.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandles : public jni::object_base<"java/lang/invoke/VarHandles",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::invoke::VarHandle> filterValue(jni::ref<java::lang::invoke::VarHandle> target, jni::ref<java::lang::invoke::MethodHandle> filterToTarget, jni::ref<java::lang::invoke::MethodHandle> filterFromTarget) { return call_static_method<"filterValue", jni::ref<java::lang::invoke::VarHandle>>(target, filterToTarget, filterFromTarget); }
	static jni::ref<java::lang::invoke::VarHandle> filterCoordinates(jni::ref<java::lang::invoke::VarHandle> target, jint pos, jni::ref<jni::array<java::lang::invoke::MethodHandle>> filters) { return call_static_method<"filterCoordinates", jni::ref<java::lang::invoke::VarHandle>>(target, pos, filters); }
	static jni::ref<java::lang::invoke::VarHandle> insertCoordinates(jni::ref<java::lang::invoke::VarHandle> target, jint pos, jni::ref<jni::array<java::lang::Object>> values) { return call_static_method<"insertCoordinates", jni::ref<java::lang::invoke::VarHandle>>(target, pos, values); }
	static jni::ref<java::lang::invoke::VarHandle> permuteCoordinates(jni::ref<java::lang::invoke::VarHandle> target, jni::ref<java::util::List> newCoordinates, jni::ref<jni::array<jint>> reorder) { return call_static_method<"permuteCoordinates", jni::ref<java::lang::invoke::VarHandle>>(target, newCoordinates, reorder); }
	static jni::ref<java::lang::invoke::VarHandle> collectCoordinates(jni::ref<java::lang::invoke::VarHandle> target, jint pos, jni::ref<java::lang::invoke::MethodHandle> filter) { return call_static_method<"collectCoordinates", jni::ref<java::lang::invoke::VarHandle>>(target, pos, filter); }
	static jni::ref<java::lang::invoke::VarHandle> dropCoordinates(jni::ref<java::lang::invoke::VarHandle> target, jint pos, jni::ref<jni::array<java::lang::Class>> valueTypes) { return call_static_method<"dropCoordinates", jni::ref<java::lang::invoke::VarHandle>>(target, pos, valueTypes); }

protected:

	VarHandles(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLES