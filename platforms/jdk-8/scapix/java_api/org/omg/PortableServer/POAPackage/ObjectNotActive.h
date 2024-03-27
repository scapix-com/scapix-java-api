// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/UserException.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POAPACKAGE_OBJECTNOTACTIVE_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POAPACKAGE_OBJECTNOTACTIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer::POAPackage { class ObjectNotActive; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::POAPackage::ObjectNotActive>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/POAPackage/ObjectNotActive";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::UserException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POAPACKAGE_OBJECTNOTACTIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POAPACKAGE_OBJECTNOTACTIVE)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POAPACKAGE_OBJECTNOTACTIVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::POAPackage::ObjectNotActive : public jni::object_base<"org/omg/PortableServer/POAPackage/ObjectNotActive",
	org::omg::CORBA::UserException>
{
public:

	static jni::ref<org::omg::PortableServer::POAPackage::ObjectNotActive> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::PortableServer::POAPackage::ObjectNotActive> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	ObjectNotActive(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_POAPACKAGE_OBJECTNOTACTIVE
