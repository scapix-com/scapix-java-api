// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_DAEMONTHREADFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_DAEMONTHREADFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::monitor { class Monitor_DaemonThreadFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::monitor::Monitor_DaemonThreadFactory>
{
	static constexpr fixed_string class_name = "javax/management/monitor/Monitor$DaemonThreadFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::ThreadFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_DAEMONTHREADFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_DAEMONTHREADFACTORY)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_DAEMONTHREADFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/ThreadGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::monitor::Monitor_DaemonThreadFactory : public jni::object_base<"javax/management/monitor/Monitor$DaemonThreadFactory",
	java::lang::Object,
	java::util::concurrent::ThreadFactory>
{
public:

	static jni::ref<javax::management::monitor::Monitor_DaemonThreadFactory> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::management::monitor::Monitor_DaemonThreadFactory> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::ThreadGroup> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::ThreadGroup> getThreadGroup() { return call_method<"getThreadGroup", jni::ref<java::lang::ThreadGroup>>(); }
	jni::ref<java::lang::Thread> newThread(jni::ref<java::lang::Runnable> p1) { return call_method<"newThread", jni::ref<java::lang::Thread>>(p1); }

protected:

	Monitor_DaemonThreadFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_DAEMONTHREADFACTORY
