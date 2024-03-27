// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventListenerProxy.h>
#include <scapix/java_api/java/beans/VetoableChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_VETOABLECHANGELISTENERPROXY_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_VETOABLECHANGELISTENERPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class VetoableChangeListenerProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::VetoableChangeListenerProxy>
{
	static constexpr fixed_string class_name = "java/beans/VetoableChangeListenerProxy";
	using base_classes = std::tuple<scapix::java_api::java::util::EventListenerProxy, scapix::java_api::java::beans::VetoableChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_VETOABLECHANGELISTENERPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_VETOABLECHANGELISTENERPROXY)
#define SCAPIX_JAVA_API_JAVA_BEANS_VETOABLECHANGELISTENERPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::VetoableChangeListenerProxy : public jni::object_base<"java/beans/VetoableChangeListenerProxy",
	java::util::EventListenerProxy,
	java::beans::VetoableChangeListener>
{
public:

	static jni::ref<java::beans::VetoableChangeListenerProxy> new_object(jni::ref<java::lang::String> p1, jni::ref<java::beans::VetoableChangeListener> p2) { return base_::new_object(p1, p2); }
	void vetoableChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"vetoableChange", void>(p1); }
	jni::ref<java::lang::String> getPropertyName() { return call_method<"getPropertyName", jni::ref<java::lang::String>>(); }

protected:

	VetoableChangeListenerProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_VETOABLECHANGELISTENERPROXY
