// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JCOLORCHOOSER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JCOLORCHOOSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JColorChooser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JColorChooser>
{
	static constexpr fixed_string class_name = "javax/swing/JColorChooser";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JCOLORCHOOSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JCOLORCHOOSER)
#define SCAPIX_JAVA_API_JAVAX_SWING_JCOLORCHOOSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/JDialog.h>
#include <scapix/java_api/javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <scapix/java_api/javax/swing/colorchooser/ColorSelectionModel.h>
#include <scapix/java_api/javax/swing/plaf/ColorChooserUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JColorChooser : public jni::object_base<"javax/swing/JColorChooser",
	javax::swing::JComponent,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::lang::String> SELECTION_MODEL_PROPERTY() { return get_static_field<"SELECTION_MODEL_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PREVIEW_PANEL_PROPERTY() { return get_static_field<"PREVIEW_PANEL_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CHOOSER_PANELS_PROPERTY() { return get_static_field<"CHOOSER_PANELS_PROPERTY", jni::ref<java::lang::String>>(); }

	static jni::ref<java::awt::Color> showDialog(jni::ref<java::awt::Component> p1, jni::ref<java::lang::String> p2, jni::ref<java::awt::Color> p3) { return call_static_method<"showDialog", jni::ref<java::awt::Color>>(p1, p2, p3); }
	static jni::ref<javax::swing::JDialog> createDialog(jni::ref<java::awt::Component> p1, jni::ref<java::lang::String> p2, jboolean p3, jni::ref<javax::swing::JColorChooser> p4, jni::ref<java::awt::event::ActionListener> p5, jni::ref<java::awt::event::ActionListener> p6) { return call_static_method<"createDialog", jni::ref<javax::swing::JDialog>>(p1, p2, p3, p4, p5, p6); }
	static jni::ref<javax::swing::JColorChooser> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JColorChooser> new_object(jni::ref<java::awt::Color> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JColorChooser> new_object(jni::ref<javax::swing::colorchooser::ColorSelectionModel> p1) { return base_::new_object(p1); }
	jni::ref<javax::swing::plaf::ColorChooserUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::ColorChooserUI>>(); }
	void setUI(jni::ref<javax::swing::plaf::ColorChooserUI> p1) { return call_method<"setUI", void>(p1); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	jni::ref<java::awt::Color> getColor() { return call_method<"getColor", jni::ref<java::awt::Color>>(); }
	void setColor(jni::ref<java::awt::Color> p1) { return call_method<"setColor", void>(p1); }
	void setColor(jint p1, jint p2, jint p3) { return call_method<"setColor", void>(p1, p2, p3); }
	void setColor(jint p1) { return call_method<"setColor", void>(p1); }
	void setDragEnabled(jboolean p1) { return call_method<"setDragEnabled", void>(p1); }
	jboolean getDragEnabled() { return call_method<"getDragEnabled", jboolean>(); }
	void setPreviewPanel(jni::ref<javax::swing::JComponent> p1) { return call_method<"setPreviewPanel", void>(p1); }
	jni::ref<javax::swing::JComponent> getPreviewPanel() { return call_method<"getPreviewPanel", jni::ref<javax::swing::JComponent>>(); }
	void addChooserPanel(jni::ref<javax::swing::colorchooser::AbstractColorChooserPanel> p1) { return call_method<"addChooserPanel", void>(p1); }
	jni::ref<javax::swing::colorchooser::AbstractColorChooserPanel> removeChooserPanel(jni::ref<javax::swing::colorchooser::AbstractColorChooserPanel> p1) { return call_method<"removeChooserPanel", jni::ref<javax::swing::colorchooser::AbstractColorChooserPanel>>(p1); }
	void setChooserPanels(jni::ref<jni::array<javax::swing::colorchooser::AbstractColorChooserPanel>> p1) { return call_method<"setChooserPanels", void>(p1); }
	jni::ref<jni::array<javax::swing::colorchooser::AbstractColorChooserPanel>> getChooserPanels() { return call_method<"getChooserPanels", jni::ref<jni::array<javax::swing::colorchooser::AbstractColorChooserPanel>>>(); }
	jni::ref<javax::swing::colorchooser::ColorSelectionModel> getSelectionModel() { return call_method<"getSelectionModel", jni::ref<javax::swing::colorchooser::ColorSelectionModel>>(); }
	void setSelectionModel(jni::ref<javax::swing::colorchooser::ColorSelectionModel> p1) { return call_method<"setSelectionModel", void>(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JColorChooser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JCOLORCHOOSER