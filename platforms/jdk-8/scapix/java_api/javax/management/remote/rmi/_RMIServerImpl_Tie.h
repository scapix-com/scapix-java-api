// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA_2_3/portable/ObjectImpl.h>
#include <scapix/java_api/javax/rmi/CORBA/Tie.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVERIMPL_TIE_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVERIMPL_TIE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management::remote::rmi { class _RMIServerImpl_Tie; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::remote::rmi::_RMIServerImpl_Tie>
{
	static constexpr fixed_string class_name = "javax/management/remote/rmi/_RMIServerImpl_Tie";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA_2_3::portable::ObjectImpl, scapix::java_api::javax::rmi::CORBA::Tie>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVERIMPL_TIE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVERIMPL_TIE)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVERIMPL_TIE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/rmi/Remote.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/ResponseHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::management::remote::rmi::_RMIServerImpl_Tie : public jni::object_base<"javax/management/remote/rmi/_RMIServerImpl_Tie",
	org::omg::CORBA_2_3::portable::ObjectImpl,
	javax::rmi::CORBA::Tie>
{
public:

	static jni::ref<javax::management::remote::rmi::_RMIServerImpl_Tie> new_object() { return base_::new_object(); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<org::omg::CORBA::portable::OutputStream> _invoke(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::portable::InputStream> p2, jni::ref<org::omg::CORBA::portable::ResponseHandler> p3) { return call_method<"_invoke", jni::ref<org::omg::CORBA::portable::OutputStream>>(p1, p2, p3); }
	void deactivate() { return call_method<"deactivate", void>(); }
	jni::ref<java::rmi::Remote> getTarget() { return call_method<"getTarget", jni::ref<java::rmi::Remote>>(); }
	jni::ref<org::omg::CORBA::ORB> orb() { return call_method<"orb", jni::ref<org::omg::CORBA::ORB>>(); }
	void orb(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"orb", void>(p1); }
	void setTarget(jni::ref<java::rmi::Remote> p1) { return call_method<"setTarget", void>(p1); }
	jni::ref<org::omg::CORBA::Object> thisObject() { return call_method<"thisObject", jni::ref<org::omg::CORBA::Object>>(); }

protected:

	_RMIServerImpl_Tie(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_REMOTE_RMI__RMISERVERIMPL_TIE