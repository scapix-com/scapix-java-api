// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/javax/xml/soap/Node.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPPART_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPPART_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::soap { class SOAPPart; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::soap::SOAPPart>
{
	static constexpr fixed_string class_name = "javax/xml/soap/SOAPPart";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Document, scapix::java_api::javax::xml::soap::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPPART_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPPART)
#define SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPPART

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/javax/xml/soap/SOAPEnvelope.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::soap::SOAPPart : public jni::object_base<"javax/xml/soap/SOAPPart",
	java::lang::Object,
	org::w3c::dom::Document,
	javax::xml::soap::Node>
{
public:

	static jni::ref<javax::xml::soap::SOAPPart> new_object() { return base_::new_object(); }
	jni::ref<javax::xml::soap::SOAPEnvelope> getEnvelope() { return call_method<"getEnvelope", jni::ref<javax::xml::soap::SOAPEnvelope>>(); }
	jni::ref<java::lang::String> getContentId() { return call_method<"getContentId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getContentLocation() { return call_method<"getContentLocation", jni::ref<java::lang::String>>(); }
	void setContentId(jni::ref<java::lang::String> p1) { return call_method<"setContentId", void>(p1); }
	void setContentLocation(jni::ref<java::lang::String> p1) { return call_method<"setContentLocation", void>(p1); }
	void removeMimeHeader(jni::ref<java::lang::String> p1) { return call_method<"removeMimeHeader", void>(p1); }
	void removeAllMimeHeaders() { return call_method<"removeAllMimeHeaders", void>(); }
	jni::ref<jni::array<java::lang::String>> getMimeHeader(jni::ref<java::lang::String> p1) { return call_method<"getMimeHeader", jni::ref<jni::array<java::lang::String>>>(p1); }
	void setMimeHeader(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setMimeHeader", void>(p1, p2); }
	void addMimeHeader(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addMimeHeader", void>(p1, p2); }
	jni::ref<java::util::Iterator> getAllMimeHeaders() { return call_method<"getAllMimeHeaders", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::util::Iterator> getMatchingMimeHeaders(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getMatchingMimeHeaders", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<java::util::Iterator> getNonMatchingMimeHeaders(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getNonMatchingMimeHeaders", jni::ref<java::util::Iterator>>(p1); }
	void setContent(jni::ref<javax::xml::transform::Source> p1) { return call_method<"setContent", void>(p1); }
	jni::ref<javax::xml::transform::Source> getContent() { return call_method<"getContent", jni::ref<javax::xml::transform::Source>>(); }

protected:

	SOAPPart(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_SOAP_SOAPPART
