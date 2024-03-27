// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/BasicParserConfiguration.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DTDCONFIGURATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DTDCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class DTDConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::DTDConfiguration>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/DTDConfiguration";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration, scapix::java_api::com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DTDCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DTDCONFIGURATION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DTDCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/PropertyState.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLComponentManager.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::DTDConfiguration : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/DTDConfiguration",
	com::sun::org::apache::xerces::internal::parsers::BasicParserConfiguration,
	com::sun::org::apache::xerces::internal::xni::parser::XMLPullParserConfiguration>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DTDConfiguration> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DTDConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DTDConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DTDConfiguration> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState> getPropertyState(jni::ref<java::lang::String> p1) { return call_method<"getPropertyState", jni::ref<com::sun::org::apache::xerces::internal::util::PropertyState>>(p1); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	void setLocale(jni::ref<java::util::Locale> p1) { return call_method<"setLocale", void>(p1); }
	void setInputSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1) { return call_method<"setInputSource", void>(p1); }
	jboolean parse(jboolean p1) { return call_method<"parse", jboolean>(p1); }
	void cleanup() { return call_method<"cleanup", void>(); }
	void parse(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1) { return call_method<"parse", void>(p1); }

protected:

	DTDConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DTDCONFIGURATION
