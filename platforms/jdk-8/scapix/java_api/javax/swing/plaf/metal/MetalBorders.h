// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalBorders; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalBorders>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalBorders";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/border/Border.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_Flush3DBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_ButtonBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_InternalFrameBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_PaletteBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_OptionDialogBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_MenuBarBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_MenuItemBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_PopupMenuBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_RolloverButtonBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_ToolBarBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_TextFieldBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_ScrollPaneBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_ToggleButtonBorder.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalBorders_TableHeaderBorder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalBorders : public jni::object_base<"javax/swing/plaf/metal/MetalBorders",
	java::lang::Object>
{
public:

	using Flush3DBorder = MetalBorders_Flush3DBorder;
	using ButtonBorder = MetalBorders_ButtonBorder;
	using InternalFrameBorder = MetalBorders_InternalFrameBorder;
	using PaletteBorder = MetalBorders_PaletteBorder;
	using OptionDialogBorder = MetalBorders_OptionDialogBorder;
	using MenuBarBorder = MetalBorders_MenuBarBorder;
	using MenuItemBorder = MetalBorders_MenuItemBorder;
	using PopupMenuBorder = MetalBorders_PopupMenuBorder;
	using RolloverButtonBorder = MetalBorders_RolloverButtonBorder;
	using ToolBarBorder = MetalBorders_ToolBarBorder;
	using TextFieldBorder = MetalBorders_TextFieldBorder;
	using ScrollPaneBorder = MetalBorders_ScrollPaneBorder;
	using ToggleButtonBorder = MetalBorders_ToggleButtonBorder;
	using TableHeaderBorder = MetalBorders_TableHeaderBorder;

	static jni::ref<javax::swing::plaf::metal::MetalBorders> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::border::Border> getButtonBorder() { return call_static_method<"getButtonBorder", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getTextBorder() { return call_static_method<"getTextBorder", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getTextFieldBorder() { return call_static_method<"getTextFieldBorder", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getToggleButtonBorder() { return call_static_method<"getToggleButtonBorder", jni::ref<javax::swing::border::Border>>(); }
	static jni::ref<javax::swing::border::Border> getDesktopIconBorder() { return call_static_method<"getDesktopIconBorder", jni::ref<javax::swing::border::Border>>(); }

protected:

	MetalBorders(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS
