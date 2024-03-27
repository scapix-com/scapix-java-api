// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/xml/sax/SAXException.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::xml::sax { class SAXNotRecognizedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::xml::sax::SAXNotRecognizedException>
{
	static constexpr fixed_string class_name = "jdk/internal/org/xml/sax/SAXNotRecognizedException";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::xml::sax::SAXException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::xml::sax::SAXNotRecognizedException : public jni::object_base<"jdk/internal/org/xml/sax/SAXNotRecognizedException",
	jdk::internal::org::xml::sax::SAXException>
{
public:

	static jni::ref<jdk::internal::org::xml::sax::SAXNotRecognizedException> new_object() { return base_::new_object(); }
	static jni::ref<jdk::internal::org::xml::sax::SAXNotRecognizedException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	SAXNotRecognizedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION
