// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/InlineView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_BRVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_BRVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class BRView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::BRView>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/BRView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::InlineView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_BRVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_BRVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_BRVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::BRView : public jni::object_base<"javax/swing/text/html/BRView",
	javax::swing::text::html::InlineView>
{
public:

	static jni::ref<javax::swing::text::html::BRView> new_object(jni::ref<javax::swing::text::Element> p1) { return base_::new_object(p1); }
	jint getBreakWeight(jint p1, jfloat p2, jfloat p3) { return call_method<"getBreakWeight", jint>(p1, p2, p3); }

protected:

	BRView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_BRVIEW
