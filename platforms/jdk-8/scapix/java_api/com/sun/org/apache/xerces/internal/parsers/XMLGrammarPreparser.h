// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLGRAMMARPREPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLGRAMMARPREPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class XMLGrammarPreparser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::XMLGrammarPreparser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/XMLGrammarPreparser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLGRAMMARPREPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLGRAMMARPREPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLGRAMMARPREPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::XMLGrammarPreparser : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/XMLGrammarPreparser",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XMLGrammarPreparser> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XMLGrammarPreparser> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	jboolean registerPreparser(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader> p2) { return call_method<"registerPreparser", jboolean>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar> preparseGrammar(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p2) { return call_method<"preparseGrammar", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::Grammar>>(p1, p2); }
	void setLocale(jni::ref<java::util::Locale> p1) { return call_method<"setLocale", void>(p1); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	void setErrorHandler(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler> p1) { return call_method<"setErrorHandler", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler> getErrorHandler() { return call_method<"getErrorHandler", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler>>(); }
	void setEntityResolver(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver> p1) { return call_method<"setEntityResolver", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver> getEntityResolver() { return call_method<"getEntityResolver", jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver>>(); }
	void setGrammarPool(jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p1) { return call_method<"setGrammarPool", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> getGrammarPool() { return call_method<"getGrammarPool", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader> getLoader(jni::ref<java::lang::String> p1) { return call_method<"getLoader", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarLoader>>(p1); }
	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jboolean getFeature(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getFeature", jboolean>(p1, p2); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	XMLGrammarPreparser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLGRAMMARPREPARSER
