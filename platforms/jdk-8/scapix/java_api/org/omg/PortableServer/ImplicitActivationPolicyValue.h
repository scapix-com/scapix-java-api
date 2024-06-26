// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IMPLICITACTIVATIONPOLICYVALUE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IMPLICITACTIVATIONPOLICYVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class ImplicitActivationPolicyValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::ImplicitActivationPolicyValue>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/ImplicitActivationPolicyValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IMPLICITACTIVATIONPOLICYVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IMPLICITACTIVATIONPOLICYVALUE)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IMPLICITACTIVATIONPOLICYVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::ImplicitActivationPolicyValue : public jni::object_base<"org/omg/PortableServer/ImplicitActivationPolicyValue",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	static jint _IMPLICIT_ACTIVATION() { return get_static_field<"_IMPLICIT_ACTIVATION", jint>(); }
	static jni::ref<org::omg::PortableServer::ImplicitActivationPolicyValue> IMPLICIT_ACTIVATION() { return get_static_field<"IMPLICIT_ACTIVATION", jni::ref<org::omg::PortableServer::ImplicitActivationPolicyValue>>(); }
	static jint _NO_IMPLICIT_ACTIVATION() { return get_static_field<"_NO_IMPLICIT_ACTIVATION", jint>(); }
	static jni::ref<org::omg::PortableServer::ImplicitActivationPolicyValue> NO_IMPLICIT_ACTIVATION() { return get_static_field<"NO_IMPLICIT_ACTIVATION", jni::ref<org::omg::PortableServer::ImplicitActivationPolicyValue>>(); }

	jint value() { return call_method<"value", jint>(); }
	static jni::ref<org::omg::PortableServer::ImplicitActivationPolicyValue> from_int(jint p1) { return call_static_method<"from_int", jni::ref<org::omg::PortableServer::ImplicitActivationPolicyValue>>(p1); }

protected:

	ImplicitActivationPolicyValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IMPLICITACTIVATIONPOLICYVALUE
