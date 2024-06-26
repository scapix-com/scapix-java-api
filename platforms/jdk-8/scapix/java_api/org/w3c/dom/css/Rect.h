// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_RECT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_RECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::css { class Rect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::css::Rect>
{
	static constexpr fixed_string class_name = "org/w3c/dom/css/Rect";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_RECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_RECT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_RECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/w3c/dom/css/CSSPrimitiveValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::css::Rect : public jni::object_base<"org/w3c/dom/css/Rect",
	java::lang::Object>
{
public:

	jni::ref<org::w3c::dom::css::CSSPrimitiveValue> getTop() { return call_method<"getTop", jni::ref<org::w3c::dom::css::CSSPrimitiveValue>>(); }
	jni::ref<org::w3c::dom::css::CSSPrimitiveValue> getRight() { return call_method<"getRight", jni::ref<org::w3c::dom::css::CSSPrimitiveValue>>(); }
	jni::ref<org::w3c::dom::css::CSSPrimitiveValue> getBottom() { return call_method<"getBottom", jni::ref<org::w3c::dom::css::CSSPrimitiveValue>>(); }
	jni::ref<org::w3c::dom::css::CSSPrimitiveValue> getLeft() { return call_method<"getLeft", jni::ref<org::w3c::dom::css::CSSPrimitiveValue>>(); }

protected:

	Rect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_CSS_RECT
