// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/management/ThreadMXBean.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_THREADMXBEAN_FWD
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_THREADMXBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::management { class ThreadMXBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::management::ThreadMXBean>
{
	static constexpr fixed_string class_name = "com/sun/management/ThreadMXBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::management::ThreadMXBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_THREADMXBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_THREADMXBEAN)
#define SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_THREADMXBEAN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::management::ThreadMXBean : public jni::object_base<"com/sun/management/ThreadMXBean",
	java::lang::Object,
	java::lang::management::ThreadMXBean>
{
public:

	jni::ref<jni::array<jlong>> getThreadCpuTime(jni::ref<jni::array<jlong>> p1) { return call_method<"getThreadCpuTime", jni::ref<jni::array<jlong>>>(p1); }
	jni::ref<jni::array<jlong>> getThreadUserTime(jni::ref<jni::array<jlong>> p1) { return call_method<"getThreadUserTime", jni::ref<jni::array<jlong>>>(p1); }
	jlong getThreadAllocatedBytes(jlong p1) { return call_method<"getThreadAllocatedBytes", jlong>(p1); }
	jni::ref<jni::array<jlong>> getThreadAllocatedBytes(jni::ref<jni::array<jlong>> p1) { return call_method<"getThreadAllocatedBytes", jni::ref<jni::array<jlong>>>(p1); }
	jboolean isThreadAllocatedMemorySupported() { return call_method<"isThreadAllocatedMemorySupported", jboolean>(); }
	jboolean isThreadAllocatedMemoryEnabled() { return call_method<"isThreadAllocatedMemoryEnabled", jboolean>(); }
	void setThreadAllocatedMemoryEnabled(jboolean p1) { return call_method<"setThreadAllocatedMemoryEnabled", void>(p1); }

protected:

	ThreadMXBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_MANAGEMENT_THREADMXBEAN
