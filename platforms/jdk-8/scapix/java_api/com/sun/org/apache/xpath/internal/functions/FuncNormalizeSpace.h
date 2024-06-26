// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/functions/FunctionDef1Arg.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCNORMALIZESPACE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCNORMALIZESPACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::functions { class FuncNormalizeSpace; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FuncNormalizeSpace>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/functions/FuncNormalizeSpace";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCNORMALIZESPACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCNORMALIZESPACE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCNORMALIZESPACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::functions::FuncNormalizeSpace : public jni::object_base<"com/sun/org/apache/xpath/internal/functions/FuncNormalizeSpace",
	com::sun::org::apache::xpath::internal::functions::FunctionDef1Arg>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::functions::FuncNormalizeSpace> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	void executeCharsToContentHandler(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jni::ref<org::xml::sax::ContentHandler> p2) { return call_method<"executeCharsToContentHandler", void>(p1, p2); }

protected:

	FuncNormalizeSpace(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCNORMALIZESPACE
