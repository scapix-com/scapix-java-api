// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMVIEW_BROWSEFILEACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMVIEW_BROWSEFILEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class FormView_BrowseFileAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::FormView_BrowseFileAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/FormView$BrowseFileAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMVIEW_BROWSEFILEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMVIEW_BROWSEFILEACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMVIEW_BROWSEFILEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::FormView_BrowseFileAction : public jni::object_base<"javax/swing/text/html/FormView$BrowseFileAction",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	FormView_BrowseFileAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_FORMVIEW_BROWSEFILEACTION
