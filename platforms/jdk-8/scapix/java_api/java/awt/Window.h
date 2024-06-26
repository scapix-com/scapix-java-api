// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_WINDOW_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_WINDOW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Window; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Window>
{
	static constexpr fixed_string class_name = "java/awt/Window";
	using base_classes = std::tuple<scapix::java_api::java::awt::Container, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_WINDOW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_WINDOW)
#define SCAPIX_JAVA_API_JAVA_AWT_WINDOW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/BufferCapabilities.h>
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Cursor.h>
#include <scapix/java_api/java/awt/Dialog_ModalExclusionType.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Event.h>
#include <scapix/java_api/java/awt/Frame.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/Shape.h>
#include <scapix/java_api/java/awt/Toolkit.h>
#include <scapix/java_api/java/awt/Window_Type.h>
#include <scapix/java_api/java/awt/event/WindowFocusListener.h>
#include <scapix/java_api/java/awt/event/WindowListener.h>
#include <scapix/java_api/java/awt/event/WindowStateListener.h>
#include <scapix/java_api/java/awt/im/InputContext.h>
#include <scapix/java_api/java/awt/image/BufferStrategy.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Window : public jni::object_base<"java/awt/Window",
	java::awt::Container,
	javax::accessibility::Accessible>
{
public:

	using Type = Window_Type;

	static jni::ref<java::awt::Window> new_object(jni::ref<java::awt::Frame> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::Window> new_object(jni::ref<java::awt::Window> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::Window> new_object(jni::ref<java::awt::Window> p1, jni::ref<java::awt::GraphicsConfiguration> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::List> getIconImages() { return call_method<"getIconImages", jni::ref<java::util::List>>(); }
	void setIconImages(jni::ref<java::util::List> p1) { return call_method<"setIconImages", void>(p1); }
	void setIconImage(jni::ref<java::awt::Image> p1) { return call_method<"setIconImage", void>(p1); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	void pack() { return call_method<"pack", void>(); }
	void setMinimumSize(jni::ref<java::awt::Dimension> p1) { return call_method<"setMinimumSize", void>(p1); }
	void setSize(jni::ref<java::awt::Dimension> p1) { return call_method<"setSize", void>(p1); }
	void setSize(jint p1, jint p2) { return call_method<"setSize", void>(p1, p2); }
	void setLocation(jint p1, jint p2) { return call_method<"setLocation", void>(p1, p2); }
	void setLocation(jni::ref<java::awt::Point> p1) { return call_method<"setLocation", void>(p1); }
	void reshape(jint p1, jint p2, jint p3, jint p4) { return call_method<"reshape", void>(p1, p2, p3, p4); }
	void setVisible(jboolean p1) { return call_method<"setVisible", void>(p1); }
	void show() { return call_method<"show", void>(); }
	void hide() { return call_method<"hide", void>(); }
	void dispose() { return call_method<"dispose", void>(); }
	void toFront() { return call_method<"toFront", void>(); }
	void toBack() { return call_method<"toBack", void>(); }
	jni::ref<java::awt::Toolkit> getToolkit() { return call_method<"getToolkit", jni::ref<java::awt::Toolkit>>(); }
	jni::ref<java::lang::String> getWarningString() { return call_method<"getWarningString", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	jni::ref<java::awt::im::InputContext> getInputContext() { return call_method<"getInputContext", jni::ref<java::awt::im::InputContext>>(); }
	void setCursor(jni::ref<java::awt::Cursor> p1) { return call_method<"setCursor", void>(p1); }
	jni::ref<java::awt::Window> getOwner() { return call_method<"getOwner", jni::ref<java::awt::Window>>(); }
	jni::ref<jni::array<java::awt::Window>> getOwnedWindows() { return call_method<"getOwnedWindows", jni::ref<jni::array<java::awt::Window>>>(); }
	static jni::ref<jni::array<java::awt::Window>> getWindows() { return call_static_method<"getWindows", jni::ref<jni::array<java::awt::Window>>>(); }
	static jni::ref<jni::array<java::awt::Window>> getOwnerlessWindows() { return call_static_method<"getOwnerlessWindows", jni::ref<jni::array<java::awt::Window>>>(); }
	void setModalExclusionType(jni::ref<java::awt::Dialog_ModalExclusionType> p1) { return call_method<"setModalExclusionType", void>(p1); }
	jni::ref<java::awt::Dialog_ModalExclusionType> getModalExclusionType() { return call_method<"getModalExclusionType", jni::ref<java::awt::Dialog_ModalExclusionType>>(); }
	void addWindowListener(jni::ref<java::awt::event::WindowListener> p1) { return call_method<"addWindowListener", void>(p1); }
	void addWindowStateListener(jni::ref<java::awt::event::WindowStateListener> p1) { return call_method<"addWindowStateListener", void>(p1); }
	void addWindowFocusListener(jni::ref<java::awt::event::WindowFocusListener> p1) { return call_method<"addWindowFocusListener", void>(p1); }
	void removeWindowListener(jni::ref<java::awt::event::WindowListener> p1) { return call_method<"removeWindowListener", void>(p1); }
	void removeWindowStateListener(jni::ref<java::awt::event::WindowStateListener> p1) { return call_method<"removeWindowStateListener", void>(p1); }
	void removeWindowFocusListener(jni::ref<java::awt::event::WindowFocusListener> p1) { return call_method<"removeWindowFocusListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::WindowListener>> getWindowListeners() { return call_method<"getWindowListeners", jni::ref<jni::array<java::awt::event::WindowListener>>>(); }
	jni::ref<jni::array<java::awt::event::WindowFocusListener>> getWindowFocusListeners() { return call_method<"getWindowFocusListeners", jni::ref<jni::array<java::awt::event::WindowFocusListener>>>(); }
	jni::ref<jni::array<java::awt::event::WindowStateListener>> getWindowStateListeners() { return call_method<"getWindowStateListeners", jni::ref<jni::array<java::awt::event::WindowStateListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	void setAlwaysOnTop(jboolean p1) { return call_method<"setAlwaysOnTop", void>(p1); }
	jboolean isAlwaysOnTopSupported() { return call_method<"isAlwaysOnTopSupported", jboolean>(); }
	jboolean isAlwaysOnTop() { return call_method<"isAlwaysOnTop", jboolean>(); }
	jni::ref<java::awt::Component> getFocusOwner() { return call_method<"getFocusOwner", jni::ref<java::awt::Component>>(); }
	jni::ref<java::awt::Component> getMostRecentFocusOwner() { return call_method<"getMostRecentFocusOwner", jni::ref<java::awt::Component>>(); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jboolean isFocused() { return call_method<"isFocused", jboolean>(); }
	jni::ref<java::util::Set> getFocusTraversalKeys(jint p1) { return call_method<"getFocusTraversalKeys", jni::ref<java::util::Set>>(p1); }
	void setFocusCycleRoot(jboolean p1) { return call_method<"setFocusCycleRoot", void>(p1); }
	jboolean isFocusCycleRoot() { return call_method<"isFocusCycleRoot", jboolean>(); }
	jni::ref<java::awt::Container> getFocusCycleRootAncestor() { return call_method<"getFocusCycleRootAncestor", jni::ref<java::awt::Container>>(); }
	jboolean isFocusableWindow() { return call_method<"isFocusableWindow", jboolean>(); }
	jboolean getFocusableWindowState() { return call_method<"getFocusableWindowState", jboolean>(); }
	void setFocusableWindowState(jboolean p1) { return call_method<"setFocusableWindowState", void>(p1); }
	void setAutoRequestFocus(jboolean p1) { return call_method<"setAutoRequestFocus", void>(p1); }
	jboolean isAutoRequestFocus() { return call_method<"isAutoRequestFocus", jboolean>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void addPropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"addPropertyChangeListener", void>(p1, p2); }
	jboolean isValidateRoot() { return call_method<"isValidateRoot", jboolean>(); }
	jboolean postEvent(jni::ref<java::awt::Event> p1) { return call_method<"postEvent", jboolean>(p1); }
	jboolean isShowing() { return call_method<"isShowing", jboolean>(); }
	void applyResourceBundle(jni::ref<java::util::ResourceBundle> p1) { return call_method<"applyResourceBundle", void>(p1); }
	void applyResourceBundle(jni::ref<java::lang::String> p1) { return call_method<"applyResourceBundle", void>(p1); }
	void setType(jni::ref<java::awt::Window_Type> p1) { return call_method<"setType", void>(p1); }
	jni::ref<java::awt::Window_Type> getType() { return call_method<"getType", jni::ref<java::awt::Window_Type>>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }
	void setLocationRelativeTo(jni::ref<java::awt::Component> p1) { return call_method<"setLocationRelativeTo", void>(p1); }
	void createBufferStrategy(jint p1) { return call_method<"createBufferStrategy", void>(p1); }
	void createBufferStrategy(jint p1, jni::ref<java::awt::BufferCapabilities> p2) { return call_method<"createBufferStrategy", void>(p1, p2); }
	jni::ref<java::awt::image::BufferStrategy> getBufferStrategy() { return call_method<"getBufferStrategy", jni::ref<java::awt::image::BufferStrategy>>(); }
	void setLocationByPlatform(jboolean p1) { return call_method<"setLocationByPlatform", void>(p1); }
	jboolean isLocationByPlatform() { return call_method<"isLocationByPlatform", jboolean>(); }
	void setBounds(jint p1, jint p2, jint p3, jint p4) { return call_method<"setBounds", void>(p1, p2, p3, p4); }
	void setBounds(jni::ref<java::awt::Rectangle> p1) { return call_method<"setBounds", void>(p1); }
	jfloat getOpacity() { return call_method<"getOpacity", jfloat>(); }
	void setOpacity(jfloat p1) { return call_method<"setOpacity", void>(p1); }
	jni::ref<java::awt::Shape> getShape() { return call_method<"getShape", jni::ref<java::awt::Shape>>(); }
	void setShape(jni::ref<java::awt::Shape> p1) { return call_method<"setShape", void>(p1); }
	jni::ref<java::awt::Color> getBackground() { return call_method<"getBackground", jni::ref<java::awt::Color>>(); }
	void setBackground(jni::ref<java::awt::Color> p1) { return call_method<"setBackground", void>(p1); }
	jboolean isOpaque() { return call_method<"isOpaque", jboolean>(); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }

protected:

	Window(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_WINDOW
