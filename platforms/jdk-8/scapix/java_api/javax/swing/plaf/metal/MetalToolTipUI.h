// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicToolTipUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOOLTIPUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOOLTIPUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalToolTipUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalToolTipUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalToolTipUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicToolTipUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOOLTIPUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOOLTIPUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOOLTIPUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalToolTipUI : public jni::object_base<"javax/swing/plaf/metal/MetalToolTipUI",
	javax::swing::plaf::basic::BasicToolTipUI>
{
public:

	static jint padSpaceBetweenStrings() { return get_static_field<"padSpaceBetweenStrings", jint>(); }

	static jni::ref<javax::swing::plaf::metal::MetalToolTipUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paint", void>(p1, p2); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::lang::String> getAcceleratorString() { return call_method<"getAcceleratorString", jni::ref<java::lang::String>>(); }

protected:

	MetalToolTipUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOOLTIPUI
