// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/TextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_PAGEACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_PAGEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultEditorKit_PageAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultEditorKit_PageAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultEditorKit$PageAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::TextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_PAGEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_PAGEACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_PAGEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultEditorKit_PageAction : public jni::object_base<"javax/swing/text/DefaultEditorKit$PageAction",
	javax::swing::text::TextAction>
{
public:

	static jni::ref<javax::swing::text::DefaultEditorKit_PageAction> new_object(jni::ref<java::lang::String> p1, jboolean p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	DefaultEditorKit_PageAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_PAGEACTION
