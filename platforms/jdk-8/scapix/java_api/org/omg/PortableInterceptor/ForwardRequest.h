// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/UserException.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_FORWARDREQUEST_FWD
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_FORWARDREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::PortableInterceptor { class ForwardRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::PortableInterceptor::ForwardRequest>
{
	static constexpr fixed_string class_name = "org/omg/PortableInterceptor/ForwardRequest";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::UserException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_FORWARDREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_FORWARDREQUEST)
#define SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_FORWARDREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::PortableInterceptor::ForwardRequest : public jni::object_base<"org/omg/PortableInterceptor/ForwardRequest",
	org::omg::CORBA::UserException>
{
public:

	jni::ref<org::omg::CORBA::Object> forward() { return get_field<"forward", jni::ref<org::omg::CORBA::Object>>(); }
	void forward(jni::ref<org::omg::CORBA::Object> v) { set_field<"forward", jni::ref<org::omg::CORBA::Object>>(v); }

	static jni::ref<org::omg::PortableInterceptor::ForwardRequest> new_object() { return base_::new_object(); }
	static jni::ref<org::omg::PortableInterceptor::ForwardRequest> new_object(jni::ref<org::omg::CORBA::Object> p1) { return base_::new_object(p1); }
	static jni::ref<org::omg::PortableInterceptor::ForwardRequest> new_object(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::Object> p2) { return base_::new_object(p1, p2); }

protected:

	ForwardRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_PORTABLEINTERCEPTOR_FORWARDREQUEST
