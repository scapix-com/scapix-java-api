// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_REQUESTINFOOPERATIONS_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_REQUESTINFOOPERATIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class RequestInfoOperations; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::RequestInfoOperations>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/RequestInfoOperations";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_REQUESTINFOOPERATIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_REQUESTINFOOPERATIONS)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_REQUESTINFOOPERATIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/Dynamic/Parameter.h>
#include <scapix/java_api/org/omg/IOP/ServiceContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::RequestInfoOperations : public jni::object_base<"org/omg/PortableInterceptor/RequestInfoOperations",
	java::lang::Object>
{
public:

	jint request_id() { return call_method<"request_id", jint>(); }
	jni::ref<java::lang::String> operation() { return call_method<"operation", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<org::omg::Dynamic::Parameter>> arguments() { return call_method<"arguments", jni::ref<jni::array<org::omg::Dynamic::Parameter>>>(); }
	jni::ref<jni::array<org::omg::CORBA::TypeCode>> exceptions() { return call_method<"exceptions", jni::ref<jni::array<org::omg::CORBA::TypeCode>>>(); }
	jni::ref<jni::array<java::lang::String>> contexts() { return call_method<"contexts", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> operation_context() { return call_method<"operation_context", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<org::omg::CORBA::Any> result() { return call_method<"result", jni::ref<org::omg::CORBA::Any>>(); }
	jboolean response_expected() { return call_method<"response_expected", jboolean>(); }
	jshort sync_scope() { return call_method<"sync_scope", jshort>(); }
	jshort reply_status() { return call_method<"reply_status", jshort>(); }
	jni::ref<org::omg::CORBA::Object> forward_reference() { return call_method<"forward_reference", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::CORBA::Any> get_slot(jint p1) { return call_method<"get_slot", jni::ref<org::omg::CORBA::Any>>(p1); }
	jni::ref<org::omg::IOP::ServiceContext> get_request_service_context(jint p1) { return call_method<"get_request_service_context", jni::ref<org::omg::IOP::ServiceContext>>(p1); }
	jni::ref<org::omg::IOP::ServiceContext> get_reply_service_context(jint p1) { return call_method<"get_reply_service_context", jni::ref<org::omg::IOP::ServiceContext>>(p1); }

protected:

	RequestInfoOperations(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_REQUESTINFOOPERATIONS
