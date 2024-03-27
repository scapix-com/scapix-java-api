// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>
#include <scapix/java_api/javax/management/remote/rmi/RMIServer.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVERIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIServerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIServerImpl>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIServerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable, scapix::java_api::javax::management::remote::rmi::RMIServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVERIMPL)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/remote/rmi/RMIConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::rmi::RMIServerImpl : public jni::object_base<"javax/management/remote/rmi/RMIServerImpl",
	java::lang::Object,
	java::io::Closeable,
	javax::management::remote::rmi::RMIServer>
{
public:

	static jni::ref<javax::management::remote::rmi::RMIServerImpl> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::Remote> toStub() { return call_method<"toStub", jni::ref<java::rmi::Remote>>(); }
	void setDefaultClassLoader(jni::ref<java::lang::ClassLoader> p1) { return call_method<"setDefaultClassLoader", void>(p1); }
	jni::ref<java::lang::ClassLoader> getDefaultClassLoader() { return call_method<"getDefaultClassLoader", jni::ref<java::lang::ClassLoader>>(); }
	void setMBeanServer(jni::ref<javax::management::MBeanServer> p1) { return call_method<"setMBeanServer", void>(p1); }
	jni::ref<javax::management::MBeanServer> getMBeanServer() { return call_method<"getMBeanServer", jni::ref<javax::management::MBeanServer>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jni::ref<javax::management::remote::rmi::RMIConnection> newClient(jni::ref<java::lang::Object> p1) { return call_method<"newClient", jni::ref<javax::management::remote::rmi::RMIConnection>>(p1); }
	void close() { return call_method<"close", void>(); }

protected:

	RMIServerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVERIMPL