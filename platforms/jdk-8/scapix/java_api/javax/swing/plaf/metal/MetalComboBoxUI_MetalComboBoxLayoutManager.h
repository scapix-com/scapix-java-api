// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicComboBoxUI_ComboBoxLayoutManager.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOBOXLAYOUTMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOBOXLAYOUTMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalComboBoxUI_MetalComboBoxLayoutManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalComboBoxUI_MetalComboBoxLayoutManager>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalComboBoxUI$MetalComboBoxLayoutManager";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicComboBoxUI_ComboBoxLayoutManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOBOXLAYOUTMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOBOXLAYOUTMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOBOXLAYOUTMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalComboBoxUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalComboBoxUI_MetalComboBoxLayoutManager : public jni::object_base<"javax/swing/plaf/metal/MetalComboBoxUI$MetalComboBoxLayoutManager",
	javax::swing::plaf::basic::BasicComboBoxUI_ComboBoxLayoutManager>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalComboBoxUI_MetalComboBoxLayoutManager> new_object(jni::ref<javax::swing::plaf::metal::MetalComboBoxUI> p1) { return base_::new_object(p1); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }
	void superLayout(jni::ref<java::awt::Container> p1) { return call_method<"superLayout", void>(p1); }

protected:

	MetalComboBoxUI_MetalComboBoxLayoutManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOBOXLAYOUTMANAGER