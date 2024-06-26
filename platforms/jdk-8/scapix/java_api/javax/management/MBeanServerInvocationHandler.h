// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/reflect/InvocationHandler.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERINVOCATIONHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERINVOCATIONHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class MBeanServerInvocationHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::MBeanServerInvocationHandler>
{
	static constexpr fixed_string class_name = "javax/management/MBeanServerInvocationHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::reflect::InvocationHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERINVOCATIONHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERINVOCATIONHANDLER)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERINVOCATIONHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#include <scapix/java_api/javax/management/MBeanServerConnection.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::MBeanServerInvocationHandler : public jni::object_base<"javax/management/MBeanServerInvocationHandler",
	java::lang::Object,
	java::lang::reflect::InvocationHandler>
{
public:

	static jni::ref<javax::management::MBeanServerInvocationHandler> new_object(jni::ref<javax::management::MBeanServerConnection> p1, jni::ref<javax::management::ObjectName> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::management::MBeanServerInvocationHandler> new_object(jni::ref<javax::management::MBeanServerConnection> p1, jni::ref<javax::management::ObjectName> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<javax::management::MBeanServerConnection> getMBeanServerConnection() { return call_method<"getMBeanServerConnection", jni::ref<javax::management::MBeanServerConnection>>(); }
	jni::ref<javax::management::ObjectName> getObjectName() { return call_method<"getObjectName", jni::ref<javax::management::ObjectName>>(); }
	jboolean isMXBean() { return call_method<"isMXBean", jboolean>(); }
	static jni::ref<java::lang::Object> newProxyInstance(jni::ref<javax::management::MBeanServerConnection> p1, jni::ref<javax::management::ObjectName> p2, jni::ref<java::lang::Class> p3, jboolean p4) { return call_static_method<"newProxyInstance", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	jni::ref<java::lang::Object> invoke(jni::ref<java::lang::Object> p1, jni::ref<java::lang::reflect::Method> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"invoke", jni::ref<java::lang::Object>>(p1, p2, p3); }

protected:

	MBeanServerInvocationHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MBEANSERVERINVOCATIONHANDLER
