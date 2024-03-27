// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/KeyEventDispatcher.h>
#include <scapix/java_api/java/awt/KeyEventPostProcessor.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class KeyboardFocusManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::KeyboardFocusManager>
{
	static constexpr fixed_string class_name = "java/awt/KeyboardFocusManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::KeyEventDispatcher, scapix::java_api::java::awt::KeyEventPostProcessor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER)
#define SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/FocusTraversalPolicy.h>
#include <scapix/java_api/java/awt/Window.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/beans/VetoableChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::KeyboardFocusManager : public jni::object_base<"java/awt/KeyboardFocusManager",
	java::lang::Object,
	java::awt::KeyEventDispatcher,
	java::awt::KeyEventPostProcessor>
{
public:

	static jint FORWARD_TRAVERSAL_KEYS() { return get_static_field<"FORWARD_TRAVERSAL_KEYS", jint>(); }
	static jint BACKWARD_TRAVERSAL_KEYS() { return get_static_field<"BACKWARD_TRAVERSAL_KEYS", jint>(); }
	static jint UP_CYCLE_TRAVERSAL_KEYS() { return get_static_field<"UP_CYCLE_TRAVERSAL_KEYS", jint>(); }
	static jint DOWN_CYCLE_TRAVERSAL_KEYS() { return get_static_field<"DOWN_CYCLE_TRAVERSAL_KEYS", jint>(); }

	static jni::ref<java::awt::KeyboardFocusManager> getCurrentKeyboardFocusManager() { return call_static_method<"getCurrentKeyboardFocusManager", jni::ref<java::awt::KeyboardFocusManager>>(); }
	static void setCurrentKeyboardFocusManager(jni::ref<java::awt::KeyboardFocusManager> p1) { return call_static_method<"setCurrentKeyboardFocusManager", void>(p1); }
	static jni::ref<java::awt::KeyboardFocusManager> new_object() { return base_::new_object(); }
	jni::ref<java::awt::Component> getFocusOwner() { return call_method<"getFocusOwner", jni::ref<java::awt::Component>>(); }
	void clearFocusOwner() { return call_method<"clearFocusOwner", void>(); }
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
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners() { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(); }
	void addPropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"addPropertyChangeListener", void>(p1, p2); }
	void removePropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"removePropertyChangeListener", void>(p1, p2); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners(jni::ref<java::lang::String> p1) { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(p1); }
	void addVetoableChangeListener(jni::ref<java::beans::VetoableChangeListener> p1) { return call_method<"addVetoableChangeListener", void>(p1); }
	void removeVetoableChangeListener(jni::ref<java::beans::VetoableChangeListener> p1) { return call_method<"removeVetoableChangeListener", void>(p1); }
	jni::ref<jni::array<java::beans::VetoableChangeListener>> getVetoableChangeListeners() { return call_method<"getVetoableChangeListeners", jni::ref<jni::array<java::beans::VetoableChangeListener>>>(); }
	void addVetoableChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::VetoableChangeListener> p2) { return call_method<"addVetoableChangeListener", void>(p1, p2); }
	void removeVetoableChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::VetoableChangeListener> p2) { return call_method<"removeVetoableChangeListener", void>(p1, p2); }
	jni::ref<jni::array<java::beans::VetoableChangeListener>> getVetoableChangeListeners(jni::ref<java::lang::String> p1) { return call_method<"getVetoableChangeListeners", jni::ref<jni::array<java::beans::VetoableChangeListener>>>(p1); }
	void addKeyEventDispatcher(jni::ref<java::awt::KeyEventDispatcher> p1) { return call_method<"addKeyEventDispatcher", void>(p1); }
	void removeKeyEventDispatcher(jni::ref<java::awt::KeyEventDispatcher> p1) { return call_method<"removeKeyEventDispatcher", void>(p1); }
	void addKeyEventPostProcessor(jni::ref<java::awt::KeyEventPostProcessor> p1) { return call_method<"addKeyEventPostProcessor", void>(p1); }
	void removeKeyEventPostProcessor(jni::ref<java::awt::KeyEventPostProcessor> p1) { return call_method<"removeKeyEventPostProcessor", void>(p1); }
	jboolean dispatchEvent(jni::ref<java::awt::AWTEvent> p1) { return call_method<"dispatchEvent", jboolean>(p1); }
	void redispatchEvent(jni::ref<java::awt::Component> p1, jni::ref<java::awt::AWTEvent> p2) { return call_method<"redispatchEvent", void>(p1, p2); }
	jboolean dispatchKeyEvent(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"dispatchKeyEvent", jboolean>(p1); }
	jboolean postProcessKeyEvent(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"postProcessKeyEvent", jboolean>(p1); }
	void processKeyEvent(jni::ref<java::awt::Component> p1, jni::ref<java::awt::event::KeyEvent> p2) { return call_method<"processKeyEvent", void>(p1, p2); }
	void focusNextComponent(jni::ref<java::awt::Component> p1) { return call_method<"focusNextComponent", void>(p1); }
	void focusPreviousComponent(jni::ref<java::awt::Component> p1) { return call_method<"focusPreviousComponent", void>(p1); }
	void upFocusCycle(jni::ref<java::awt::Component> p1) { return call_method<"upFocusCycle", void>(p1); }
	void downFocusCycle(jni::ref<java::awt::Container> p1) { return call_method<"downFocusCycle", void>(p1); }
	void focusNextComponent() { return call_method<"focusNextComponent", void>(); }
	void focusPreviousComponent() { return call_method<"focusPreviousComponent", void>(); }
	void upFocusCycle() { return call_method<"upFocusCycle", void>(); }
	void downFocusCycle() { return call_method<"downFocusCycle", void>(); }

protected:

	KeyboardFocusManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_KEYBOARDFOCUSMANAGER
