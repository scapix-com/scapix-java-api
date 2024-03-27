// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_ADAPTERACTIVATOROPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_ADAPTERACTIVATOROPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableServer { class AdapterActivatorOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableServer::AdapterActivatorOperations>
{
	static constexpr fixed_string class_name = "org/omg/PortableServer/AdapterActivatorOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_ADAPTERACTIVATOROPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_ADAPTERACTIVATOROPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_ADAPTERACTIVATOROPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/PortableServer/POA.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableServer::AdapterActivatorOperations : public jni::object_base<"org/omg/PortableServer/AdapterActivatorOperations",
	java::lang::Object>
{
public:

	jboolean unknown_adapter(jni::ref<org::omg::PortableServer::POA> p1, jni::ref<java::lang::String> p2) { return call_method<"unknown_adapter", jboolean>(p1, p2); }

protected:

	AdapterActivatorOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLESERVER_ADAPTERACTIVATOROPERATIONS