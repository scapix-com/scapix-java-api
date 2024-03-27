// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/beans/beancontext/BeanContextEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans::beancontext { class BeanContextMembershipEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::beancontext::BeanContextMembershipEvent>
{
	static constexpr fixed_string class_name = "java/beans/beancontext/BeanContextMembershipEvent";
	using base_classes = std::tuple<scapix::java_api::java::beans::beancontext::BeanContextEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPEVENT)
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/beancontext/BeanContext.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::beancontext::BeanContextMembershipEvent : public jni::object_base<"java/beans/beancontext/BeanContextMembershipEvent",
	java::beans::beancontext::BeanContextEvent>
{
public:

	static jni::ref<java::beans::beancontext::BeanContextMembershipEvent> new_object(jni::ref<java::beans::beancontext::BeanContext> p1, jni::ref<java::util::Collection> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::beans::beancontext::BeanContextMembershipEvent> new_object(jni::ref<java::beans::beancontext::BeanContext> p1, jni::ref<jni::array<java::lang::Object>> p2) { return base_::new_object(p1, p2); }
	jint size() { return call_method<"size", jint>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }

protected:

	BeanContextMembershipEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXTMEMBERSHIPEVENT