// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/TextUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITEXTUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITEXTUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::multi { class MultiTextUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::multi::MultiTextUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/multi/MultiTextUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::TextUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITEXTUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITEXTUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITEXTUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/text/EditorKit.h>
#include <scapix/java_api/javax/swing/text/JTextComponent.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#include <scapix/java_api/javax/swing/text/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::multi::MultiTextUI : public jni::object_base<"javax/swing/plaf/multi/MultiTextUI",
	javax::swing::plaf::TextUI>
{
public:

	static jni::ref<javax::swing::plaf::multi::MultiTextUI> new_object() { return base_::new_object(); }
	jni::ref<jni::array<javax::swing::plaf::ComponentUI>> getUIs() { return call_method<"getUIs", jni::ref<jni::array<javax::swing::plaf::ComponentUI>>>(); }
	jni::ref<java::lang::String> getToolTipText(jni::ref<javax::swing::text::JTextComponent> p1, jni::ref<java::awt::Point> p2) { return call_method<"getToolTipText", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::awt::Rectangle> modelToView(jni::ref<javax::swing::text::JTextComponent> p1, jint p2) { return call_method<"modelToView", jni::ref<java::awt::Rectangle>>(p1, p2); }
	jni::ref<java::awt::Rectangle> modelToView(jni::ref<javax::swing::text::JTextComponent> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"modelToView", jni::ref<java::awt::Rectangle>>(p1, p2, p3); }
	jint viewToModel(jni::ref<javax::swing::text::JTextComponent> p1, jni::ref<java::awt::Point> p2) { return call_method<"viewToModel", jint>(p1, p2); }
	jint viewToModel(jni::ref<javax::swing::text::JTextComponent> p1, jni::ref<java::awt::Point> p2, jni::ref<jni::array<javax::swing::text::Position_Bias>> p3) { return call_method<"viewToModel", jint>(p1, p2, p3); }
	jint getNextVisualPositionFrom(jni::ref<javax::swing::text::JTextComponent> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3, jint p4, jni::ref<jni::array<javax::swing::text::Position_Bias>> p5) { return call_method<"getNextVisualPositionFrom", jint>(p1, p2, p3, p4, p5); }
	void damageRange(jni::ref<javax::swing::text::JTextComponent> p1, jint p2, jint p3) { return call_method<"damageRange", void>(p1, p2, p3); }
	void damageRange(jni::ref<javax::swing::text::JTextComponent> p1, jint p2, jint p3, jni::ref<javax::swing::text::Position_Bias> p4, jni::ref<javax::swing::text::Position_Bias> p5) { return call_method<"damageRange", void>(p1, p2, p3, p4, p5); }
	jni::ref<javax::swing::text::EditorKit> getEditorKit(jni::ref<javax::swing::text::JTextComponent> p1) { return call_method<"getEditorKit", jni::ref<javax::swing::text::EditorKit>>(p1); }
	jni::ref<javax::swing::text::View> getRootView(jni::ref<javax::swing::text::JTextComponent> p1) { return call_method<"getRootView", jni::ref<javax::swing::text::View>>(p1); }
	jboolean contains(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3) { return call_method<"contains", jboolean>(p1, p2, p3); }
	void update(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"update", void>(p1, p2); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paint", void>(p1, p2); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1); }
	jint getAccessibleChildrenCount(jni::ref<javax::swing::JComponent> p1) { return call_method<"getAccessibleChildrenCount", jint>(p1); }
	jni::ref<javax::accessibility::Accessible> getAccessibleChild(jni::ref<javax::swing::JComponent> p1, jint p2) { return call_method<"getAccessibleChild", jni::ref<javax::accessibility::Accessible>>(p1, p2); }

protected:

	MultiTextUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITEXTUI
