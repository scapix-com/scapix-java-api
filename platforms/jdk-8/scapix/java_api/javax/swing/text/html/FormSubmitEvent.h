// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/HTMLFrameHyperlinkEvent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMSUBMITEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMSUBMITEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class FormSubmitEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::FormSubmitEvent>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/FormSubmitEvent";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::HTMLFrameHyperlinkEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMSUBMITEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMSUBMITEVENT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMSUBMITEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/html/FormSubmitEvent_MethodType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::FormSubmitEvent : public jni::object_base<"javax/swing/text/html/FormSubmitEvent",
	javax::swing::text::html::HTMLFrameHyperlinkEvent>
{
public:

	using MethodType = FormSubmitEvent_MethodType;

	jni::ref<javax::swing::text::html::FormSubmitEvent_MethodType> getMethod() { return call_method<"getMethod", jni::ref<javax::swing::text::html::FormSubmitEvent_MethodType>>(); }
	jni::ref<java::lang::String> getData() { return call_method<"getData", jni::ref<java::lang::String>>(); }

protected:

	FormSubmitEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMSUBMITEVENT
