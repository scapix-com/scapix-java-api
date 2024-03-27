// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVERREQUEST_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVERREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class ServerRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::ServerRequest>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/ServerRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVERREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVERREQUEST)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVERREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/Context.h>
#include <scapix/java_api/org/omg/CORBA/NVList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::ServerRequest : public jni::object_base<"org/omg/CORBA/ServerRequest",
	java::lang::Object>
{
public:

	static jni::ref<org::omg::CORBA::ServerRequest> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> op_name() { return call_method<"op_name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> operation() { return call_method<"operation", jni::ref<java::lang::String>>(); }
	void params(jni::ref<org::omg::CORBA::NVList> p1) { return call_method<"params", void>(p1); }
	void arguments(jni::ref<org::omg::CORBA::NVList> p1) { return call_method<"arguments", void>(p1); }
	void result(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"result", void>(p1); }
	void set_result(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"set_result", void>(p1); }
	void except(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"except", void>(p1); }
	void set_exception(jni::ref<org::omg::CORBA::Any> p1) { return call_method<"set_exception", void>(p1); }
	jni::ref<org::omg::CORBA::Context> ctx() { return call_method<"ctx", jni::ref<org::omg::CORBA::Context>>(); }

protected:

	ServerRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_SERVERREQUEST