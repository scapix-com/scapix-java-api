// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/NavigationFilter_FilterBypass.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTCARET_DEFAULTFILTERBYPASS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTCARET_DEFAULTFILTERBYPASS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultCaret_DefaultFilterBypass; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultCaret_DefaultFilterBypass>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultCaret$DefaultFilterBypass";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::NavigationFilter_FilterBypass>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTCARET_DEFAULTFILTERBYPASS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTCARET_DEFAULTFILTERBYPASS)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTCARET_DEFAULTFILTERBYPASS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Caret.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultCaret_DefaultFilterBypass : public jni::object_base<"javax/swing/text/DefaultCaret$DefaultFilterBypass",
	javax::swing::text::NavigationFilter_FilterBypass>
{
public:

	jni::ref<javax::swing::text::Caret> getCaret() { return call_method<"getCaret", jni::ref<javax::swing::text::Caret>>(); }
	void setDot(jint p1, jni::ref<javax::swing::text::Position_Bias> p2) { return call_method<"setDot", void>(p1, p2); }
	void moveDot(jint p1, jni::ref<javax::swing::text::Position_Bias> p2) { return call_method<"moveDot", void>(p1, p2); }

protected:

	DefaultCaret_DefaultFilterBypass(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTCARET_DEFAULTFILTERBYPASS