// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/RunnableFuture.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SWINGWORKER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGWORKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SwingWorker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SwingWorker>
{
	static constexpr fixed_string class_name = "javax/swing/SwingWorker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::RunnableFuture>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGWORKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SWINGWORKER)
#define SCAPIX_JAVA_API_JAVAX_SWING_SWINGWORKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/beans/PropertyChangeSupport.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#include <scapix/java_api/javax/swing/SwingWorker_StateValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::SwingWorker : public jni::object_base<"javax/swing/SwingWorker",
	java::lang::Object,
	java::util::concurrent::RunnableFuture>
{
public:

	using StateValue = SwingWorker_StateValue;

	static jni::ref<javax::swing::SwingWorker> new_object() { return base_::new_object(); }
	void run() { return call_method<"run", void>(); }
	jint getProgress() { return call_method<"getProgress", jint>(); }
	void execute() { return call_method<"execute", void>(); }
	jboolean cancel(jboolean p1) { return call_method<"cancel", jboolean>(p1); }
	jboolean isCancelled() { return call_method<"isCancelled", jboolean>(); }
	jboolean isDone() { return call_method<"isDone", jboolean>(); }
	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> get(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_method<"get", jni::ref<java::lang::Object>>(p1, p2); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	void firePropertyChange(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"firePropertyChange", void>(p1, p2, p3); }
	jni::ref<java::beans::PropertyChangeSupport> getPropertyChangeSupport() { return call_method<"getPropertyChangeSupport", jni::ref<java::beans::PropertyChangeSupport>>(); }
	jni::ref<javax::swing::SwingWorker_StateValue> getState() { return call_method<"getState", jni::ref<javax::swing::SwingWorker_StateValue>>(); }

protected:

	SwingWorker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SWINGWORKER
