// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_COROUTINEPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_COROUTINEPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class CoroutineParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::CoroutineParser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/CoroutineParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_COROUTINEPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_COROUTINEPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_COROUTINEPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/CoroutineManager.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#include <scapix/java_api/org/xml/sax/ext/LexicalHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::CoroutineParser : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/CoroutineParser",
	java::lang::Object>
{
public:

	jint getParserCoroutineID() { return call_method<"getParserCoroutineID", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager> getCoroutineManager() { return call_method<"getCoroutineManager", jni::ref<com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager>>(); }
	void setContentHandler(jni::ref<org::xml::sax::ContentHandler> p1) { return call_method<"setContentHandler", void>(p1); }
	void setLexHandler(jni::ref<org::xml::sax::ext::LexicalHandler> p1) { return call_method<"setLexHandler", void>(p1); }
	jni::ref<java::lang::Object> doParse(jni::ref<org::xml::sax::InputSource> p1, jint p2) { return call_method<"doParse", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> doMore(jboolean p1, jint p2) { return call_method<"doMore", jni::ref<java::lang::Object>>(p1, p2); }
	void doTerminate(jint p1) { return call_method<"doTerminate", void>(p1); }
	void init(jni::ref<com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager> p1, jint p2, jni::ref<org::xml::sax::XMLReader> p3) { return call_method<"init", void>(p1, p2, p3); }

protected:

	CoroutineParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_COROUTINEPARSER
