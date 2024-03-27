// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IDASSIGNMENTPOLICYVALUE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IDASSIGNMENTPOLICYVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class IdAssignmentPolicyValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::IdAssignmentPolicyValue>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/IdAssignmentPolicyValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IDASSIGNMENTPOLICYVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IDASSIGNMENTPOLICYVALUE)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IDASSIGNMENTPOLICYVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::IdAssignmentPolicyValue : public jni::object_base<"org/omg/PortableServer/IdAssignmentPolicyValue",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	static jint _USER_ID() { return get_static_field<"_USER_ID", jint>(); }
	static jni::ref<org::omg::PortableServer::IdAssignmentPolicyValue> USER_ID() { return get_static_field<"USER_ID", jni::ref<org::omg::PortableServer::IdAssignmentPolicyValue>>(); }
	static jint _SYSTEM_ID() { return get_static_field<"_SYSTEM_ID", jint>(); }
	static jni::ref<org::omg::PortableServer::IdAssignmentPolicyValue> SYSTEM_ID() { return get_static_field<"SYSTEM_ID", jni::ref<org::omg::PortableServer::IdAssignmentPolicyValue>>(); }

	jint value() { return call_method<"value", jint>(); }
	static jni::ref<org::omg::PortableServer::IdAssignmentPolicyValue> from_int(jint p1) { return call_static_method<"from_int", jni::ref<org::omg::PortableServer::IdAssignmentPolicyValue>>(p1); }

protected:

	IdAssignmentPolicyValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_IDASSIGNMENTPOLICYVALUE
