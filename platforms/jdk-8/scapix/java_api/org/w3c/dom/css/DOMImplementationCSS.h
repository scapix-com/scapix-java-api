// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/DOMImplementation.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_DOMIMPLEMENTATIONCSS_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_DOMIMPLEMENTATIONCSS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::css { class DOMImplementationCSS; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::css::DOMImplementationCSS>
{
	static constexpr fixed_string class_name = "org/w3c/dom/css/DOMImplementationCSS";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::DOMImplementation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_DOMIMPLEMENTATIONCSS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_DOMIMPLEMENTATIONCSS)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_DOMIMPLEMENTATIONCSS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/css/CSSStyleSheet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::css::DOMImplementationCSS : public jni::object_base<"org/w3c/dom/css/DOMImplementationCSS",
	java::lang::Object,
	org::w3c::dom::DOMImplementation>
{
public:

	jni::ref<org::w3c::dom::css::CSSStyleSheet> createCSSStyleSheet(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"createCSSStyleSheet", jni::ref<org::w3c::dom::css::CSSStyleSheet>>(p1, p2); }

protected:

	DOMImplementationCSS(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_DOMIMPLEMENTATIONCSS
