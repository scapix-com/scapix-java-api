// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicDesktopIconUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALDESKTOPICONUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALDESKTOPICONUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalDesktopIconUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalDesktopIconUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalDesktopIconUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicDesktopIconUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALDESKTOPICONUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALDESKTOPICONUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALDESKTOPICONUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalDesktopIconUI : public jni::object_base<"javax/swing/plaf/metal/MetalDesktopIconUI",
	javax::swing::plaf::basic::BasicDesktopIconUI>
{
public:

	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	static jni::ref<javax::swing::plaf::metal::MetalDesktopIconUI> new_object() { return base_::new_object(); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1); }

protected:

	MetalDesktopIconUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALDESKTOPICONUI