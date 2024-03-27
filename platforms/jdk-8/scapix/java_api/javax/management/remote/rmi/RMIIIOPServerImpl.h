// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/remote/rmi/RMIServerImpl.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMIIIOPSERVERIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMIIIOPSERVERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class RMIIIOPServerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::RMIIIOPServerImpl>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/RMIIIOPServerImpl";
	using base_classes = std::tuple<scapix::java_api::javax::management::remote::rmi::RMIServerImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMIIIOPSERVERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMIIIOPSERVERIMPL)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMIIIOPSERVERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::rmi::RMIIIOPServerImpl : public jni::object_base<"javax/management/remote/rmi/RMIIIOPServerImpl",
	javax::management::remote::rmi::RMIServerImpl>
{
public:

	static jni::ref<javax::management::remote::rmi::RMIIIOPServerImpl> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	jni::ref<java::rmi::Remote> toStub() { return call_method<"toStub", jni::ref<java::rmi::Remote>>(); }

protected:

	RMIIIOPServerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI_RMIIIOPSERVERIMPL
