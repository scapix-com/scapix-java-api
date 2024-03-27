// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/xml/sax/helpers/DefaultHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_XMLERRORHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_XMLERRORHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::rowset::internal { class XmlErrorHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::rowset::internal::XmlErrorHandler>
{
	static constexpr fixed_string class_name = "com/sun/rowset/internal/XmlErrorHandler";
	using base_classes = std::tuple<scapix::java_api::org::xml::sax::helpers::DefaultHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_XMLERRORHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_XMLERRORHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_XMLERRORHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/xml/sax/SAXParseException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::rowset::internal::XmlErrorHandler : public jni::object_base<"com/sun/rowset/internal/XmlErrorHandler",
	org::xml::sax::helpers::DefaultHandler>
{
public:

	jint errorCounter() { return get_field<"errorCounter", jint>(); }
	void errorCounter(jint v) { set_field<"errorCounter", jint>(v); }

	static jni::ref<com::sun::rowset::internal::XmlErrorHandler> new_object() { return base_::new_object(); }
	void error(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"error", void>(p1); }
	void fatalError(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"fatalError", void>(p1); }
	void warning(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"warning", void>(p1); }

protected:

	XmlErrorHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ROWSET_INTERNAL_XMLERRORHANDLER
