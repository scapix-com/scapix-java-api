// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicLabelUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLABELUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLABELUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalLabelUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalLabelUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalLabelUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicLabelUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLABELUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLABELUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLABELUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalLabelUI : public jni::object_base<"javax/swing/plaf/metal/MetalLabelUI",
	javax::swing::plaf::basic::BasicLabelUI>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalLabelUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }

protected:

	MetalLabelUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALLABELUI
