// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGINVOKEACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGINVOKEACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaLangInvokeAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaLangInvokeAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaLangInvokeAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGINVOKEACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGINVOKEACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGINVOKEACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/java/lang/invoke/VarHandle.h>
#include <scapix/java_api/java/nio/ByteOrder.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/jdk/internal/invoke/NativeEntryPoint.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaLangInvokeAccess : public jni::object_base<"jdk/internal/access/JavaLangInvokeAccess",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> newMemberName() { return call_method<"newMemberName", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> getName(jni::ref<java::lang::Object> p1) { return call_method<"getName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::invoke::MethodType> getMethodType(jni::ref<java::lang::Object> p1) { return call_method<"getMethodType", jni::ref<java::lang::invoke::MethodType>>(p1); }
	jni::ref<java::lang::String> getMethodDescriptor(jni::ref<java::lang::Object> p1) { return call_method<"getMethodDescriptor", jni::ref<java::lang::String>>(p1); }
	jboolean isNative(jni::ref<java::lang::Object> p1) { return call_method<"isNative", jboolean>(p1); }
	jni::ref<java::lang::Class> getDeclaringClass(jni::ref<java::lang::Object> p1) { return call_method<"getDeclaringClass", jni::ref<java::lang::Class>>(p1); }
	jni::ref<java::util::Map> generateHolderClasses(jni::ref<java::util::stream::Stream> p1) { return call_method<"generateHolderClasses", jni::ref<java::util::Map>>(p1); }
	jni::ref<java::lang::invoke::VarHandle> memoryAccessVarHandle(jni::ref<java::lang::Class> p1, jboolean p2, jlong p3, jni::ref<java::nio::ByteOrder> p4) { return call_method<"memoryAccessVarHandle", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3, p4); }
	jni::ref<java::lang::invoke::VarHandle> filterValue(jni::ref<java::lang::invoke::VarHandle> p1, jni::ref<java::lang::invoke::MethodHandle> p2, jni::ref<java::lang::invoke::MethodHandle> p3) { return call_method<"filterValue", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3); }
	jni::ref<java::lang::invoke::VarHandle> filterCoordinates(jni::ref<java::lang::invoke::VarHandle> p1, jint p2, jni::ref<jni::array<java::lang::invoke::MethodHandle>> p3) { return call_method<"filterCoordinates", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3); }
	jni::ref<java::lang::invoke::VarHandle> dropCoordinates(jni::ref<java::lang::invoke::VarHandle> p1, jint p2, jni::ref<jni::array<java::lang::Class>> p3) { return call_method<"dropCoordinates", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3); }
	jni::ref<java::lang::invoke::VarHandle> permuteCoordinates(jni::ref<java::lang::invoke::VarHandle> p1, jni::ref<java::util::List> p2, jni::ref<jni::array<jint>> p3) { return call_method<"permuteCoordinates", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3); }
	jni::ref<java::lang::invoke::VarHandle> collectCoordinates(jni::ref<java::lang::invoke::VarHandle> p1, jint p2, jni::ref<java::lang::invoke::MethodHandle> p3) { return call_method<"collectCoordinates", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3); }
	jni::ref<java::lang::invoke::VarHandle> insertCoordinates(jni::ref<java::lang::invoke::VarHandle> p1, jint p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"insertCoordinates", jni::ref<java::lang::invoke::VarHandle>>(p1, p2, p3); }
	jni::ref<java::lang::invoke::MethodHandle> nativeMethodHandle(jni::ref<jdk::internal::invoke::NativeEntryPoint> p1, jni::ref<java::lang::invoke::MethodHandle> p2) { return call_method<"nativeMethodHandle", jni::ref<java::lang::invoke::MethodHandle>>(p1, p2); }
	void ensureCustomized(jni::ref<java::lang::invoke::MethodHandle> p1) { return call_method<"ensureCustomized", void>(p1); }

protected:

	JavaLangInvokeAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVALANGINVOKEACCESS
