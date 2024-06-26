// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_CACHINGPARSERPOOL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_CACHINGPARSERPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class CachingParserPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::CachingParserPool>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/CachingParserPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_CACHINGPARSERPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_CACHINGPARSERPOOL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_CACHINGPARSERPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/DOMParser.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/CachingParserPool_SynchronizedGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/CachingParserPool_ShadowedGrammarPool.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::CachingParserPool : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/CachingParserPool",
	java::lang::Object>
{
public:

	using SynchronizedGrammarPool = CachingParserPool_SynchronizedGrammarPool;
	using ShadowedGrammarPool = CachingParserPool_ShadowedGrammarPool;

	static jboolean DEFAULT_SHADOW_SYMBOL_TABLE() { return get_static_field<"DEFAULT_SHADOW_SYMBOL_TABLE", jboolean>(); }
	static jboolean DEFAULT_SHADOW_GRAMMAR_POOL() { return get_static_field<"DEFAULT_SHADOW_GRAMMAR_POOL", jboolean>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::parsers::CachingParserPool> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::CachingParserPool> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> getSymbolTable() { return call_method<"getSymbolTable", jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> getXMLGrammarPool() { return call_method<"getXMLGrammarPool", jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool>>(); }
	void setShadowSymbolTable(jboolean p1) { return call_method<"setShadowSymbolTable", void>(p1); }
	jni::ref<com::sun::org::apache::xerces::internal::parsers::DOMParser> createDOMParser() { return call_method<"createDOMParser", jni::ref<com::sun::org::apache::xerces::internal::parsers::DOMParser>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::parsers::SAXParser> createSAXParser() { return call_method<"createSAXParser", jni::ref<com::sun::org::apache::xerces::internal::parsers::SAXParser>>(); }

protected:

	CachingParserPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_CACHINGPARSERPOOL
