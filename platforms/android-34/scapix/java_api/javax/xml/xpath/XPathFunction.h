// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTION_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::xpath { class XPathFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::xpath::XPathFunction>
{
	static constexpr fixed_string class_name = "javax/xml/xpath/XPathFunction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTION)
#define SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::xml::xpath::XPathFunction : public jni::object_base<"javax/xml/xpath/XPathFunction",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> evaluate(jni::ref<java::util::List> p1) { return call_method<"evaluate", jni::ref<java::lang::Object>>(p1); }

protected:

	XPathFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_XPATH_XPATHFUNCTION
