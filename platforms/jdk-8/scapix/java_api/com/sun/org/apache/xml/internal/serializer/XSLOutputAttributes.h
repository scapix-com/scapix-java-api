// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_XSLOUTPUTATTRIBUTES_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_XSLOUTPUTATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::serializer { class XSLOutputAttributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::serializer::XSLOutputAttributes>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/serializer/XSLOutputAttributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_XSLOUTPUTATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_XSLOUTPUTATTRIBUTES)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_XSLOUTPUTATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xml::internal::serializer::XSLOutputAttributes : public jni::object_base<"com/sun/org/apache/xml/internal/serializer/XSLOutputAttributes",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getDoctypePublic() { return call_method<"getDoctypePublic", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDoctypeSystem() { return call_method<"getDoctypeSystem", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getEncoding() { return call_method<"getEncoding", jni::ref<java::lang::String>>(); }
	jboolean getIndent() { return call_method<"getIndent", jboolean>(); }
	jint getIndentAmount() { return call_method<"getIndentAmount", jint>(); }
	jni::ref<java::lang::String> getMediaType() { return call_method<"getMediaType", jni::ref<java::lang::String>>(); }
	jboolean getOmitXMLDeclaration() { return call_method<"getOmitXMLDeclaration", jboolean>(); }
	jni::ref<java::lang::String> getStandalone() { return call_method<"getStandalone", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	void setCdataSectionElements(jni::ref<java::util::List> p1) { return call_method<"setCdataSectionElements", void>(p1); }
	void setDoctype(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setDoctype", void>(p1, p2); }
	void setDoctypePublic(jni::ref<java::lang::String> p1) { return call_method<"setDoctypePublic", void>(p1); }
	void setDoctypeSystem(jni::ref<java::lang::String> p1) { return call_method<"setDoctypeSystem", void>(p1); }
	void setEncoding(jni::ref<java::lang::String> p1) { return call_method<"setEncoding", void>(p1); }
	void setIndent(jboolean p1) { return call_method<"setIndent", void>(p1); }
	void setMediaType(jni::ref<java::lang::String> p1) { return call_method<"setMediaType", void>(p1); }
	void setOmitXMLDeclaration(jboolean p1) { return call_method<"setOmitXMLDeclaration", void>(p1); }
	void setStandalone(jni::ref<java::lang::String> p1) { return call_method<"setStandalone", void>(p1); }
	void setVersion(jni::ref<java::lang::String> p1) { return call_method<"setVersion", void>(p1); }
	jni::ref<java::lang::String> getOutputProperty(jni::ref<java::lang::String> p1) { return call_method<"getOutputProperty", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getOutputPropertyDefault(jni::ref<java::lang::String> p1) { return call_method<"getOutputPropertyDefault", jni::ref<java::lang::String>>(p1); }
	void setOutputProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setOutputProperty", void>(p1, p2); }
	void setOutputPropertyDefault(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setOutputPropertyDefault", void>(p1, p2); }

protected:

	XSLOutputAttributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_SERIALIZER_XSLOUTPUTATTRIBUTES
