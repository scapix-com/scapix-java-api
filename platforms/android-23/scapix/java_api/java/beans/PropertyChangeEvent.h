// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGEEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class PropertyChangeEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::PropertyChangeEvent>
{
	static constexpr fixed_string class_name = "java/beans/PropertyChangeEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGEEVENT)
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::PropertyChangeEvent : public jni::object_base<"java/beans/PropertyChangeEvent",
	java::util::EventObject>
{
public:

	static jni::ref<java::beans::PropertyChangeEvent> new_object(jni::ref<java::lang::Object> source, jni::ref<java::lang::String> propertyName, jni::ref<java::lang::Object> oldValue, jni::ref<java::lang::Object> newValue) { return base_::new_object(source, propertyName, oldValue, newValue); }
	jni::ref<java::lang::String> getPropertyName() { return call_method<"getPropertyName", jni::ref<java::lang::String>>(); }
	void setPropagationId(jni::ref<java::lang::Object> propagationId) { return call_method<"setPropagationId", void>(propagationId); }
	jni::ref<java::lang::Object> getPropagationId() { return call_method<"getPropagationId", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getOldValue() { return call_method<"getOldValue", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getNewValue() { return call_method<"getNewValue", jni::ref<java::lang::Object>>(); }

protected:

	PropertyChangeEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGEEVENT
