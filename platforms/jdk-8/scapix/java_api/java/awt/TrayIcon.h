// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class TrayIcon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::TrayIcon>
{
	static constexpr fixed_string class_name = "java/awt/TrayIcon";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TRAYICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_TRAYICON)
#define SCAPIX_JAVA_API_JAVA_AWT_TRAYICON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/PopupMenu.h>
#include <scapix/java_api/java/awt/TrayIcon_MessageType.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::TrayIcon : public jni::object_base<"java/awt/TrayIcon",
	java::lang::Object>
{
public:

	using MessageType = TrayIcon_MessageType;

	static jni::ref<java::awt::TrayIcon> new_object(jni::ref<java::awt::Image> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::TrayIcon> new_object(jni::ref<java::awt::Image> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::TrayIcon> new_object(jni::ref<java::awt::Image> p1, jni::ref<java::lang::String> p2, jni::ref<java::awt::PopupMenu> p3) { return base_::new_object(p1, p2, p3); }
	void setImage(jni::ref<java::awt::Image> p1) { return call_method<"setImage", void>(p1); }
	jni::ref<java::awt::Image> getImage() { return call_method<"getImage", jni::ref<java::awt::Image>>(); }
	void setPopupMenu(jni::ref<java::awt::PopupMenu> p1) { return call_method<"setPopupMenu", void>(p1); }
	jni::ref<java::awt::PopupMenu> getPopupMenu() { return call_method<"getPopupMenu", jni::ref<java::awt::PopupMenu>>(); }
	void setToolTip(jni::ref<java::lang::String> p1) { return call_method<"setToolTip", void>(p1); }
	jni::ref<java::lang::String> getToolTip() { return call_method<"getToolTip", jni::ref<java::lang::String>>(); }
	void setImageAutoSize(jboolean p1) { return call_method<"setImageAutoSize", void>(p1); }
	jboolean isImageAutoSize() { return call_method<"isImageAutoSize", jboolean>(); }
	void addMouseListener(jni::ref<java::awt::event::MouseListener> p1) { return call_method<"addMouseListener", void>(p1); }
	void removeMouseListener(jni::ref<java::awt::event::MouseListener> p1) { return call_method<"removeMouseListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::MouseListener>> getMouseListeners() { return call_method<"getMouseListeners", jni::ref<jni::array<java::awt::event::MouseListener>>>(); }
	void addMouseMotionListener(jni::ref<java::awt::event::MouseMotionListener> p1) { return call_method<"addMouseMotionListener", void>(p1); }
	void removeMouseMotionListener(jni::ref<java::awt::event::MouseMotionListener> p1) { return call_method<"removeMouseMotionListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::MouseMotionListener>> getMouseMotionListeners() { return call_method<"getMouseMotionListeners", jni::ref<jni::array<java::awt::event::MouseMotionListener>>>(); }
	jni::ref<java::lang::String> getActionCommand() { return call_method<"getActionCommand", jni::ref<java::lang::String>>(); }
	void setActionCommand(jni::ref<java::lang::String> p1) { return call_method<"setActionCommand", void>(p1); }
	void addActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"addActionListener", void>(p1); }
	void removeActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"removeActionListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::ActionListener>> getActionListeners() { return call_method<"getActionListeners", jni::ref<jni::array<java::awt::event::ActionListener>>>(); }
	void displayMessage(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::awt::TrayIcon_MessageType> p3) { return call_method<"displayMessage", void>(p1, p2, p3); }
	jni::ref<java::awt::Dimension> getSize() { return call_method<"getSize", jni::ref<java::awt::Dimension>>(); }

protected:

	TrayIcon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_TRAYICON
