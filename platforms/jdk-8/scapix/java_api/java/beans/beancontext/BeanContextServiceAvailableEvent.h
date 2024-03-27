// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/beans/beancontext/BeanContextEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEAVAILABLEEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEAVAILABLEEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans::beancontext { class BeanContextServiceAvailableEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::beancontext::BeanContextServiceAvailableEvent>
{
	static constexpr fixed_string class_name = "java/beans/beancontext/BeanContextServiceAvailableEvent";
	using base_classes = std::tuple<scapix::java_api::java::beans::beancontext::BeanContextEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEAVAILABLEEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEAVAILABLEEVENT)
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEAVAILABLEEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/beancontext/BeanContextServices.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::beancontext::BeanContextServiceAvailableEvent : public jni::object_base<"java/beans/beancontext/BeanContextServiceAvailableEvent",
	java::beans::beancontext::BeanContextEvent>
{
public:

	static jni::ref<java::beans::beancontext::BeanContextServiceAvailableEvent> new_object(jni::ref<java::beans::beancontext::BeanContextServices> p1, jni::ref<java::lang::Class> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::beans::beancontext::BeanContextServices> getSourceAsBeanContextServices() { return call_method<"getSourceAsBeanContextServices", jni::ref<java::beans::beancontext::BeanContextServices>>(); }
	jni::ref<java::lang::Class> getServiceClass() { return call_method<"getServiceClass", jni::ref<java::lang::Class>>(); }
	jni::ref<java::util::Iterator> getCurrentServiceSelectors() { return call_method<"getCurrentServiceSelectors", jni::ref<java::util::Iterator>>(); }

protected:

	BeanContextServiceAvailableEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTSERVICEAVAILABLEEVENT