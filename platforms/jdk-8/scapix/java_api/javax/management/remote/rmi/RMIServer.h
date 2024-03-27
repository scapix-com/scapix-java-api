// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/rmi/Remote.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVER_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIServer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIServer>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIServer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::rmi::Remote>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVER)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/remote/rmi/RMIConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::rmi::RMIServer : public jni::object_base<"javax/management/remote/rmi/RMIServer",
	java::lang::Object,
	java::rmi::Remote>
{
public:

	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jni::ref<javax::management::remote::rmi::RMIConnection> newClient(jni::ref<java::lang::Object> p1) { return call_method<"newClient", jni::ref<javax::management::remote::rmi::RMIConnection>>(p1); }

protected:

	RMIServer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMISERVER