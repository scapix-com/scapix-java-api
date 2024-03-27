// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/HTMLEditorKit_InsertHTMLTextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHRACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHRACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class HTMLEditorKit_InsertHRAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::HTMLEditorKit_InsertHRAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/HTMLEditorKit$InsertHRAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::HTMLEditorKit_InsertHTMLTextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHRACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHRACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHRACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::HTMLEditorKit_InsertHRAction : public jni::object_base<"javax/swing/text/html/HTMLEditorKit$InsertHRAction",
	javax::swing::text::html::HTMLEditorKit_InsertHTMLTextAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	HTMLEditorKit_InsertHRAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_HTMLEDITORKIT_INSERTHRACTION
