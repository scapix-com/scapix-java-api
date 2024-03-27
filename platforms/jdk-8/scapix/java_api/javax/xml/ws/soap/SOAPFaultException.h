// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/ws/ProtocolException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_SOAPFAULTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_SOAPFAULTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::ws::soap { class SOAPFaultException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::ws::soap::SOAPFaultException>
{
	static constexpr fixed_string class_name = "javax/xml/ws/soap/SOAPFaultException";
	using base_classes = std::tuple<scapix::java_api::javax::xml::ws::ProtocolException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_SOAPFAULTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_SOAPFAULTEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_SOAPFAULTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/xml/soap/SOAPFault.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::ws::soap::SOAPFaultException : public jni::object_base<"javax/xml/ws/soap/SOAPFaultException",
	javax::xml::ws::ProtocolException>
{
public:

	static jni::ref<javax::xml::ws::soap::SOAPFaultException> new_object(jni::ref<javax::xml::soap::SOAPFault> p1) { return base_::new_object(p1); }
	jni::ref<javax::xml::soap::SOAPFault> getFault() { return call_method<"getFault", jni::ref<javax::xml::soap::SOAPFault>>(); }

protected:

	SOAPFaultException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_WS_SOAP_SOAPFAULTEXCEPTION