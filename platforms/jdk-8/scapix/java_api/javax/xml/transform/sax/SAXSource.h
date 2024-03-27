// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/xml/transform/Source.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::transform::sax { class SAXSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::transform::sax::SAXSource>
{
	static constexpr fixed_string class_name = "javax/xml/transform/sax/SAXSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::xml::transform::Source>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE)
#define SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::transform::sax::SAXSource : public jni::object_base<"javax/xml/transform/sax/SAXSource",
	java::lang::Object,
	javax::xml::transform::Source>
{
public:

	static jni::ref<java::lang::String> FEATURE() { return get_static_field<"FEATURE", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::xml::transform::sax::SAXSource> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::transform::sax::SAXSource> new_object(jni::ref<org::xml::sax::XMLReader> p1, jni::ref<org::xml::sax::InputSource> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::transform::sax::SAXSource> new_object(jni::ref<org::xml::sax::InputSource> p1) { return base_::new_object(p1); }
	void setXMLReader(jni::ref<org::xml::sax::XMLReader> p1) { return call_method<"setXMLReader", void>(p1); }
	jni::ref<org::xml::sax::XMLReader> getXMLReader() { return call_method<"getXMLReader", jni::ref<org::xml::sax::XMLReader>>(); }
	void setInputSource(jni::ref<org::xml::sax::InputSource> p1) { return call_method<"setInputSource", void>(p1); }
	jni::ref<org::xml::sax::InputSource> getInputSource() { return call_method<"getInputSource", jni::ref<org::xml::sax::InputSource>>(); }
	void setSystemId(jni::ref<java::lang::String> p1) { return call_method<"setSystemId", void>(p1); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }
	static jni::ref<org::xml::sax::InputSource> sourceToInputSource(jni::ref<javax::xml::transform::Source> p1) { return call_static_method<"sourceToInputSource", jni::ref<org::xml::sax::InputSource>>(p1); }

protected:

	SAXSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_TRANSFORM_SAX_SAXSOURCE
