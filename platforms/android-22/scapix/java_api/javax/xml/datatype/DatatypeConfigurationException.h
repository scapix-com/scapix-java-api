// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::datatype { class DatatypeConfigurationException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::datatype::DatatypeConfigurationException>
{
	static constexpr fixed_string class_name = "javax/xml/datatype/DatatypeConfigurationException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::datatype::DatatypeConfigurationException : public jni::object_base<"javax/xml/datatype/DatatypeConfigurationException",
	java::lang::Exception>
{
public:

	static jni::ref<javax::xml::datatype::DatatypeConfigurationException> new_object() { return base_::new_object(); }
	static jni::ref<javax::xml::datatype::DatatypeConfigurationException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<javax::xml::datatype::DatatypeConfigurationException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	static jni::ref<javax::xml::datatype::DatatypeConfigurationException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
	void printStackTrace() { return call_method<"printStackTrace", void>(); }
	void printStackTrace(jni::ref<java::io::PrintStream> s) { return call_method<"printStackTrace", void>(s); }
	void printStackTrace(jni::ref<java::io::PrintWriter> s) { return call_method<"printStackTrace", void>(s); }

protected:

	DatatypeConfigurationException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION
