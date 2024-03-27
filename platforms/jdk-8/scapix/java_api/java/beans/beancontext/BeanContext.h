// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/beans/beancontext/BeanContextChild.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/beans/DesignMode.h>
#include <scapix/java_api/java/beans/Visibility.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans::beancontext { class BeanContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::beancontext::BeanContext>
{
	static constexpr fixed_string class_name = "java/beans/beancontext/BeanContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::beans::beancontext::BeanContextChild, scapix::java_api::java::util::Collection, scapix::java_api::java::beans::DesignMode, scapix::java_api::java::beans::Visibility>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXT)
#define SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/beancontext/BeanContextMembershipListener.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::beancontext::BeanContext : public jni::object_base<"java/beans/beancontext/BeanContext",
	java::lang::Object,
	java::beans::beancontext::BeanContextChild,
	java::util::Collection,
	java::beans::DesignMode,
	java::beans::Visibility>
{
public:

	static jni::ref<java::lang::Object> globalHierarchyLock() { return get_static_field<"globalHierarchyLock", jni::ref<java::lang::Object>>(); }

	jni::ref<java::lang::Object> instantiateChild(jni::ref<java::lang::String> p1) { return call_method<"instantiateChild", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::io::InputStream> getResourceAsStream(jni::ref<java::lang::String> p1, jni::ref<java::beans::beancontext::BeanContextChild> p2) { return call_method<"getResourceAsStream", jni::ref<java::io::InputStream>>(p1, p2); }
	jni::ref<java::net::URL> getResource(jni::ref<java::lang::String> p1, jni::ref<java::beans::beancontext::BeanContextChild> p2) { return call_method<"getResource", jni::ref<java::net::URL>>(p1, p2); }
	void addBeanContextMembershipListener(jni::ref<java::beans::beancontext::BeanContextMembershipListener> p1) { return call_method<"addBeanContextMembershipListener", void>(p1); }
	void removeBeanContextMembershipListener(jni::ref<java::beans::beancontext::BeanContextMembershipListener> p1) { return call_method<"removeBeanContextMembershipListener", void>(p1); }

protected:

	BeanContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_BEANCONTEXT_BEANCONTEXT