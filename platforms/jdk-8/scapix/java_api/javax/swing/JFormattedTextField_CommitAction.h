// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JTextField_NotifyAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_COMMITACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_COMMITACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JFormattedTextField_CommitAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JFormattedTextField_CommitAction>
{
	static constexpr fixed_string class_name = "javax/swing/JFormattedTextField$CommitAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JTextField_NotifyAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_COMMITACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_COMMITACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_COMMITACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JFormattedTextField_CommitAction : public jni::object_base<"javax/swing/JFormattedTextField$CommitAction",
	javax::swing::JTextField_NotifyAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }

protected:

	JFormattedTextField_CommitAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFORMATTEDTEXTFIELD_COMMITACTION
