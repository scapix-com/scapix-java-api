// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Thread.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SHUTDOWN_FWD
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SHUTDOWN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::server { class Activation_Shutdown; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::server::Activation_Shutdown>
{
	static constexpr fixed_string class_name = "sun/rmi/server/Activation$Shutdown";
	using base_classes = std::tuple<scapix::java_api::java::lang::Thread>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SHUTDOWN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SHUTDOWN)
#define SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SHUTDOWN

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::server::Activation_Shutdown : public jni::object_base<"sun/rmi/server/Activation$Shutdown",
	java::lang::Thread>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	Activation_Shutdown(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_SERVER_ACTIVATION_SHUTDOWN
