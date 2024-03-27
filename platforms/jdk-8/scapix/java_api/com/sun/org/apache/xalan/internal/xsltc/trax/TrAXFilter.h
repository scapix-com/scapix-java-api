// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/xml/sax/helpers/XMLFilterImpl.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRAXFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRAXFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax { class TrAXFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::trax::TrAXFilter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/trax/TrAXFilter";
	using base_classes = std::tuple<scapix::java_api::org::xml::sax::helpers::XMLFilterImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRAXFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRAXFILTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRAXFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/ErrorListener.h>
#include <scapix/java_api/javax/xml/transform/Templates.h>
#include <scapix/java_api/javax/xml/transform/Transformer.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::trax::TrAXFilter : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/trax/TrAXFilter",
	org::xml::sax::helpers::XMLFilterImpl>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::trax::TrAXFilter> new_object(jni::ref<javax::xml::transform::Templates> p1) { return base_::new_object(p1); }
	jni::ref<javax::xml::transform::Transformer> getTransformer() { return call_method<"getTransformer", jni::ref<javax::xml::transform::Transformer>>(); }
	void parse(jni::ref<org::xml::sax::InputSource> p1) { return call_method<"parse", void>(p1); }
	void parse(jni::ref<java::lang::String> p1) { return call_method<"parse", void>(p1); }
	void setContentHandler(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"setContentHandler", void>(p1); }
	void setErrorListener(jni::ref<javax::xml::transform::ErrorListener> p1) { return call_method<"setErrorListener", void>(p1); }

protected:

	TrAXFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_TRAX_TRAXFILTER
