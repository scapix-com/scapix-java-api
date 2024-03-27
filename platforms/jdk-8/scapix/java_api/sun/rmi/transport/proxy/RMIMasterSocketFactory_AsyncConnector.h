// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIMASTERSOCKETFACTORY_ASYNCCONNECTOR_FWD
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIMASTERSOCKETFACTORY_ASYNCCONNECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::transport::proxy { class RMIMasterSocketFactory_AsyncConnector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::transport::proxy::RMIMasterSocketFactory_AsyncConnector>
{
	static constexpr fixed_string class_name = "sun/rmi/transport/proxy/RMIMasterSocketFactory$AsyncConnector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIMASTERSOCKETFACTORY_ASYNCCONNECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIMASTERSOCKETFACTORY_ASYNCCONNECTOR)
#define SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIMASTERSOCKETFACTORY_ASYNCCONNECTOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::transport::proxy::RMIMasterSocketFactory_AsyncConnector : public jni::object_base<"sun/rmi/transport/proxy/RMIMasterSocketFactory$AsyncConnector",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	RMIMasterSocketFactory_AsyncConnector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_TRANSPORT_PROXY_RMIMASTERSOCKETFACTORY_ASYNCCONNECTOR
