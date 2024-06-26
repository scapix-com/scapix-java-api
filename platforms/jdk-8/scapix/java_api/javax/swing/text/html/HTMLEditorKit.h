// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyledEditorKit.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLEditorKit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLEditorKit>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLEditorKit";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyledEditorKit, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Cursor.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/Action.h>
#include <scapix/java_api/javax/swing/JEditorPane.h>
#include <scapix/java_api/javax/swing/text/Document.h>
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/javax/swing/text/ViewFactory.h>
#include <scapix/java_api/javax/swing/text/html/HTML_Tag.h>
#include <scapix/java_api/javax/swing/text/html/HTMLDocument.h>
#include <scapix/java_api/javax/swing/text/html/StyleSheet.h>
#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_LinkController.h>
#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_Parser.h>
#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_ParserCallback.h>
#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_HTMLFactory.h>
#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_HTMLTextAction.h>
#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_InsertHTMLTextAction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::HTMLEditorKit : public jni::object_base<"javax/swing/text/html/HTMLEditorKit",
	javax::swing::text::StyledEditorKit,
	javax::accessibility::Accessible>
{
public:

	using LinkController = HTMLEditorKit_LinkController;
	using Parser = HTMLEditorKit_Parser;
	using ParserCallback = HTMLEditorKit_ParserCallback;
	using HTMLFactory = HTMLEditorKit_HTMLFactory;
	using HTMLTextAction = HTMLEditorKit_HTMLTextAction;
	using InsertHTMLTextAction = HTMLEditorKit_InsertHTMLTextAction;

	static jni::ref<java::lang::String> DEFAULT_CSS() { return get_static_field<"DEFAULT_CSS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BOLD_ACTION() { return get_static_field<"BOLD_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ITALIC_ACTION() { return get_static_field<"ITALIC_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARA_INDENT_LEFT() { return get_static_field<"PARA_INDENT_LEFT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PARA_INDENT_RIGHT() { return get_static_field<"PARA_INDENT_RIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FONT_CHANGE_BIGGER() { return get_static_field<"FONT_CHANGE_BIGGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FONT_CHANGE_SMALLER() { return get_static_field<"FONT_CHANGE_SMALLER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> COLOR_ACTION() { return get_static_field<"COLOR_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOGICAL_STYLE_ACTION() { return get_static_field<"LOGICAL_STYLE_ACTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IMG_ALIGN_TOP() { return get_static_field<"IMG_ALIGN_TOP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IMG_ALIGN_MIDDLE() { return get_static_field<"IMG_ALIGN_MIDDLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IMG_ALIGN_BOTTOM() { return get_static_field<"IMG_ALIGN_BOTTOM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> IMG_BORDER() { return get_static_field<"IMG_BORDER", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::text::html::HTMLEditorKit> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	jni::ref<javax::swing::text::ViewFactory> getViewFactory() { return call_method<"getViewFactory", jni::ref<javax::swing::text::ViewFactory>>(); }
	jni::ref<javax::swing::text::Document> createDefaultDocument() { return call_method<"createDefaultDocument", jni::ref<javax::swing::text::Document>>(); }
	void read(jni::ref<java::io::Reader> p1, jni::ref<javax::swing::text::Document> p2, jint p3) { return call_method<"read", void>(p1, p2, p3); }
	void insertHTML(jni::ref<javax::swing::text::html::HTMLDocument> p1, jint p2, jni::ref<java::lang::String> p3, jint p4, jint p5, jni::ref<javax::swing::text::html::HTML_Tag> p6) { return call_method<"insertHTML", void>(p1, p2, p3, p4, p5, p6); }
	void write(jni::ref<java::io::Writer> p1, jni::ref<javax::swing::text::Document> p2, jint p3, jint p4) { return call_method<"write", void>(p1, p2, p3, p4); }
	void install(jni::ref<javax::swing::JEditorPane> p1) { return call_method<"install", void>(p1); }
	void deinstall(jni::ref<javax::swing::JEditorPane> p1) { return call_method<"deinstall", void>(p1); }
	void setStyleSheet(jni::ref<javax::swing::text::html::StyleSheet> p1) { return call_method<"setStyleSheet", void>(p1); }
	jni::ref<javax::swing::text::html::StyleSheet> getStyleSheet() { return call_method<"getStyleSheet", jni::ref<javax::swing::text::html::StyleSheet>>(); }
	jni::ref<jni::array<javax::swing::Action>> getActions() { return call_method<"getActions", jni::ref<jni::array<javax::swing::Action>>>(); }
	jni::ref<javax::swing::text::MutableAttributeSet> getInputAttributes() { return call_method<"getInputAttributes", jni::ref<javax::swing::text::MutableAttributeSet>>(); }
	void setDefaultCursor(jni::ref<java::awt::Cursor> p1) { return call_method<"setDefaultCursor", void>(p1); }
	jni::ref<java::awt::Cursor> getDefaultCursor() { return call_method<"getDefaultCursor", jni::ref<java::awt::Cursor>>(); }
	void setLinkCursor(jni::ref<java::awt::Cursor> p1) { return call_method<"setLinkCursor", void>(p1); }
	jni::ref<java::awt::Cursor> getLinkCursor() { return call_method<"getLinkCursor", jni::ref<java::awt::Cursor>>(); }
	jboolean isAutoFormSubmission() { return call_method<"isAutoFormSubmission", jboolean>(); }
	void setAutoFormSubmission(jboolean p1) { return call_method<"setAutoFormSubmission", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	HTMLEditorKit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT
