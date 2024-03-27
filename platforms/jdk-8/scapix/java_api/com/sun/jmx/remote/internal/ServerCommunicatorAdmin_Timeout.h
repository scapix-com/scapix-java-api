// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_SERVERCOMMUNICATORADMIN_TIMEOUT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_SERVERCOMMUNICATORADMIN_TIMEOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::jmx::remote::internal { class ServerCommunicatorAdmin_Timeout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::jmx::remote::internal::ServerCommunicatorAdmin_Timeout>
{
	static constexpr fixed_string class_name = "com/sun/jmx/remote/internal/ServerCommunicatorAdmin$Timeout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_SERVERCOMMUNICATORADMIN_TIMEOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_SERVERCOMMUNICATORADMIN_TIMEOUT)
#define SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_SERVERCOMMUNICATORADMIN_TIMEOUT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::jmx::remote::internal::ServerCommunicatorAdmin_Timeout : public jni::object_base<"com/sun/jmx/remote/internal/ServerCommunicatorAdmin$Timeout",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	ServerCommunicatorAdmin_Timeout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JMX_REMOTE_INTERNAL_SERVERCOMMUNICATORADMIN_TIMEOUT
