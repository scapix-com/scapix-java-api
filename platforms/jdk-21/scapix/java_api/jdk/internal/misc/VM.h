// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::misc { class VM; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::misc::VM>
{
	static constexpr fixed_string class_name = "jdk/internal/misc/VM";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread_State.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/misc/VM_BufferPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::misc::VM : public jni::object_base<"jdk/internal/misc/VM",
	java::lang::Object>
{
public:

	using BufferPool = VM_BufferPool;

	static jni::ref<jdk::internal::misc::VM> new_object() { return base_::new_object(); }
	static void initLevel(jint value) { return call_static_method<"initLevel", void>(value); }
	static jint initLevel() { return call_static_method<"initLevel", jint>(); }
	static void awaitInitLevel(jint value) { return call_static_method<"awaitInitLevel", void>(value); }
	static jboolean isModuleSystemInited() { return call_static_method<"isModuleSystemInited", jboolean>(); }
	static void setJavaLangInvokeInited() { return call_static_method<"setJavaLangInvokeInited", void>(); }
	static jboolean isJavaLangInvokeInited() { return call_static_method<"isJavaLangInvokeInited", jboolean>(); }
	static jboolean isBooted() { return call_static_method<"isBooted", jboolean>(); }
	static void shutdown() { return call_static_method<"shutdown", void>(); }
	static jboolean isShutdown() { return call_static_method<"isShutdown", jboolean>(); }
	static jlong maxDirectMemory() { return call_static_method<"maxDirectMemory", jlong>(); }
	static jboolean isDirectMemoryPageAligned() { return call_static_method<"isDirectMemoryPageAligned", jboolean>(); }
	static jboolean isSupportedClassFileVersion(jint major, jint minor) { return call_static_method<"isSupportedClassFileVersion", jboolean>(major, minor); }
	static jboolean isSupportedModuleDescriptorVersion(jint major, jint minor) { return call_static_method<"isSupportedModuleDescriptorVersion", jboolean>(major, minor); }
	static jboolean isSystemDomainLoader(jni::ref<java::lang::ClassLoader> loader) { return call_static_method<"isSystemDomainLoader", jboolean>(loader); }
	static jni::ref<java::lang::String> getSavedProperty(jni::ref<java::lang::String> key) { return call_static_method<"getSavedProperty", jni::ref<java::lang::String>>(key); }
	static jni::ref<java::util::Map> getSavedProperties() { return call_static_method<"getSavedProperties", jni::ref<java::util::Map>>(); }
	static void saveProperties(jni::ref<java::util::Map> props) { return call_static_method<"saveProperties", void>(props); }
	static void initializeOSEnvironment() { return call_static_method<"initializeOSEnvironment", void>(); }
	static jint getFinalRefCount() { return call_static_method<"getFinalRefCount", jint>(); }
	static jint getPeakFinalRefCount() { return call_static_method<"getPeakFinalRefCount", jint>(); }
	static void addFinalRefCount(jint n) { return call_static_method<"addFinalRefCount", void>(n); }
	static jni::ref<java::lang::Thread_State> toThreadState(jint threadStatus) { return call_static_method<"toThreadState", jni::ref<java::lang::Thread_State>>(threadStatus); }
	static jni::ref<java::lang::ClassLoader> latestUserDefinedLoader() { return call_static_method<"latestUserDefinedLoader", jni::ref<java::lang::ClassLoader>>(); }
	static jboolean isSetUID() { return call_static_method<"isSetUID", jboolean>(); }
	static jlong getuid() { return call_static_method<"getuid", jlong>(); }
	static jlong geteuid() { return call_static_method<"geteuid", jlong>(); }
	static jlong getgid() { return call_static_method<"getgid", jlong>(); }
	static jlong getegid() { return call_static_method<"getegid", jlong>(); }
	static jlong getNanoTimeAdjustment(jlong p1) { return call_static_method<"getNanoTimeAdjustment", jlong>(p1); }
	static jni::ref<jni::array<java::lang::String>> getRuntimeArguments() { return call_static_method<"getRuntimeArguments", jni::ref<jni::array<java::lang::String>>>(); }
	static jni::ref<java::util::List> getBufferPools() { return call_static_method<"getBufferPools", jni::ref<java::util::List>>(); }

protected:

	VM(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MISC_VM
