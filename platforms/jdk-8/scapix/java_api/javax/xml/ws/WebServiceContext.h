// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_WEBSERVICECONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_WEBSERVICECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws { class WebServiceContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::WebServiceContext>
{
	static constexpr fixed_string class_name = "javax/xml/ws/WebServiceContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_WEBSERVICECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_WEBSERVICECONTEXT)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_WEBSERVICECONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/javax/xml/ws/EndpointReference.h>
#include <scapix/java_api/javax/xml/ws/handler/MessageContext.h>
#include <scapix/java_api/org/w3c/dom/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::WebServiceContext : public jni::object_base<"javax/xml/ws/WebServiceContext",
	java::lang::Object>
{
public:

	jni::ref<javax::xml::ws::handler::MessageContext> getMessageContext() { return call_method<"getMessageContext", jni::ref<javax::xml::ws::handler::MessageContext>>(); }
	jni::ref<java::security::Principal> getUserPrincipal() { return call_method<"getUserPrincipal", jni::ref<java::security::Principal>>(); }
	jboolean isUserInRole(jni::ref<java::lang::String> p1) { return call_method<"isUserInRole", jboolean>(p1); }
	jni::ref<javax::xml::ws::EndpointReference> getEndpointReference(jni::ref<jni::array<org::w3c::dom::Element>> p1) { return call_method<"getEndpointReference", jni::ref<javax::xml::ws::EndpointReference>>(p1); }
	jni::ref<javax::xml::ws::EndpointReference> getEndpointReference(jni::ref<java::lang::Class> p1, jni::ref<jni::array<org::w3c::dom::Element>> p2) { return call_method<"getEndpointReference", jni::ref<javax::xml::ws::EndpointReference>>(p1, p2); }

protected:

	WebServiceContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_WEBSERVICECONTEXT
