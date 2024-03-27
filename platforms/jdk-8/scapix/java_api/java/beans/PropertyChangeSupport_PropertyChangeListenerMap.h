// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/beans/ChangeListenerMap.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGESUPPORT_PROPERTYCHANGELISTENERMAP_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGESUPPORT_PROPERTYCHANGELISTENERMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class PropertyChangeSupport_PropertyChangeListenerMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::PropertyChangeSupport_PropertyChangeListenerMap>
{
	static constexpr fixed_string class_name = "java/beans/PropertyChangeSupport$PropertyChangeListenerMap";
	using base_classes = std::tuple<scapix::java_api::java::beans::ChangeListenerMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGESUPPORT_PROPERTYCHANGELISTENERMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGESUPPORT_PROPERTYCHANGELISTENERMAP)
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGESUPPORT_PROPERTYCHANGELISTENERMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::beans::PropertyChangeSupport_PropertyChangeListenerMap : public jni::object_base<"java/beans/PropertyChangeSupport$PropertyChangeListenerMap",
	java::beans::ChangeListenerMap>
{
public:

	jni::ref<java::beans::PropertyChangeListener> extract(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"extract", jni::ref<java::beans::PropertyChangeListener>>(p1); }

protected:

	PropertyChangeSupport_PropertyChangeListenerMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGESUPPORT_PROPERTYCHANGELISTENERMAP
