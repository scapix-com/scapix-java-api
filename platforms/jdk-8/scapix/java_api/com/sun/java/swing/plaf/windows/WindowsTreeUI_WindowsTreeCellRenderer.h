// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/tree/DefaultTreeCellRenderer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTREEUI_WINDOWSTREECELLRENDERER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTREEUI_WINDOWSTREECELLRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::windows { class WindowsTreeUI_WindowsTreeCellRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::windows::WindowsTreeUI_WindowsTreeCellRenderer>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/windows/WindowsTreeUI$WindowsTreeCellRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::tree::DefaultTreeCellRenderer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTREEUI_WINDOWSTREECELLRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTREEUI_WINDOWSTREECELLRENDERER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTREEUI_WINDOWSTREECELLRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/swing/plaf/windows/WindowsTreeUI.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/JTree.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::windows::WindowsTreeUI_WindowsTreeCellRenderer : public jni::object_base<"com/sun/java/swing/plaf/windows/WindowsTreeUI$WindowsTreeCellRenderer",
	javax::swing::tree::DefaultTreeCellRenderer>
{
public:

	static jni::ref<com::sun::java::swing::plaf::windows::WindowsTreeUI_WindowsTreeCellRenderer> new_object(jni::ref<com::sun::java::swing::plaf::windows::WindowsTreeUI> p1) { return base_::new_object(p1); }
	jni::ref<java::awt::Component> getTreeCellRendererComponent(jni::ref<javax::swing::JTree> p1, jni::ref<java::lang::Object> p2, jboolean p3, jboolean p4, jboolean p5, jint p6, jboolean p7) { return call_method<"getTreeCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5, p6, p7); }

protected:

	WindowsTreeUI_WindowsTreeCellRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_WINDOWS_WINDOWSTREEUI_WINDOWSTREECELLRENDERER
