// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_HTMLTextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHTMLTEXTACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHTMLTEXTACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLEditorKit_InsertHTMLTextAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLEditorKit_InsertHTMLTextAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLEditorKit$InsertHTMLTextAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::HTMLEditorKit_HTMLTextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHTMLTEXTACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHTMLTEXTACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHTMLTEXTACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/html/HTML_Tag.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::HTMLEditorKit_InsertHTMLTextAction : public jni::object_base<"javax/swing/text/html/HTMLEditorKit$InsertHTMLTextAction",
	javax::swing::text::html::HTMLEditorKit_HTMLTextAction>
{
public:

	static jni::ref<javax::swing::text::html::HTMLEditorKit_InsertHTMLTextAction> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<javax::swing::text::html::HTML_Tag> p3, jni::ref<javax::swing::text::html::HTML_Tag> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<javax::swing::text::html::HTMLEditorKit_InsertHTMLTextAction> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<javax::swing::text::html::HTML_Tag> p3, jni::ref<javax::swing::text::html::HTML_Tag> p4, jni::ref<javax::swing::text::html::HTML_Tag> p5, jni::ref<javax::swing::text::html::HTML_Tag> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	HTMLEditorKit_InsertHTMLTextAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHTMLTEXTACTION
