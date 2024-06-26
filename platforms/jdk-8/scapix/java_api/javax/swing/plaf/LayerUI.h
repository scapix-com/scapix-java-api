// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_LAYERUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_LAYERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class LayerUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::LayerUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/LayerUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ComponentUI, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_LAYERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_LAYERUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_LAYERUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/AWTEvent.h>
#include <scapix/java_api/java/awt/Component_BaselineResizeBehavior.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JLayer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::LayerUI : public jni::object_base<"javax/swing/plaf/LayerUI",
	javax::swing::plaf::ComponentUI,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::plaf::LayerUI> new_object() { return base_::new_object(); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paint", void>(p1, p2); }
	void eventDispatched(jni::ref<java::awt::AWTEvent> p1, jni::ref<javax::swing::JLayer> p2) { return call_method<"eventDispatched", void>(p1, p2); }
	void updateUI(jni::ref<javax::swing::JLayer> p1) { return call_method<"updateUI", void>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners() { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(); }
	void addPropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"addPropertyChangeListener", void>(p1, p2); }
	void removePropertyChangeListener(jni::ref<java::lang::String> p1, jni::ref<java::beans::PropertyChangeListener> p2) { return call_method<"removePropertyChangeListener", void>(p1, p2); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners(jni::ref<java::lang::String> p1) { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(p1); }
	void applyPropertyChange(jni::ref<java::beans::PropertyChangeEvent> p1, jni::ref<javax::swing::JLayer> p2) { return call_method<"applyPropertyChange", void>(p1, p2); }
	jint getBaseline(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3) { return call_method<"getBaseline", jint>(p1, p2, p3); }
	jni::ref<java::awt::Component_BaselineResizeBehavior> getBaselineResizeBehavior(jni::ref<javax::swing::JComponent> p1) { return call_method<"getBaselineResizeBehavior", jni::ref<java::awt::Component_BaselineResizeBehavior>>(p1); }
	void doLayout(jni::ref<javax::swing::JLayer> p1) { return call_method<"doLayout", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1); }
	void paintImmediately(jint p1, jint p2, jint p3, jint p4, jni::ref<javax::swing::JLayer> p5) { return call_method<"paintImmediately", void>(p1, p2, p3, p4, p5); }

protected:

	LayerUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_LAYERUI
