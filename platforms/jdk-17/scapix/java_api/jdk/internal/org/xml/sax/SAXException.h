// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXEXCEPTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::xml::sax { class SAXException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::xml::sax::SAXException>
{
	static constexpr fixed_string class_name = "jdk/internal/org/xml/sax/SAXException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXEXCEPTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::xml::sax::SAXException : public jni::object_base<"jdk/internal/org/xml/sax/SAXException",
	java::lang::Exception>
{
public:

	static jni::ref<jdk::internal::org::xml::sax::SAXException> new_object() { return base_::new_object(); }
	static jni::ref<jdk::internal::org::xml::sax::SAXException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<jdk::internal::org::xml::sax::SAXException> new_object(jni::ref<java::lang::Exception> e) { return base_::new_object(e); }
	static jni::ref<jdk::internal::org::xml::sax::SAXException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Exception> e) { return base_::new_object(message, e); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Exception> getException() { return call_method<"getException", jni::ref<java::lang::Exception>>(); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SAXException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_XML_SAX_SAXEXCEPTION
