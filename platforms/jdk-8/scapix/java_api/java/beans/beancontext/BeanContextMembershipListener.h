// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/EventListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPLISTENER_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans::beancontext { class BeanContextMembershipListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::beancontext::BeanContextMembershipListener>
{
	static constexpr fixed_string class_name = "java/beans/beancontext/BeanContextMembershipListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::EventListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPLISTENER)
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/beancontext/BeanContextMembershipEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::beancontext::BeanContextMembershipListener : public jni::object_base<"java/beans/beancontext/BeanContextMembershipListener",
	java::lang::Object,
	java::util::EventListener>
{
public:

	void childrenAdded(jni::ref<java::beans::beancontext::BeanContextMembershipEvent> p1) { return call_method<"childrenAdded", void>(p1); }
	void childrenRemoved(jni::ref<java::beans::beancontext::BeanContextMembershipEvent> p1) { return call_method<"childrenRemoved", void>(p1); }

protected:

	BeanContextMembershipListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPLISTENER
