// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/rmi/CORBA/Stub.h>
#include <scapix/java_api/javax/management/remote/rmi/RMIServer.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVER_STUB_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVER_STUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class _RMIServer_Stub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::_RMIServer_Stub>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/_RMIServer_Stub";
	using base_classes = std::tuple<scapix::java_api::javax::rmi::CORBA::Stub, scapix::java_api::javax::management::remote::rmi::RMIServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVER_STUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVER_STUB)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVER_STUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/remote/rmi/RMIConnection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::rmi::_RMIServer_Stub : public jni::object_base<"javax/management/remote/rmi/_RMIServer_Stub",
	javax::rmi::CORBA::Stub,
	javax::management::remote::rmi::RMIServer>
{
public:

	static jni::ref<javax::management::remote::rmi::_RMIServer_Stub> new_object() { return base_::new_object(); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jni::ref<javax::management::remote::rmi::RMIConnection> newClient(jni::ref<java::lang::Object> p1) { return call_method<"newClient", jni::ref<javax::management::remote::rmi::RMIConnection>>(p1); }

protected:

	_RMIServer_Stub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVER_STUB
