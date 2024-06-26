// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AWTAccessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AWTAccessor>
{
	static constexpr fixed_string class_name = "sun/awt/AWTAccessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR)
#define SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/AWTAccessor_AWTEventAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_AccessibleContextAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_CheckboxMenuItemAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_ClientPropertyKeyAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_ComponentAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_ContainerAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_CursorAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_DefaultKeyboardFocusManagerAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_EventQueueAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_FileDialogAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_FrameAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_InputEventAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_InvocationEventAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_KeyEventAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_KeyboardFocusManagerAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_MenuAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_MenuBarAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_MenuComponentAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_MenuItemAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_MouseEventAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_PopupMenuAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_ScrollPaneAdjustableAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_SequencedEventAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_SystemColorAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_SystemTrayAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_ToolkitAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_TrayIconAccessor.h>
#include <scapix/java_api/sun/awt/AWTAccessor_WindowAccessor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::AWTAccessor : public jni::object_base<"sun/awt/AWTAccessor",
	java::lang::Object>
{
public:

	using ComponentAccessor = AWTAccessor_ComponentAccessor;
	using ContainerAccessor = AWTAccessor_ContainerAccessor;
	using WindowAccessor = AWTAccessor_WindowAccessor;
	using AWTEventAccessor = AWTAccessor_AWTEventAccessor;
	using InputEventAccessor = AWTAccessor_InputEventAccessor;
	using MouseEventAccessor = AWTAccessor_MouseEventAccessor;
	using FrameAccessor = AWTAccessor_FrameAccessor;
	using KeyboardFocusManagerAccessor = AWTAccessor_KeyboardFocusManagerAccessor;
	using MenuComponentAccessor = AWTAccessor_MenuComponentAccessor;
	using EventQueueAccessor = AWTAccessor_EventQueueAccessor;
	using PopupMenuAccessor = AWTAccessor_PopupMenuAccessor;
	using FileDialogAccessor = AWTAccessor_FileDialogAccessor;
	using ScrollPaneAdjustableAccessor = AWTAccessor_ScrollPaneAdjustableAccessor;
	using CheckboxMenuItemAccessor = AWTAccessor_CheckboxMenuItemAccessor;
	using CursorAccessor = AWTAccessor_CursorAccessor;
	using MenuBarAccessor = AWTAccessor_MenuBarAccessor;
	using MenuItemAccessor = AWTAccessor_MenuItemAccessor;
	using MenuAccessor = AWTAccessor_MenuAccessor;
	using KeyEventAccessor = AWTAccessor_KeyEventAccessor;
	using ClientPropertyKeyAccessor = AWTAccessor_ClientPropertyKeyAccessor;
	using SystemTrayAccessor = AWTAccessor_SystemTrayAccessor;
	using TrayIconAccessor = AWTAccessor_TrayIconAccessor;
	using DefaultKeyboardFocusManagerAccessor = AWTAccessor_DefaultKeyboardFocusManagerAccessor;
	using SequencedEventAccessor = AWTAccessor_SequencedEventAccessor;
	using ToolkitAccessor = AWTAccessor_ToolkitAccessor;
	using InvocationEventAccessor = AWTAccessor_InvocationEventAccessor;
	using SystemColorAccessor = AWTAccessor_SystemColorAccessor;
	using AccessibleContextAccessor = AWTAccessor_AccessibleContextAccessor;

	static void setComponentAccessor(jni::ref<sun::awt::AWTAccessor_ComponentAccessor> p1) { return call_static_method<"setComponentAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_ComponentAccessor> getComponentAccessor() { return call_static_method<"getComponentAccessor", jni::ref<sun::awt::AWTAccessor_ComponentAccessor>>(); }
	static void setContainerAccessor(jni::ref<sun::awt::AWTAccessor_ContainerAccessor> p1) { return call_static_method<"setContainerAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_ContainerAccessor> getContainerAccessor() { return call_static_method<"getContainerAccessor", jni::ref<sun::awt::AWTAccessor_ContainerAccessor>>(); }
	static void setWindowAccessor(jni::ref<sun::awt::AWTAccessor_WindowAccessor> p1) { return call_static_method<"setWindowAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_WindowAccessor> getWindowAccessor() { return call_static_method<"getWindowAccessor", jni::ref<sun::awt::AWTAccessor_WindowAccessor>>(); }
	static void setAWTEventAccessor(jni::ref<sun::awt::AWTAccessor_AWTEventAccessor> p1) { return call_static_method<"setAWTEventAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_AWTEventAccessor> getAWTEventAccessor() { return call_static_method<"getAWTEventAccessor", jni::ref<sun::awt::AWTAccessor_AWTEventAccessor>>(); }
	static void setInputEventAccessor(jni::ref<sun::awt::AWTAccessor_InputEventAccessor> p1) { return call_static_method<"setInputEventAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_InputEventAccessor> getInputEventAccessor() { return call_static_method<"getInputEventAccessor", jni::ref<sun::awt::AWTAccessor_InputEventAccessor>>(); }
	static void setMouseEventAccessor(jni::ref<sun::awt::AWTAccessor_MouseEventAccessor> p1) { return call_static_method<"setMouseEventAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_MouseEventAccessor> getMouseEventAccessor() { return call_static_method<"getMouseEventAccessor", jni::ref<sun::awt::AWTAccessor_MouseEventAccessor>>(); }
	static void setFrameAccessor(jni::ref<sun::awt::AWTAccessor_FrameAccessor> p1) { return call_static_method<"setFrameAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_FrameAccessor> getFrameAccessor() { return call_static_method<"getFrameAccessor", jni::ref<sun::awt::AWTAccessor_FrameAccessor>>(); }
	static void setKeyboardFocusManagerAccessor(jni::ref<sun::awt::AWTAccessor_KeyboardFocusManagerAccessor> p1) { return call_static_method<"setKeyboardFocusManagerAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_KeyboardFocusManagerAccessor> getKeyboardFocusManagerAccessor() { return call_static_method<"getKeyboardFocusManagerAccessor", jni::ref<sun::awt::AWTAccessor_KeyboardFocusManagerAccessor>>(); }
	static void setMenuComponentAccessor(jni::ref<sun::awt::AWTAccessor_MenuComponentAccessor> p1) { return call_static_method<"setMenuComponentAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_MenuComponentAccessor> getMenuComponentAccessor() { return call_static_method<"getMenuComponentAccessor", jni::ref<sun::awt::AWTAccessor_MenuComponentAccessor>>(); }
	static void setEventQueueAccessor(jni::ref<sun::awt::AWTAccessor_EventQueueAccessor> p1) { return call_static_method<"setEventQueueAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_EventQueueAccessor> getEventQueueAccessor() { return call_static_method<"getEventQueueAccessor", jni::ref<sun::awt::AWTAccessor_EventQueueAccessor>>(); }
	static void setPopupMenuAccessor(jni::ref<sun::awt::AWTAccessor_PopupMenuAccessor> p1) { return call_static_method<"setPopupMenuAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_PopupMenuAccessor> getPopupMenuAccessor() { return call_static_method<"getPopupMenuAccessor", jni::ref<sun::awt::AWTAccessor_PopupMenuAccessor>>(); }
	static void setFileDialogAccessor(jni::ref<sun::awt::AWTAccessor_FileDialogAccessor> p1) { return call_static_method<"setFileDialogAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_FileDialogAccessor> getFileDialogAccessor() { return call_static_method<"getFileDialogAccessor", jni::ref<sun::awt::AWTAccessor_FileDialogAccessor>>(); }
	static void setScrollPaneAdjustableAccessor(jni::ref<sun::awt::AWTAccessor_ScrollPaneAdjustableAccessor> p1) { return call_static_method<"setScrollPaneAdjustableAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_ScrollPaneAdjustableAccessor> getScrollPaneAdjustableAccessor() { return call_static_method<"getScrollPaneAdjustableAccessor", jni::ref<sun::awt::AWTAccessor_ScrollPaneAdjustableAccessor>>(); }
	static void setCheckboxMenuItemAccessor(jni::ref<sun::awt::AWTAccessor_CheckboxMenuItemAccessor> p1) { return call_static_method<"setCheckboxMenuItemAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_CheckboxMenuItemAccessor> getCheckboxMenuItemAccessor() { return call_static_method<"getCheckboxMenuItemAccessor", jni::ref<sun::awt::AWTAccessor_CheckboxMenuItemAccessor>>(); }
	static void setCursorAccessor(jni::ref<sun::awt::AWTAccessor_CursorAccessor> p1) { return call_static_method<"setCursorAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_CursorAccessor> getCursorAccessor() { return call_static_method<"getCursorAccessor", jni::ref<sun::awt::AWTAccessor_CursorAccessor>>(); }
	static void setMenuBarAccessor(jni::ref<sun::awt::AWTAccessor_MenuBarAccessor> p1) { return call_static_method<"setMenuBarAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_MenuBarAccessor> getMenuBarAccessor() { return call_static_method<"getMenuBarAccessor", jni::ref<sun::awt::AWTAccessor_MenuBarAccessor>>(); }
	static void setMenuItemAccessor(jni::ref<sun::awt::AWTAccessor_MenuItemAccessor> p1) { return call_static_method<"setMenuItemAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_MenuItemAccessor> getMenuItemAccessor() { return call_static_method<"getMenuItemAccessor", jni::ref<sun::awt::AWTAccessor_MenuItemAccessor>>(); }
	static void setMenuAccessor(jni::ref<sun::awt::AWTAccessor_MenuAccessor> p1) { return call_static_method<"setMenuAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_MenuAccessor> getMenuAccessor() { return call_static_method<"getMenuAccessor", jni::ref<sun::awt::AWTAccessor_MenuAccessor>>(); }
	static void setKeyEventAccessor(jni::ref<sun::awt::AWTAccessor_KeyEventAccessor> p1) { return call_static_method<"setKeyEventAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_KeyEventAccessor> getKeyEventAccessor() { return call_static_method<"getKeyEventAccessor", jni::ref<sun::awt::AWTAccessor_KeyEventAccessor>>(); }
	static void setClientPropertyKeyAccessor(jni::ref<sun::awt::AWTAccessor_ClientPropertyKeyAccessor> p1) { return call_static_method<"setClientPropertyKeyAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_ClientPropertyKeyAccessor> getClientPropertyKeyAccessor() { return call_static_method<"getClientPropertyKeyAccessor", jni::ref<sun::awt::AWTAccessor_ClientPropertyKeyAccessor>>(); }
	static void setSystemTrayAccessor(jni::ref<sun::awt::AWTAccessor_SystemTrayAccessor> p1) { return call_static_method<"setSystemTrayAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_SystemTrayAccessor> getSystemTrayAccessor() { return call_static_method<"getSystemTrayAccessor", jni::ref<sun::awt::AWTAccessor_SystemTrayAccessor>>(); }
	static void setTrayIconAccessor(jni::ref<sun::awt::AWTAccessor_TrayIconAccessor> p1) { return call_static_method<"setTrayIconAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_TrayIconAccessor> getTrayIconAccessor() { return call_static_method<"getTrayIconAccessor", jni::ref<sun::awt::AWTAccessor_TrayIconAccessor>>(); }
	static void setDefaultKeyboardFocusManagerAccessor(jni::ref<sun::awt::AWTAccessor_DefaultKeyboardFocusManagerAccessor> p1) { return call_static_method<"setDefaultKeyboardFocusManagerAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_DefaultKeyboardFocusManagerAccessor> getDefaultKeyboardFocusManagerAccessor() { return call_static_method<"getDefaultKeyboardFocusManagerAccessor", jni::ref<sun::awt::AWTAccessor_DefaultKeyboardFocusManagerAccessor>>(); }
	static void setSequencedEventAccessor(jni::ref<sun::awt::AWTAccessor_SequencedEventAccessor> p1) { return call_static_method<"setSequencedEventAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_SequencedEventAccessor> getSequencedEventAccessor() { return call_static_method<"getSequencedEventAccessor", jni::ref<sun::awt::AWTAccessor_SequencedEventAccessor>>(); }
	static void setToolkitAccessor(jni::ref<sun::awt::AWTAccessor_ToolkitAccessor> p1) { return call_static_method<"setToolkitAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_ToolkitAccessor> getToolkitAccessor() { return call_static_method<"getToolkitAccessor", jni::ref<sun::awt::AWTAccessor_ToolkitAccessor>>(); }
	static void setInvocationEventAccessor(jni::ref<sun::awt::AWTAccessor_InvocationEventAccessor> p1) { return call_static_method<"setInvocationEventAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_InvocationEventAccessor> getInvocationEventAccessor() { return call_static_method<"getInvocationEventAccessor", jni::ref<sun::awt::AWTAccessor_InvocationEventAccessor>>(); }
	static jni::ref<sun::awt::AWTAccessor_SystemColorAccessor> getSystemColorAccessor() { return call_static_method<"getSystemColorAccessor", jni::ref<sun::awt::AWTAccessor_SystemColorAccessor>>(); }
	static void setSystemColorAccessor(jni::ref<sun::awt::AWTAccessor_SystemColorAccessor> p1) { return call_static_method<"setSystemColorAccessor", void>(p1); }
	static jni::ref<sun::awt::AWTAccessor_AccessibleContextAccessor> getAccessibleContextAccessor() { return call_static_method<"getAccessibleContextAccessor", jni::ref<sun::awt::AWTAccessor_AccessibleContextAccessor>>(); }
	static void setAccessibleContextAccessor(jni::ref<sun::awt::AWTAccessor_AccessibleContextAccessor> p1) { return call_static_method<"setAccessibleContextAccessor", void>(p1); }

protected:

	AWTAccessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTACCESSOR
