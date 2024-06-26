// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/HiddenTagView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_COMMENTVIEW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_COMMENTVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class CommentView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::CommentView>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/CommentView";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::HiddenTagView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_COMMENTVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_COMMENTVIEW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_COMMENTVIEW

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::CommentView : public jni::object_base<"javax/swing/text/html/CommentView",
	javax::swing::text::html::HiddenTagView>
{
public:


protected:

	CommentView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_COMMENTVIEW
