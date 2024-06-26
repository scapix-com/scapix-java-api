// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ClientRequestInterceptorOperations.h>
#include <scapix/java_api/org/omg/PortableInterceptor/Interceptor.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class ClientRequestInterceptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::ClientRequestInterceptor>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/ClientRequestInterceptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::PortableInterceptor::ClientRequestInterceptorOperations, scapix::java_api::org::omg::PortableInterceptor::Interceptor, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::ClientRequestInterceptor : public jni::object_base<"org/omg/PortableInterceptor/ClientRequestInterceptor",
	java::lang::Object,
	org::omg::PortableInterceptor::ClientRequestInterceptorOperations,
	org::omg::PortableInterceptor::Interceptor,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	ClientRequestInterceptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_CLIENTREQUESTINTERCEPTOR
