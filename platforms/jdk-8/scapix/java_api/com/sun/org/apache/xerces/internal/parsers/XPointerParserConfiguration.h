// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/XML11Configuration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XPOINTERPARSERCONFIGURATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XPOINTERPARSERCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class XPointerParserConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/XPointerParserConfiguration";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::XML11Configuration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XPOINTERPARSERCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XPOINTERPARSERCONFIGURATION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XPOINTERPARSERCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/XPointerParserConfiguration",
	com::sun::org::apache::xerces::internal::parsers::XML11Configuration>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XPointerParserConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager> p3) { return base_::new_object(p1, p2, p3); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }

protected:

	XPointerParserConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XPOINTERPARSERCONFIGURATION
