// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyledEditorKit_StyledTextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDINSERTBREAKACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDINSERTBREAKACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyledEditorKit_StyledInsertBreakAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyledEditorKit_StyledInsertBreakAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyledEditorKit$StyledInsertBreakAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyledEditorKit_StyledTextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDINSERTBREAKACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDINSERTBREAKACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDINSERTBREAKACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::StyledEditorKit_StyledInsertBreakAction : public jni::object_base<"javax/swing/text/StyledEditorKit$StyledInsertBreakAction",
	javax::swing::text::StyledEditorKit_StyledTextAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	StyledEditorKit_StyledInsertBreakAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_STYLEDINSERTBREAKACTION