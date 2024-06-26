// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicToggleButtonUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOGGLEBUTTONUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOGGLEBUTTONUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalToggleButtonUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalToggleButtonUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalToggleButtonUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicToggleButtonUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOGGLEBUTTONUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOGGLEBUTTONUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOGGLEBUTTONUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/AbstractButton.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalToggleButtonUI : public jni::object_base<"javax/swing/plaf/metal/MetalToggleButtonUI",
	javax::swing::plaf::basic::BasicToggleButtonUI>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalToggleButtonUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installDefaults(jni::ref<javax::swing::AbstractButton> p1) { return call_method<"installDefaults", void>(p1); }
	void update(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"update", void>(p1, p2); }

protected:

	MetalToggleButtonUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTOGGLEBUTTONUI
