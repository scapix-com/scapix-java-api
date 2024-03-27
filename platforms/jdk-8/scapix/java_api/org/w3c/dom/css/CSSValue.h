// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSSVALUE_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSSVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::css { class CSSValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::css::CSSValue>
{
	static constexpr fixed_string class_name = "org/w3c/dom/css/CSSValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSSVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSSVALUE)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSSVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::css::CSSValue : public jni::object_base<"org/w3c/dom/css/CSSValue",
	java::lang::Object>
{
public:

	static jshort CSS_INHERIT() { return get_static_field<"CSS_INHERIT", jshort>(); }
	static jshort CSS_PRIMITIVE_VALUE() { return get_static_field<"CSS_PRIMITIVE_VALUE", jshort>(); }
	static jshort CSS_VALUE_LIST() { return get_static_field<"CSS_VALUE_LIST", jshort>(); }
	static jshort CSS_CUSTOM() { return get_static_field<"CSS_CUSTOM", jshort>(); }

	jni::ref<java::lang::String> getCssText() { return call_method<"getCssText", jni::ref<java::lang::String>>(); }
	void setCssText(jni::ref<java::lang::String> p1) { return call_method<"setCssText", void>(p1); }
	jshort getCssValueType() { return call_method<"getCssValueType", jshort>(); }

protected:

	CSSValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_CSSVALUE