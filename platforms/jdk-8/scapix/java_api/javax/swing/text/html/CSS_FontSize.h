// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/CSS_CssValue.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_FONTSIZE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_FONTSIZE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class CSS_FontSize; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::CSS_FontSize>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/CSS$FontSize";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::CSS_CssValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_FONTSIZE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_FONTSIZE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_FONTSIZE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::CSS_FontSize : public jni::object_base<"javax/swing/text/html/CSS$FontSize",
	javax::swing::text::html::CSS_CssValue>
{
public:


protected:

	CSS_FontSize(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_CSS_FONTSIZE