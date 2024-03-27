// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/TextAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_BEGINWORDACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_BEGINWORDACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class DefaultEditorKit_BeginWordAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::DefaultEditorKit_BeginWordAction>
{
	static constexpr fixed_string class_name = "javax/swing/text/DefaultEditorKit$BeginWordAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::TextAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_BEGINWORDACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_BEGINWORDACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_BEGINWORDACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::DefaultEditorKit_BeginWordAction : public jni::object_base<"javax/swing/text/DefaultEditorKit$BeginWordAction",
	javax::swing::text::TextAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	DefaultEditorKit_BeginWordAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_DEFAULTEDITORKIT_BEGINWORDACTION
