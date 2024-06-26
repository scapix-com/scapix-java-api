// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/management/remote/JMXConnectorServerProvider.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_RMI_SERVERPROVIDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_RMI_SERVERPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::protocol::rmi { class ServerProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::protocol::rmi::ServerProvider>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/protocol/rmi/ServerProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::management::remote::JMXConnectorServerProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_RMI_SERVERPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_RMI_SERVERPROVIDER)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_RMI_SERVERPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/management/MBeanServer.h>
#include <scapix/java_api/javax/management/remote/JMXConnectorServer.h>
#include <scapix/java_api/javax/management/remote/JMXServiceURL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::jmx::remote::protocol::rmi::ServerProvider : public jni::object_base<"com/sun/jmx/remote/protocol/rmi/ServerProvider",
	java::lang::Object,
	javax::management::remote::JMXConnectorServerProvider>
{
public:

	static jni::ref<com::sun::jmx::remote::protocol::rmi::ServerProvider> new_object() { return base_::new_object(); }
	jni::ref<javax::management::remote::JMXConnectorServer> newJMXConnectorServer(jni::ref<javax::management::remote::JMXServiceURL> p1, jni::ref<java::util::Map> p2, jni::ref<javax::management::MBeanServer> p3) { return call_method<"newJMXConnectorServer", jni::ref<javax::management::remote::JMXConnectorServer>>(p1, p2, p3); }

protected:

	ServerProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_PROTOCOL_RMI_SERVERPROVIDER
