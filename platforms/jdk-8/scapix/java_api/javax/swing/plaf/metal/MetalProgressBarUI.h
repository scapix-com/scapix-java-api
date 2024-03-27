// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicProgressBarUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALPROGRESSBARUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALPROGRESSBARUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalProgressBarUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalProgressBarUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalProgressBarUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicProgressBarUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALPROGRESSBARUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALPROGRESSBARUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALPROGRESSBARUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalProgressBarUI : public jni::object_base<"javax/swing/plaf/metal/MetalProgressBarUI",
	javax::swing::plaf::basic::BasicProgressBarUI>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalProgressBarUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void paintDeterminate(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paintDeterminate", void>(p1, p2); }
	void paintIndeterminate(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paintIndeterminate", void>(p1, p2); }

protected:

	MetalProgressBarUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALPROGRESSBARUI