// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_CSSVALUE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_CSSVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class CSS_CssValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::CSS_CssValue>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/CSS$CssValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_CSSVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_CSSVALUE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_CSSVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::CSS_CssValue : public jni::object_base<"javax/swing/text/html/CSS$CssValue",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	CSS_CssValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_CSSVALUE
