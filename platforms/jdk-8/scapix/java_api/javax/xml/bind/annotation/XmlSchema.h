// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLSCHEMA_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLSCHEMA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind::annotation { class XmlSchema; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::annotation::XmlSchema>
{
	static constexpr fixed_string class_name = "javax/xml/bind/annotation/XmlSchema";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLSCHEMA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLSCHEMA)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLSCHEMA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/bind/annotation/XmlNs.h>
#include <scapix/java_api/javax/xml/bind/annotation/XmlNsForm.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::annotation::XmlSchema : public jni::object_base<"javax/xml/bind/annotation/XmlSchema",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	static jni::ref<java::lang::String> NO_LOCATION() { return get_static_field<"NO_LOCATION", jni::ref<java::lang::String>>(); }

	jni::ref<jni::array<javax::xml::bind::annotation::XmlNs>> xmlns() { return call_method<"xmlns", jni::ref<jni::array<javax::xml::bind::annotation::XmlNs>>>(); }
	jni::ref<java::lang::String> namespace_() { return call_method<"namespace", jni::ref<java::lang::String>>(); }
	jni::ref<javax::xml::bind::annotation::XmlNsForm> elementFormDefault() { return call_method<"elementFormDefault", jni::ref<javax::xml::bind::annotation::XmlNsForm>>(); }
	jni::ref<javax::xml::bind::annotation::XmlNsForm> attributeFormDefault() { return call_method<"attributeFormDefault", jni::ref<javax::xml::bind::annotation::XmlNsForm>>(); }
	jni::ref<java::lang::String> location() { return call_method<"location", jni::ref<java::lang::String>>(); }

protected:

	XmlSchema(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_ANNOTATION_XMLSCHEMA
