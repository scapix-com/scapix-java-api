// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/HTMLDocument_HTMLReader_BlockAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_PARAGRAPHACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_PARAGRAPHACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLDocument_HTMLReader_ParagraphAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLDocument_HTMLReader_ParagraphAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLDocument$HTMLReader$ParagraphAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::HTMLDocument_HTMLReader_BlockAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_PARAGRAPHACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_PARAGRAPHACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_PARAGRAPHACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/javax/swing/text/html/HTML_Tag.h>
#include <scapix/java_api/javax/swing/text/html/HTMLDocument_HTMLReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::HTMLDocument_HTMLReader_ParagraphAction : public jni::object_base<"javax/swing/text/html/HTMLDocument$HTMLReader$ParagraphAction",
	javax::swing::text::html::HTMLDocument_HTMLReader_BlockAction>
{
public:

	static jni::ref<javax::swing::text::html::HTMLDocument_HTMLReader_ParagraphAction> new_object(jni::ref<javax::swing::text::html::HTMLDocument_HTMLReader> p1) { return base_::new_object(p1); }
	void start(jni::ref<javax::swing::text::html::HTML_Tag> p1, jni::ref<javax::swing::text::MutableAttributeSet> p2) { return call_method<"start", void>(p1, p2); }
	void end(jni::ref<javax::swing::text::html::HTML_Tag> p1) { return call_method<"end", void>(p1); }

protected:

	HTMLDocument_HTMLReader_ParagraphAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLDOCUMENT_HTMLREADER_PARAGRAPHACTION
