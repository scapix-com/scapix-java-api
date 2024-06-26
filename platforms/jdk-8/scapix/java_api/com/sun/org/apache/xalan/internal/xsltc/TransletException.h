// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/xml/sax/SAXException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRANSLETEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRANSLETEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc { class TransletException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::TransletException>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/TransletException";
	using base_classes = std::tuple<scapix::java_api::org::xml::sax::SAXException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRANSLETEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRANSLETEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRANSLETEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Exception.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::TransletException : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/TransletException",
	org::xml::sax::SAXException>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::TransletException> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::TransletException> new_object(jni::ref<java::lang::Exception> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::TransletException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	TransletException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRANSLETEXCEPTION
