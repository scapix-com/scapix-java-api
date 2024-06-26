// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableServer/POAOperations.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POA_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class POA; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::POA>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/POA";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::PortableServer::POAOperations, scapix::java_api::org::omg::CORBA::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POA)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::POA : public jni::object_base<"org/omg/PortableServer/POA",
	java::lang::Object,
	org::omg::PortableServer::POAOperations,
	org::omg::CORBA::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	POA(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POA
