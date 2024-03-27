// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_SERVANTMANAGEROPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_SERVANTMANAGEROPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class ServantManagerOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::ServantManagerOperations>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/ServantManagerOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_SERVANTMANAGEROPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_SERVANTMANAGEROPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_SERVANTMANAGEROPERATIONS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::ServantManagerOperations : public jni::object_base<"org/omg/PortableServer/ServantManagerOperations",
	java::lang::Object>
{
public:


protected:

	ServantManagerOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_SERVANTMANAGEROPERATIONS
