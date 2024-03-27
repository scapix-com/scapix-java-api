// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JVIEWPORT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JVIEWPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JViewport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JViewport>
{
	static constexpr fixed_string class_name = "javax/swing/JViewport";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JVIEWPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JVIEWPORT)
#define SCAPIX_JAVA_API_JAVAX_SWING_JVIEWPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/border/Border.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/javax/swing/plaf/ViewportUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JViewport : public jni::object_base<"javax/swing/JViewport",
	javax::swing::JComponent,
	javax::accessibility::Accessible>
{
public:

	static jint BLIT_SCROLL_MODE() { return get_static_field<"BLIT_SCROLL_MODE", jint>(); }
	static jint BACKINGSTORE_SCROLL_MODE() { return get_static_field<"BACKINGSTORE_SCROLL_MODE", jint>(); }
	static jint SIMPLE_SCROLL_MODE() { return get_static_field<"SIMPLE_SCROLL_MODE", jint>(); }

	static jni::ref<javax::swing::JViewport> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::plaf::ViewportUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::ViewportUI>>(); }
	void setUI(jni::ref<javax::swing::plaf::ViewportUI> p1) { return call_method<"setUI", void>(p1); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	void remove(jni::ref<java::awt::Component> p1) { return call_method<"remove", void>(p1); }
	void scrollRectToVisible(jni::ref<java::awt::Rectangle> p1) { return call_method<"scrollRectToVisible", void>(p1); }
	void setBorder(jni::ref<javax::swing::border::Border> p1) { return call_method<"setBorder", void>(p1); }
	jni::ref<java::awt::Insets> getInsets() { return call_method<"getInsets", jni::ref<java::awt::Insets>>(); }
	jni::ref<java::awt::Insets> getInsets(jni::ref<java::awt::Insets> p1) { return call_method<"getInsets", jni::ref<java::awt::Insets>>(p1); }
	jboolean isOptimizedDrawingEnabled() { return call_method<"isOptimizedDrawingEnabled", jboolean>(); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	void reshape(jint p1, jint p2, jint p3, jint p4) { return call_method<"reshape", void>(p1, p2, p3, p4); }
	void setScrollMode(jint p1) { return call_method<"setScrollMode", void>(p1); }
	jint getScrollMode() { return call_method<"getScrollMode", jint>(); }
	jboolean isBackingStoreEnabled() { return call_method<"isBackingStoreEnabled", jboolean>(); }
	void setBackingStoreEnabled(jboolean p1) { return call_method<"setBackingStoreEnabled", void>(p1); }
	jni::ref<java::awt::Component> getView() { return call_method<"getView", jni::ref<java::awt::Component>>(); }
	void setView(jni::ref<java::awt::Component> p1) { return call_method<"setView", void>(p1); }
	jni::ref<java::awt::Dimension> getViewSize() { return call_method<"getViewSize", jni::ref<java::awt::Dimension>>(); }
	void setViewSize(jni::ref<java::awt::Dimension> p1) { return call_method<"setViewSize", void>(p1); }
	jni::ref<java::awt::Point> getViewPosition() { return call_method<"getViewPosition", jni::ref<java::awt::Point>>(); }
	void setViewPosition(jni::ref<java::awt::Point> p1) { return call_method<"setViewPosition", void>(p1); }
	jni::ref<java::awt::Rectangle> getViewRect() { return call_method<"getViewRect", jni::ref<java::awt::Rectangle>>(); }
	jni::ref<java::awt::Dimension> getExtentSize() { return call_method<"getExtentSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> toViewCoordinates(jni::ref<java::awt::Dimension> p1) { return call_method<"toViewCoordinates", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Point> toViewCoordinates(jni::ref<java::awt::Point> p1) { return call_method<"toViewCoordinates", jni::ref<java::awt::Point>>(p1); }
	void setExtentSize(jni::ref<java::awt::Dimension> p1) { return call_method<"setExtentSize", void>(p1); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ChangeListener>> getChangeListeners() { return call_method<"getChangeListeners", jni::ref<jni::array<javax::swing::event::ChangeListener>>>(); }
	void repaint(jlong p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"repaint", void>(p1, p2, p3, p4, p5); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JViewport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JVIEWPORT
