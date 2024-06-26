// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class JAXBException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::JAXBException>
{
	static constexpr fixed_string class_name = "javax/xml/bind/JAXBException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::bind::JAXBException : public jni::object_base<"javax/xml/bind/JAXBException",
	java::lang::Exception>
{
public:

	static jni::ref<javax::xml::bind::JAXBException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::JAXBException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::bind::JAXBException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }
	static jni::ref<javax::xml::bind::JAXBException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::xml::bind::JAXBException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getErrorCode() { return call_method<"getErrorCode", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Throwable> getLinkedException() { return call_method<"getLinkedException", jni::ref<java::lang::Throwable>>(); }
	void setLinkedException(jni::ref<java::lang::Throwable> p1) { return call_method<"setLinkedException", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void printStackTrace(jni::ref<java::io::PrintStream> p1) { return call_method<"printStackTrace", void>(p1); }
	void printStackTrace() { return call_method<"printStackTrace", void>(); }
	void printStackTrace(jni::ref<java::io::PrintWriter> p1) { return call_method<"printStackTrace", void>(p1); }
	jni::ref<java::lang::Throwable> getCause() { return call_method<"getCause", jni::ref<java::lang::Throwable>>(); }

protected:

	JAXBException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_JAXBEXCEPTION
