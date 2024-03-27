// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/PortableServer/Servant.h>
#include <scapix/java_api/org/omg/CosNaming/BindingIteratorOperations.h>
#include <scapix/java_api/org/omg/CORBA/portable/InvokeHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGITERATORPOA_FWD
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGITERATORPOA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CosNaming { class BindingIteratorPOA; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CosNaming::BindingIteratorPOA>
{
	static constexpr fixed_string class_name = "org/omg/CosNaming/BindingIteratorPOA";
	using base_classes = std::tuple<scapix::java_api::org::omg::PortableServer::Servant, scapix::java_api::org::omg::CosNaming::BindingIteratorOperations, scapix::java_api::org::omg::CORBA::portable::InvokeHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGITERATORPOA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGITERATORPOA)
#define SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGITERATORPOA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/ResponseHandler.h>
#include <scapix/java_api/org/omg/CosNaming/BindingIterator.h>
#include <scapix/java_api/org/omg/PortableServer/POA.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CosNaming::BindingIteratorPOA : public jni::object_base<"org/omg/CosNaming/BindingIteratorPOA",
	org::omg::PortableServer::Servant,
	org::omg::CosNaming::BindingIteratorOperations,
	org::omg::CORBA::portable::InvokeHandler>
{
public:

	static jni::ref<org::omg::CosNaming::BindingIteratorPOA> new_object() { return base_::new_object(); }
	jni::ref<org::omg::CORBA::portable::OutputStream> _invoke(jni::ref<java::lang::String> p1, jni::ref<org::omg::CORBA::portable::InputStream> p2, jni::ref<org::omg::CORBA::portable::ResponseHandler> p3) { return call_method<"_invoke", jni::ref<org::omg::CORBA::portable::OutputStream>>(p1, p2, p3); }
	jni::ref<jni::array<java::lang::String>> _all_interfaces(jni::ref<org::omg::PortableServer::POA> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"_all_interfaces", jni::ref<jni::array<java::lang::String>>>(p1, p2); }
	jni::ref<org::omg::CosNaming::BindingIterator> _this() { return call_method<"_this", jni::ref<org::omg::CosNaming::BindingIterator>>(); }
	jni::ref<org::omg::CosNaming::BindingIterator> _this(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"_this", jni::ref<org::omg::CosNaming::BindingIterator>>(p1); }

protected:

	BindingIteratorPOA(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_COSNAMING_BINDINGITERATORPOA