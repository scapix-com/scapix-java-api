// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>
#include <scapix/java_api/javax/swing/WindowConstants.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/swing/RootPaneContainer.h>
#include <scapix/java_api/javax/swing/TransferHandler_HasGetTransferHandler.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JFRAME_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JFRAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JFrame; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JFrame>
{
	static constexpr fixed_string class_name = "javax/swing/JFrame";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame, scapix::java_api::javax::swing::WindowConstants, scapix::java_api::javax::accessibility::Accessible, scapix::java_api::javax::swing::RootPaneContainer, scapix::java_api::javax::swing::TransferHandler_HasGetTransferHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFRAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JFRAME)
#define SCAPIX_JAVA_API_JAVAX_SWING_JFRAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/LayoutManager.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/JLayeredPane.h>
#include <scapix/java_api/javax/swing/JMenuBar.h>
#include <scapix/java_api/javax/swing/JRootPane.h>
#include <scapix/java_api/javax/swing/TransferHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JFrame : public jni::object_base<"javax/swing/JFrame",
	java::awt::Frame,
	javax::swing::WindowConstants,
	javax::accessibility::Accessible,
	javax::swing::RootPaneContainer,
	javax::swing::TransferHandler_HasGetTransferHandler>
{
public:

	static jint EXIT_ON_CLOSE() { return get_static_field<"EXIT_ON_CLOSE", jint>(); }

	static jni::ref<javax::swing::JFrame> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JFrame> new_object(jni::ref<java::awt::GraphicsConfiguration> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JFrame> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JFrame> new_object(jni::ref<java::lang::String> p1, jni::ref<java::awt::GraphicsConfiguration> p2) { return base_::new_object(p1, p2); }
	void setDefaultCloseOperation(jint p1) { return call_method<"setDefaultCloseOperation", void>(p1); }
	jint getDefaultCloseOperation() { return call_method<"getDefaultCloseOperation", jint>(); }
	void setTransferHandler(jni::ref<javax::swing::TransferHandler> p1) { return call_method<"setTransferHandler", void>(p1); }
	jni::ref<javax::swing::TransferHandler> getTransferHandler() { return call_method<"getTransferHandler", jni::ref<javax::swing::TransferHandler>>(); }
	void update(jni::ref<java::awt::Graphics> p1) { return call_method<"update", void>(p1); }
	void setJMenuBar(jni::ref<javax::swing::JMenuBar> p1) { return call_method<"setJMenuBar", void>(p1); }
	jni::ref<javax::swing::JMenuBar> getJMenuBar() { return call_method<"getJMenuBar", jni::ref<javax::swing::JMenuBar>>(); }
	void remove(jni::ref<java::awt::Component> p1) { return call_method<"remove", void>(p1); }
	void setLayout(jni::ref<java::awt::LayoutManager> p1) { return call_method<"setLayout", void>(p1); }
	jni::ref<javax::swing::JRootPane> getRootPane() { return call_method<"getRootPane", jni::ref<javax::swing::JRootPane>>(); }
	void setIconImage(jni::ref<java::awt::Image> p1) { return call_method<"setIconImage", void>(p1); }
	jni::ref<java::awt::Container> getContentPane() { return call_method<"getContentPane", jni::ref<java::awt::Container>>(); }
	void setContentPane(jni::ref<java::awt::Container> p1) { return call_method<"setContentPane", void>(p1); }
	jni::ref<javax::swing::JLayeredPane> getLayeredPane() { return call_method<"getLayeredPane", jni::ref<javax::swing::JLayeredPane>>(); }
	void setLayeredPane(jni::ref<javax::swing::JLayeredPane> p1) { return call_method<"setLayeredPane", void>(p1); }
	jni::ref<java::awt::Component> getGlassPane() { return call_method<"getGlassPane", jni::ref<java::awt::Component>>(); }
	void setGlassPane(jni::ref<java::awt::Component> p1) { return call_method<"setGlassPane", void>(p1); }
	jni::ref<java::awt::Graphics> getGraphics() { return call_method<"getGraphics", jni::ref<java::awt::Graphics>>(); }
	void repaint(jlong p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"repaint", void>(p1, p2, p3, p4, p5); }
	static void setDefaultLookAndFeelDecorated(jboolean p1) { return call_static_method<"setDefaultLookAndFeelDecorated", void>(p1); }
	static jboolean isDefaultLookAndFeelDecorated() { return call_static_method<"isDefaultLookAndFeelDecorated", jboolean>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JFrame(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JFRAME
