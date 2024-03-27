// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/xml/sax/SAXException.h>

#ifndef SCAPIX_JAVA_API_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::xml::sax { class SAXNotRecognizedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::xml::sax::SAXNotRecognizedException>
{
	static constexpr fixed_string class_name = "org/xml/sax/SAXNotRecognizedException";
	using base_classes = std::tuple<scapix::java_api::org::xml::sax::SAXException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION)
#define SCAPIX_JAVA_API_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::xml::sax::SAXNotRecognizedException : public jni::object_base<"org/xml/sax/SAXNotRecognizedException",
	org::xml::sax::SAXException>
{
public:

	static jni::ref<org::xml::sax::SAXNotRecognizedException> new_object() { return base_::new_object(); }
	static jni::ref<org::xml::sax::SAXNotRecognizedException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	SAXNotRecognizedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION
