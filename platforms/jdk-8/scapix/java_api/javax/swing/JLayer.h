// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/Scrollable.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JLAYER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JLAYER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JLayer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JLayer>
{
	static constexpr fixed_string class_name = "javax/swing/JLayer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::swing::Scrollable, scapix::java_api::java::beans::PropertyChangeListener, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JLAYER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JLAYER)
#define SCAPIX_JAVA_API_JAVAX_SWING_JLAYER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/LayoutManager.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/JPanel.h>
#include <scapix/java_api/javax/swing/border/Border.h>
#include <scapix/java_api/javax/swing/plaf/LayerUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JLayer : public jni::object_base<"javax/swing/JLayer",
	javax::swing::JComponent,
	javax::swing::Scrollable,
	java::beans::PropertyChangeListener,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<javax::swing::JLayer> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JLayer> new_object(jni::ref<java::awt::Component> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JLayer> new_object(jni::ref<java::awt::Component> p1, jni::ref<javax::swing::plaf::LayerUI> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::awt::Component> getView() { return call_method<"getView", jni::ref<java::awt::Component>>(); }
	void setView(jni::ref<java::awt::Component> p1) { return call_method<"setView", void>(p1); }
	void setUI(jni::ref<javax::swing::plaf::LayerUI> p1) { return call_method<"setUI", void>(p1); }
	jni::ref<javax::swing::plaf::LayerUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::LayerUI>>(); }
	jni::ref<javax::swing::JPanel> getGlassPane() { return call_method<"getGlassPane", jni::ref<javax::swing::JPanel>>(); }
	void setGlassPane(jni::ref<javax::swing::JPanel> p1) { return call_method<"setGlassPane", void>(p1); }
	jni::ref<javax::swing::JPanel> createGlassPane() { return call_method<"createGlassPane", jni::ref<javax::swing::JPanel>>(); }
	void setLayout(jni::ref<java::awt::LayoutManager> p1) { return call_method<"setLayout", void>(p1); }
	void setBorder(jni::ref<javax::swing::border::Border> p1) { return call_method<"setBorder", void>(p1); }
	void remove(jni::ref<java::awt::Component> p1) { return call_method<"remove", void>(p1); }
	void removeAll() { return call_method<"removeAll", void>(); }
	void paintImmediately(jint p1, jint p2, jint p3, jint p4) { return call_method<"paintImmediately", void>(p1, p2, p3, p4); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	jboolean isOptimizedDrawingEnabled() { return call_method<"isOptimizedDrawingEnabled", jboolean>(); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void setLayerEventMask(jlong p1) { return call_method<"setLayerEventMask", void>(p1); }
	jlong getLayerEventMask() { return call_method<"getLayerEventMask", jlong>(); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::awt::Dimension> getPreferredScrollableViewportSize() { return call_method<"getPreferredScrollableViewportSize", jni::ref<java::awt::Dimension>>(); }
	jint getScrollableBlockIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableBlockIncrement", jint>(p1, p2, p3); }
	jboolean getScrollableTracksViewportHeight() { return call_method<"getScrollableTracksViewportHeight", jboolean>(); }
	jboolean getScrollableTracksViewportWidth() { return call_method<"getScrollableTracksViewportWidth", jboolean>(); }
	jint getScrollableUnitIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableUnitIncrement", jint>(p1, p2, p3); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	void doLayout() { return call_method<"doLayout", void>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JLayer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JLAYER
