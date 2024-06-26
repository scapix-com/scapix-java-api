// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_INCREMENTALSAXSOURCE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_INCREMENTALSAXSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class IncrementalSAXSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_INCREMENTALSAXSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_INCREMENTALSAXSOURCE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_INCREMENTALSAXSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/ext/LexicalHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource",
	java::lang::Object>
{
public:

	void setContentHandler(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"setContentHandler", void>(p1); }
	void setLexicalHandler(jni::ref<org::xml::sax::ext::LexicalHandler> p1) { return call_method<"setLexicalHandler", void>(p1); }
	void setDTDHandler(jni::ref<org::xml::sax::DTDHandler> p1) { return call_method<"setDTDHandler", void>(p1); }
	jni::ref<java::lang::Object> deliverMoreNodes(jboolean p1) { return call_method<"deliverMoreNodes", jni::ref<java::lang::Object>>(p1); }
	void startParse(jni::ref<org::xml::sax::InputSource> p1) { return call_method<"startParse", void>(p1); }

protected:

	IncrementalSAXSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_INCREMENTALSAXSOURCE
