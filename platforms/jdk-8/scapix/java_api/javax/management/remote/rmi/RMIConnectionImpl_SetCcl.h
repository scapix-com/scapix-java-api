// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/PrivilegedExceptionAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_SETCCL_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_SETCCL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIConnectionImpl_SetCcl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIConnectionImpl_SetCcl>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIConnectionImpl$SetCcl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::PrivilegedExceptionAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_SETCCL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_SETCCL)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_SETCCL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::remote::rmi::RMIConnectionImpl_SetCcl : public jni::object_base<"javax/management/remote/rmi/RMIConnectionImpl$SetCcl",
	java::lang::Object,
	java::security::PrivilegedExceptionAction>
{
public:

	jni::ref<java::lang::ClassLoader> run() { return call_method<"run", jni::ref<java::lang::ClassLoader>>(); }

protected:

	RMIConnectionImpl_SetCcl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMICONNECTIONIMPL_SETCCL