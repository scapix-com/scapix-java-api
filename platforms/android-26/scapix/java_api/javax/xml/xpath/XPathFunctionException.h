// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/xml/xpath/XPathExpressionException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::xpath { class XPathFunctionException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::xpath::XPathFunctionException>
{
	static constexpr fixed_string class_name = "javax/xml/xpath/XPathFunctionException";
	using base_classes = std::tuple<scapix::java_api::javax::xml::xpath::XPathExpressionException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::xpath::XPathFunctionException : public jni::object_base<"javax/xml/xpath/XPathFunctionException",
	javax::xml::xpath::XPathExpressionException>
{
public:

	static jni::ref<javax::xml::xpath::XPathFunctionException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<javax::xml::xpath::XPathFunctionException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }

protected:

	XPathFunctionException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION
