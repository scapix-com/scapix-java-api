// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_SCHEDULERTASK_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_SCHEDULERTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::monitor { class Monitor_SchedulerTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::monitor::Monitor_SchedulerTask>
{
	static constexpr fixed_string class_name = "javax/management/monitor/Monitor$SchedulerTask";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_SCHEDULERTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_SCHEDULERTASK)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_SCHEDULERTASK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/monitor/Monitor.h>
#include <scapix/java_api/javax/management/monitor/Monitor_MonitorTask.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::monitor::Monitor_SchedulerTask : public jni::object_base<"javax/management/monitor/Monitor$SchedulerTask",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	static jni::ref<javax::management::monitor::Monitor_SchedulerTask> new_object(jni::ref<javax::management::monitor::Monitor> p1) { return base_::new_object(p1); }
	void setMonitorTask(jni::ref<javax::management::monitor::Monitor_MonitorTask> p1) { return call_method<"setMonitorTask", void>(p1); }
	void run() { return call_method<"run", void>(); }

protected:

	Monitor_SchedulerTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MONITOR_MONITOR_SCHEDULERTASK
