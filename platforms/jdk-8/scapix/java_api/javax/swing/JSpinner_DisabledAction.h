// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/Action.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_DISABLEDACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_DISABLEDACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JSpinner_DisabledAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JSpinner_DisabledAction>
{
	static constexpr fixed_string class_name = "javax/swing/JSpinner$DisabledAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::Action>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_DISABLEDACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_DISABLEDACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_DISABLEDACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JSpinner_DisabledAction : public jni::object_base<"javax/swing/JSpinner$DisabledAction",
	java::lang::Object,
	javax::swing::Action>
{
public:

	jni::ref<java::lang::Object> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::Object>>(p1); }
	void putValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"putValue", void>(p1, p2); }
	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	JSpinner_DisabledAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JSPINNER_DISABLEDACTION