// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_WHITESPACE_WHITESPACERULE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_WHITESPACE_WHITESPACERULE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class Whitespace_WhitespaceRule; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace_WhitespaceRule>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_WHITESPACE_WHITESPACERULE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_WHITESPACE_WHITESPACERULE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_WHITESPACE_WHITESPACERULE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace_WhitespaceRule : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/Whitespace$WhitespaceRule",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace_WhitespaceRule> new_object(jint p1, jni::ref<java::lang::String> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jint compareTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace_WhitespaceRule> p1) { return call_method<"compareTo", jint>(p1); }
	jint getAction() { return call_method<"getAction", jint>(); }
	jint getStrength() { return call_method<"getStrength", jint>(); }
	jint getPriority() { return call_method<"getPriority", jint>(); }
	jni::ref<java::lang::String> getElement() { return call_method<"getElement", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }

protected:

	Whitespace_WhitespaceRule(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_WHITESPACE_WHITESPACERULE