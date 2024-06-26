// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventListenerProxy.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class PropertyChangeListenerProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::PropertyChangeListenerProxy>
{
	static constexpr fixed_string class_name = "java/beans/PropertyChangeListenerProxy";
	using base_classes = std::tuple<scapix::java_api::java::util::EventListenerProxy, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY)
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::PropertyChangeListenerProxy : public jni::object_base<"java/beans/PropertyChangeListenerProxy",
	java::util::EventListenerProxy,
	java::beans::PropertyChangeListener>
{
public:

	static jni::ref<java::beans::PropertyChangeListenerProxy> new_object(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return base_::new_object(p1, p2); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	jni::ref<java::lang::String> getPropertyName() { return call_method<"getPropertyName", jni::ref<java::lang::String>>(); }

protected:

	PropertyChangeListenerProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENERPROXY
