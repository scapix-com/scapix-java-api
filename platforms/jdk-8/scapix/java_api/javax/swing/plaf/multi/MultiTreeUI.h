// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/TreeUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITREEUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITREEUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::multi { class MultiTreeUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::multi::MultiTreeUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/multi/MultiTreeUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::TreeUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITREEUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITREEUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITREEUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JTree.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/tree/TreePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::multi::MultiTreeUI : public jni::object_base<"javax/swing/plaf/multi/MultiTreeUI",
	javax::swing::plaf::TreeUI>
{
public:

	static jni::ref<javax::swing::plaf::multi::MultiTreeUI> new_object() { return base_::new_object(); }
	jni::ref<jni::array<javax::swing::plaf::ComponentUI>> getUIs() { return call_method<"getUIs", jni::ref<jni::array<javax::swing::plaf::ComponentUI>>>(); }
	jni::ref<java::awt::Rectangle> getPathBounds(jni::ref<javax::swing::JTree> p1, jni::ref<javax::swing::tree::TreePath> p2) { return call_method<"getPathBounds", jni::ref<java::awt::Rectangle>>(p1, p2); }
	jni::ref<javax::swing::tree::TreePath> getPathForRow(jni::ref<javax::swing::JTree> p1, jint p2) { return call_method<"getPathForRow", jni::ref<javax::swing::tree::TreePath>>(p1, p2); }
	jint getRowForPath(jni::ref<javax::swing::JTree> p1, jni::ref<javax::swing::tree::TreePath> p2) { return call_method<"getRowForPath", jint>(p1, p2); }
	jint getRowCount(jni::ref<javax::swing::JTree> p1) { return call_method<"getRowCount", jint>(p1); }
	jni::ref<javax::swing::tree::TreePath> getClosestPathForLocation(jni::ref<javax::swing::JTree> p1, jint p2, jint p3) { return call_method<"getClosestPathForLocation", jni::ref<javax::swing::tree::TreePath>>(p1, p2, p3); }
	jboolean isEditing(jni::ref<javax::swing::JTree> p1) { return call_method<"isEditing", jboolean>(p1); }
	jboolean stopEditing(jni::ref<javax::swing::JTree> p1) { return call_method<"stopEditing", jboolean>(p1); }
	void cancelEditing(jni::ref<javax::swing::JTree> p1) { return call_method<"cancelEditing", void>(p1); }
	void startEditingAtPath(jni::ref<javax::swing::JTree> p1, jni::ref<javax::swing::tree::TreePath> p2) { return call_method<"startEditingAtPath", void>(p1, p2); }
	jni::ref<javax::swing::tree::TreePath> getEditingPath(jni::ref<javax::swing::JTree> p1) { return call_method<"getEditingPath", jni::ref<javax::swing::tree::TreePath>>(p1); }
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

	MultiTreeUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_MULTI_MULTITREEUI
