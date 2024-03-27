// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/StyledEditorKit_StyledTextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_FONTSIZEACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_FONTSIZEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class StyledEditorKit_FontSizeAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::StyledEditorKit_FontSizeAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/StyledEditorKit$FontSizeAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::StyledEditorKit_StyledTextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_FONTSIZEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_FONTSIZEACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_FONTSIZEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::StyledEditorKit_FontSizeAction : public jni::object_base<"javax/swing/text/StyledEditorKit$FontSizeAction",
	javax::swing::text::StyledEditorKit_StyledTextAction>
{
public:

	static jni::ref<javax::swing::text::StyledEditorKit_FontSizeAction> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	StyledEditorKit_FontSizeAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_STYLEDEDITORKIT_FONTSIZEACTION