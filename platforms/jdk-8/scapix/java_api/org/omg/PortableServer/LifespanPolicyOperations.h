// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/PolicyOperations.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_LIFESPANPOLICYOPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_LIFESPANPOLICYOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class LifespanPolicyOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::LifespanPolicyOperations>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/LifespanPolicyOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::PolicyOperations>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_LIFESPANPOLICYOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_LIFESPANPOLICYOPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_LIFESPANPOLICYOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/PortableServer/LifespanPolicyValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::LifespanPolicyOperations : public jni::object_base<"org/omg/PortableServer/LifespanPolicyOperations",
	java::lang::Object,
	org::omg::CORBA::PolicyOperations>
{
public:

	jni::ref<org::omg::PortableServer::LifespanPolicyValue> value() { return call_method<"value", jni::ref<org::omg::PortableServer::LifespanPolicyValue>>(); }

protected:

	LifespanPolicyOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_LIFESPANPOLICYOPERATIONS
