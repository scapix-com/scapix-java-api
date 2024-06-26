// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/bind/ValidationEventLocator.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTLOCATORIMPL_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTLOCATORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::helpers { class ValidationEventLocatorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::helpers::ValidationEventLocatorImpl>
{
	static constexpr fixed_string class_name = "javax/xml/bind/helpers/ValidationEventLocatorImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::bind::ValidationEventLocator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTLOCATORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTLOCATORIMPL)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTLOCATORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#include <scapix/java_api/org/xml/sax/SAXParseException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::helpers::ValidationEventLocatorImpl : public jni::object_base<"javax/xml/bind/helpers/ValidationEventLocatorImpl",
	java::lang::Object,
	javax::xml::bind::ValidationEventLocator>
{
public:

	static jni::ref<javax::xml::bind::helpers::ValidationEventLocatorImpl> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::bind::helpers::ValidationEventLocatorImpl> new_object(jni::ref<org::xml::sax::Locator> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::helpers::ValidationEventLocatorImpl> new_object(jni::ref<org::xml::sax::SAXParseException> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::helpers::ValidationEventLocatorImpl> new_object(jni::ref<org::w3c::dom::Node> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::helpers::ValidationEventLocatorImpl> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	jni::ref<java::net::URL> getURL() { return call_method<"getURL", jni::ref<java::net::URL>>(); }
	void setURL(jni::ref<java::net::URL> p1) { return call_method<"setURL", void>(p1); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	void setOffset(jint p1) { return call_method<"setOffset", void>(p1); }
	jint getLineNumber() { return call_method<"getLineNumber", jint>(); }
	void setLineNumber(jint p1) { return call_method<"setLineNumber", void>(p1); }
	jint getColumnNumber() { return call_method<"getColumnNumber", jint>(); }
	void setColumnNumber(jint p1) { return call_method<"setColumnNumber", void>(p1); }
	jni::ref<java::lang::Object> getObject() { return call_method<"getObject", jni::ref<java::lang::Object>>(); }
	void setObject(jni::ref<java::lang::Object> p1) { return call_method<"setObject", void>(p1); }
	jni::ref<org::w3c::dom::Node> getNode() { return call_method<"getNode", jni::ref<org::w3c::dom::Node>>(); }
	void setNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setNode", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ValidationEventLocatorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_HELPERS_VALIDATIONEVENTLOCATORIMPL
