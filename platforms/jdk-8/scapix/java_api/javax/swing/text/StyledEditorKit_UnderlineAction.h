// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyledEditorKit_StyledTextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_UNDERLINEACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_UNDERLINEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyledEditorKit_UnderlineAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyledEditorKit_UnderlineAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyledEditorKit$UnderlineAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyledEditorKit_StyledTextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_UNDERLINEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_UNDERLINEACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_UNDERLINEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::StyledEditorKit_UnderlineAction : public jni::object_base<"javax/swing/text/StyledEditorKit$UnderlineAction",
	javax::swing::text::StyledEditorKit_StyledTextAction>
{
public:

	static jni::ref<javax::swing::text::StyledEditorKit_UnderlineAction> new_object() { return base_::new_object(); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	StyledEditorKit_UnderlineAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_UNDERLINEACTION
