// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMEUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMEUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalInternalFrameUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalInternalFrameUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalInternalFrameUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicInternalFrameUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMEUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMEUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMEUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalInternalFrameUI : public jni::object_base<"javax/swing/plaf/metal/MetalInternalFrameUI",
	javax::swing::plaf::basic::BasicInternalFrameUI>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalInternalFrameUI> new_object(jni::ref<javax::swing::JInternalFrame> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	void setPalette(jboolean p1) { return call_method<"setPalette", void>(p1); }

protected:

	MetalInternalFrameUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMEUI
