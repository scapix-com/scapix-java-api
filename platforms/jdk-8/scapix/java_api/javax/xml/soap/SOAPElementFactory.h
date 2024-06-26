// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPELEMENTFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPELEMENTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::soap { class SOAPElementFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::soap::SOAPElementFactory>
{
	static constexpr fixed_string class_name = "javax/xml/soap/SOAPElementFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPELEMENTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPELEMENTFACTORY)
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPELEMENTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/soap/Name.h>
#include <scapix/java_api/javax/xml/soap/SOAPElement.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::soap::SOAPElementFactory : public jni::object_base<"javax/xml/soap/SOAPElementFactory",
	java::lang::Object>
{
public:

	jni::ref<javax::xml::soap::SOAPElement> create(jni::ref<javax::xml::soap::Name> p1) { return call_method<"create", jni::ref<javax::xml::soap::SOAPElement>>(p1); }
	jni::ref<javax::xml::soap::SOAPElement> create(jni::ref<java::lang::String> p1) { return call_method<"create", jni::ref<javax::xml::soap::SOAPElement>>(p1); }
	jni::ref<javax::xml::soap::SOAPElement> create(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"create", jni::ref<javax::xml::soap::SOAPElement>>(p1, p2, p3); }
	static jni::ref<javax::xml::soap::SOAPElementFactory> newInstance() { return call_static_method<"newInstance", jni::ref<javax::xml::soap::SOAPElementFactory>>(); }

protected:

	SOAPElementFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPELEMENTFACTORY
