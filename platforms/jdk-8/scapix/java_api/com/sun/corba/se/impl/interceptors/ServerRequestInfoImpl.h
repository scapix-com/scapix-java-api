// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/interceptors/RequestInfoImpl.h>
#include <scapix/java_api/org/omg/PortableInterceptor/ServerRequestInfo.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SERVERREQUESTINFOIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SERVERREQUESTINFOIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::interceptors { class ServerRequestInfoImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::interceptors::ServerRequestInfoImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/interceptors/ServerRequestInfoImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::interceptors::RequestInfoImpl, scapix::java_api::org::omg::PortableInterceptor::ServerRequestInfo>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SERVERREQUESTINFOIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SERVERREQUESTINFOIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SERVERREQUESTINFOIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/Policy.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/Dynamic/Parameter.h>
#include <scapix/java_api/org/omg/IOP/ServiceContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::interceptors::ServerRequestInfoImpl : public jni::object_base<"com/sun/corba/se/impl/interceptors/ServerRequestInfoImpl",
	com::sun::corba::se::impl::interceptors::RequestInfoImpl,
	org::omg::PortableInterceptor::ServerRequestInfo>
{
public:

	jni::ref<org::omg::CORBA::Any> sending_exception() { return call_method<"sending_exception", jni::ref<org::omg::CORBA::Any>>(); }
	jni::ref<jni::array<jbyte>> object_id() { return call_method<"object_id", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> server_id() { return call_method<"server_id", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> orb_id() { return call_method<"orb_id", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> adapter_name() { return call_method<"adapter_name", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jbyte>> adapter_id() { return call_method<"adapter_id", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> target_most_derived_interface() { return call_method<"target_most_derived_interface", jni::ref<java::lang::String>>(); }
	jni::ref<org::omg::CORBA::Policy> get_server_policy(jint p1) { return call_method<"get_server_policy", jni::ref<org::omg::CORBA::Policy>>(p1); }
	void set_slot(jint p1, jni::ref<org::omg::CORBA::Any> p2) { return call_method<"set_slot", void>(p1, p2); }
	jboolean target_is_a(jni::ref<java::lang::String> p1) { return call_method<"target_is_a", jboolean>(p1); }
	void add_reply_service_context(jni::ref<org::omg::IOP::ServiceContext> p1, jboolean p2) { return call_method<"add_reply_service_context", void>(p1, p2); }
	jint request_id() { return call_method<"request_id", jint>(); }
	jni::ref<java::lang::String> operation() { return call_method<"operation", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<org::omg::Dynamic::Parameter>> arguments() { return call_method<"arguments", jni::ref<jni::array<org::omg::Dynamic::Parameter>>>(); }
	jni::ref<jni::array<org::omg::CORBA::TypeCode>> exceptions() { return call_method<"exceptions", jni::ref<jni::array<org::omg::CORBA::TypeCode>>>(); }
	jni::ref<jni::array<java::lang::String>> contexts() { return call_method<"contexts", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> operation_context() { return call_method<"operation_context", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<org::omg::CORBA::Any> result() { return call_method<"result", jni::ref<org::omg::CORBA::Any>>(); }
	jboolean response_expected() { return call_method<"response_expected", jboolean>(); }
	jni::ref<org::omg::CORBA::Object> forward_reference() { return call_method<"forward_reference", jni::ref<org::omg::CORBA::Object>>(); }
	jni::ref<org::omg::IOP::ServiceContext> get_request_service_context(jint p1) { return call_method<"get_request_service_context", jni::ref<org::omg::IOP::ServiceContext>>(p1); }
	jni::ref<org::omg::IOP::ServiceContext> get_reply_service_context(jint p1) { return call_method<"get_reply_service_context", jni::ref<org::omg::IOP::ServiceContext>>(p1); }

protected:

	ServerRequestInfoImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_INTERCEPTORS_SERVERREQUESTINFOIMPL
