// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/jmx/remote/internal/ServerCommunicatorAdmin.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_RMISERVERCOMMUNICATORADMIN_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_RMISERVERCOMMUNICATORADMIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIConnectionImpl_RMIServerCommunicatorAdmin; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIConnectionImpl_RMIServerCommunicatorAdmin>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIConnectionImpl$RMIServerCommunicatorAdmin";
	using base_classes = std::tuple<scapix::java_api::com::sun::jmx::remote::internal::ServerCommunicatorAdmin>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_RMISERVERCOMMUNICATORADMIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_RMISERVERCOMMUNICATORADMIN)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_RMISERVERCOMMUNICATORADMIN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/management/remote/rmi/RMIConnectionImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::remote::rmi::RMIConnectionImpl_RMIServerCommunicatorAdmin : public jni::object_base<"javax/management/remote/rmi/RMIConnectionImpl$RMIServerCommunicatorAdmin",
	com::sun::jmx::remote::internal::ServerCommunicatorAdmin>
{
public:

	static jni::ref<javax::management::remote::rmi::RMIConnectionImpl_RMIServerCommunicatorAdmin> new_object(jni::ref<javax::management::remote::rmi::RMIConnectionImpl> p1, jlong p2) { return base_::new_object(p1, p2); }

protected:

	RMIConnectionImpl_RMIServerCommunicatorAdmin(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_RMISERVERCOMMUNICATORADMIN