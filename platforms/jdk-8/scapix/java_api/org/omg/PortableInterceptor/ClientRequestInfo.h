// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ClientRequestInfoOperations.h>
#include <scapix/java_api/org/omg/PortableInterceptor/RequestInfo.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class ClientRequestInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::ClientRequestInfo>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/ClientRequestInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::PortableInterceptor::ClientRequestInfoOperations, scapix::java_api::org::omg::PortableInterceptor::RequestInfo, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::ClientRequestInfo : public jni::object_base<"org/omg/PortableInterceptor/ClientRequestInfo",
	java::lang::Object,
	org::omg::PortableInterceptor::ClientRequestInfoOperations,
	org::omg::PortableInterceptor::RequestInfo,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	ClientRequestInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINFO
