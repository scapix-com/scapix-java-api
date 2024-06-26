// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicComboPopup.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOPOPUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOPOPUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalComboBoxUI_MetalComboPopup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalComboBoxUI_MetalComboPopup>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalComboBoxUI$MetalComboPopup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicComboPopup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOPOPUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOPOPUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOPOPUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/javax/swing/JComboBox.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalComboBoxUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalComboBoxUI_MetalComboPopup : public jni::object_base<"javax/swing/plaf/metal/MetalComboBoxUI$MetalComboPopup",
	javax::swing::plaf::basic::BasicComboPopup>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalComboBoxUI_MetalComboPopup> new_object(jni::ref<javax::swing::plaf::metal::MetalComboBoxUI> p1, jni::ref<javax::swing::JComboBox> p2) { return base_::new_object(p1, p2); }
	void delegateFocus(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"delegateFocus", void>(p1); }

protected:

	MetalComboBoxUI_MetalComboPopup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALCOMBOBOXUI_METALCOMBOPOPUP
