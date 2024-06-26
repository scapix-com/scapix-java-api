// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_JMXCONNECTORSERVERDATA_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_JMXCONNECTORSERVERDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::jmxremote { class ConnectorBootstrap_JMXConnectorServerData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::jmxremote::ConnectorBootstrap_JMXConnectorServerData>
{
	static constexpr fixed_string class_name = "sun/management/jmxremote/ConnectorBootstrap$JMXConnectorServerData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_JMXCONNECTORSERVERDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_JMXCONNECTORSERVERDATA)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_JMXCONNECTORSERVERDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/remote/JMXConnectorServer.h>
#include <scapix/java_api/javax/management/remote/JMXServiceURL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::management::jmxremote::ConnectorBootstrap_JMXConnectorServerData : public jni::object_base<"sun/management/jmxremote/ConnectorBootstrap$JMXConnectorServerData",
	java::lang::Object>
{
public:

	static jni::ref<sun::management::jmxremote::ConnectorBootstrap_JMXConnectorServerData> new_object(jni::ref<javax::management::remote::JMXConnectorServer> p1, jni::ref<javax::management::remote::JMXServiceURL> p2) { return base_::new_object(p1, p2); }

protected:

	ConnectorBootstrap_JMXConnectorServerData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_JMXCONNECTORSERVERDATA
