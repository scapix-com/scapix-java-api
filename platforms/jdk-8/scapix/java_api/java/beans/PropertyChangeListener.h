// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class PropertyChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::PropertyChangeListener>
{
	static constexpr fixed_string class_name = "java/beans/PropertyChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENER)
#define SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::PropertyChangeListener : public jni::object_base<"java/beans/PropertyChangeListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	PropertyChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_PROPERTYCHANGELISTENER