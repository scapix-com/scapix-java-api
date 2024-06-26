// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class Action; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::Action>
{
	static constexpr fixed_string class_name = "javax/swing/Action";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_ACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::Action : public jni::object_base<"javax/swing/Action",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	static jni::ref<java::lang::String> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHORT_DESCRIPTION() { return get_static_field<"SHORT_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LONG_DESCRIPTION() { return get_static_field<"LONG_DESCRIPTION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMALL_ICON() { return get_static_field<"SMALL_ICON", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_COMMAND_KEY() { return get_static_field<"ACTION_COMMAND_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCELERATOR_KEY() { return get_static_field<"ACCELERATOR_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MNEMONIC_KEY() { return get_static_field<"MNEMONIC_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SELECTED_KEY() { return get_static_field<"SELECTED_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DISPLAYED_MNEMONIC_INDEX_KEY() { return get_static_field<"DISPLAYED_MNEMONIC_INDEX_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LARGE_ICON_KEY() { return get_static_field<"LARGE_ICON_KEY", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::Object> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::Object>>(p1); }
	void putValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"putValue", void>(p1, p2); }
	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }

protected:

	Action(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ACTION
