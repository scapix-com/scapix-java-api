// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ServerRequestInterceptorOperations.h>
#include <scapix/java_api/org/omg/PortableInterceptor/Interceptor.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class ServerRequestInterceptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::ServerRequestInterceptor>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/ServerRequestInterceptor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::PortableInterceptor::ServerRequestInterceptorOperations, scapix::java_api::org::omg::PortableInterceptor::Interceptor, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::ServerRequestInterceptor : public jni::object_base<"org/omg/PortableInterceptor/ServerRequestInterceptor",
	java::lang::Object,
	org::omg::PortableInterceptor::ServerRequestInterceptorOperations,
	org::omg::PortableInterceptor::Interceptor,
	org::omg::CORBA::portable::IDLEntity>
{
public:


protected:

	ServerRequestInterceptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_SERVERREQUESTINTERCEPTOR
