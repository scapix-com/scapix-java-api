// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultFocusManager.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DELEGATINGDEFAULTFOCUSMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DELEGATINGDEFAULTFOCUSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DelegatingDefaultFocusManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DelegatingDefaultFocusManager>
{
	static constexpr fixed_string class_name = "javax/swing/DelegatingDefaultFocusManager";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultFocusManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DELEGATINGDEFAULTFOCUSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DELEGATINGDEFAULTFOCUSMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SWING_DELEGATINGDEFAULTFOCUSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/FocusTraversalPolicy.h>
#include <scapix/java_api/java/awt/KeyEventDispatcher.h>
#include <scapix/java_api/java/awt/Window.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/beans/VetoableChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::DelegatingDefaultFocusManager : public jni::object_base<"javax/swing/DelegatingDefaultFocusManager",
	javax::swing::DefaultFocusManager>
{
public:

	void processKeyEvent(jni::ref<java::awt::Component> p1, jni::ref<java::awt::event::KeyEvent> p2) { return call_method<"processKeyEvent", void>(p1, p2); }
	void focusNextComponent(jni::ref<java::awt::Component> p1) { return call_method<"focusNextComponent", void>(p1); }
	void focusPreviousComponent(jni::ref<java::awt::Component> p1) { return call_method<"focusPreviousComponent", void>(p1); }
	jni::ref<java::awt::Component> getFocusOwner() { return call_method<"getFocusOwner", jni::ref<java::awt::Component>>(); }
	void clearGlobalFocusOwner() { return call_method<"clearGlobalFocusOwner", void>(); }
	jni::ref<java::awt::Component> getPermanentFocusOwner() { return call_method<"getPermanentFocusOwner", jni::ref<java::awt::Component>>(); }
	jni::ref<java::awt::Window> getFocusedWindow() { return call_method<"getFocusedWindow", jni::ref<java::awt::Window>>(); }
	jni::ref<java::awt::Window> getActiveWindow() { return call_method<"getActiveWindow", jni::ref<java::awt::Window>>(); }
	jni::ref<java::awt::FocusTraversalPolicy> getDefaultFocusTraversalPolicy() { return call_method<"getDefaultFocusTraversalPolicy", jni::ref<java::awt::FocusTraversalPolicy>>(); }
	void setDefaultFocusTraversalPolicy(jni::ref<java::awt::FocusTraversalPolicy> p1) { return call_method<"setDefaultFocusTraversalPolicy", void>(p1); }
	void setDefaultFocusTraversalKeys(jint p1, jni::ref<java::util::Set> p2) { return call_method<"setDefaultFocusTraversalKeys", void>(p1, p2); }
	jni::ref<java::util::Set> getDefaultFocusTraversalKeys(jint p1) { return call_method<"getDefaultFocusTraversalKeys", jni::ref<java::util::Set>>(p1); }
	jni::ref<java::awt::Container> getCurrentFocusCycleRoot() { return call_method<"getCurrentFocusCycleRoot", jni::ref<java::awt::Container>>(); }
	void setGlobalCurrentFocusCycleRoot(jni::ref<java::awt::Container> p1) { return call_method<"setGlobalCurrentFocusCycleRoot", void>(p1); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	void addPropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"addPropertyChangeListener", void>(p1, p2); }
	void removePropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"removePropertyChangeListener", void>(p1, p2); }
	void addVetoableChangeListener(jni::ref<java::beans::VetoableChangeListener> p1) { return call_method<"addVetoableChangeListener", void>(p1); }
	void removeVetoableChangeListener(jni::ref<java::beans::VetoableChangeListener> p1) { return call_method<"removeVetoableChangeListener", void>(p1); }
	void addVetoableChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::VetoableChangeListener> p2) { return call_method<"addVetoableChangeListener", void>(p1, p2); }
	void removeVetoableChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::VetoableChangeListener> p2) { return call_method<"removeVetoableChangeListener", void>(p1, p2); }
	void addKeyEventDispatcher(jni::ref<java::awt::KeyEventDispatcher> p1) { return call_method<"addKeyEventDispatcher", void>(p1); }
	void removeKeyEventDispatcher(jni::ref<java::awt::KeyEventDispatcher> p1) { return call_method<"removeKeyEventDispatcher", void>(p1); }
	jboolean dispatchEvent(jni::ref<java::awt::AWTEvent> p1) { return call_method<"dispatchEvent", jboolean>(p1); }
	jboolean dispatchKeyEvent(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"dispatchKeyEvent", jboolean>(p1); }
	void upFocusCycle(jni::ref<java::awt::Component> p1) { return call_method<"upFocusCycle", void>(p1); }
	void downFocusCycle(jni::ref<java::awt::Container> p1) { return call_method<"downFocusCycle", void>(p1); }

protected:

	DelegatingDefaultFocusManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DELEGATINGDEFAULTFOCUSMANAGER
