// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/remote/internal/ClientNotifForwarder.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_RMINOTIFCLIENT_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_RMINOTIFCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIConnector_RMINotifClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIConnector_RMINotifClient>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIConnector$RMINotifClient";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::remote::internal::ClientNotifForwarder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_RMINOTIFCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_RMINOTIFCLIENT)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_RMINOTIFCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/javax/management/remote/rmi/RMIConnector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::remote::rmi::RMIConnector_RMINotifClient : public jni::object_base<"javax/management/remote/rmi/RMIConnector$RMINotifClient",
	com::sun::jmx::remote::internal::ClientNotifForwarder>
{
public:

	static jni::ref<javax::management::remote::rmi::RMIConnector_RMINotifClient> new_object(jni::ref<javax::management::remote::rmi::RMIConnector> p1, jni::ref<java::lang::ClassLoader> p2, jni::ref<java::util::Map> p3) { return base_::new_object(p1, p2, p3); }

protected:

	RMIConnector_RMINotifClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTOR_RMINOTIFCLIENT