// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#include <scapix/java_api/javax/xml/transform/ErrorListener.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_LISTINGERRORHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_LISTINGERRORHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class ListingErrorHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::ListingErrorHandler>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/ListingErrorHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::xml::sax::ErrorHandler, scapix::java_api::javax::xml::transform::ErrorListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_LISTINGERRORHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_LISTINGERRORHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_LISTINGERRORHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>
#include <scapix/java_api/javax/xml/transform/TransformerException.h>
#include <scapix/java_api/org/xml/sax/SAXParseException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::ListingErrorHandler : public jni::object_base<"com/sun/org/apache/xml/internal/utils/ListingErrorHandler",
	java::lang::Object,
	org::xml::sax::ErrorHandler,
	javax::xml::transform::ErrorListener>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::ListingErrorHandler> new_object(jni::ref<java::io::PrintWriter> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::ListingErrorHandler> new_object() { return base_::new_object(); }
	void warning(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"warning", void>(p1); }
	void error(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"error", void>(p1); }
	void fatalError(jni::ref<org::xml::sax::SAXParseException> p1) { return call_method<"fatalError", void>(p1); }
	void warning(jni::ref<javax::xml::transform::TransformerException> p1) { return call_method<"warning", void>(p1); }
	void error(jni::ref<javax::xml::transform::TransformerException> p1) { return call_method<"error", void>(p1); }
	void fatalError(jni::ref<javax::xml::transform::TransformerException> p1) { return call_method<"fatalError", void>(p1); }
	static void logExceptionLocation(jni::ref<java::io::PrintWriter> p1, jni::ref<java::lang::Throwable> p2) { return call_static_method<"logExceptionLocation", void>(p1, p2); }
	static void logSourceLine(jni::ref<java::io::PrintWriter> p1, jni::ref<javax::xml::transform::SourceLocator> p2) { return call_static_method<"logSourceLine", void>(p1, p2); }
	void setThrowOnWarning(jboolean p1) { return call_method<"setThrowOnWarning", void>(p1); }
	jboolean getThrowOnWarning() { return call_method<"getThrowOnWarning", jboolean>(); }
	void setThrowOnError(jboolean p1) { return call_method<"setThrowOnError", void>(p1); }
	jboolean getThrowOnError() { return call_method<"getThrowOnError", jboolean>(); }
	void setThrowOnFatalError(jboolean p1) { return call_method<"setThrowOnFatalError", void>(p1); }
	jboolean getThrowOnFatalError() { return call_method<"getThrowOnFatalError", jboolean>(); }

protected:

	ListingErrorHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_LISTINGERRORHANDLER
