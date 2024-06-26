// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTITLEPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTITLEPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalTitlePane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalTitlePane>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalTitlePane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTITLEPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTITLEPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTITLEPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JRootPane.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalRootPaneUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::metal::MetalTitlePane : public jni::object_base<"javax/swing/plaf/metal/MetalTitlePane",
	javax::swing::JComponent>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalTitlePane> new_object(jni::ref<javax::swing::JRootPane> p1, jni::ref<javax::swing::plaf::metal::MetalRootPaneUI> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::swing::JRootPane> getRootPane() { return call_method<"getRootPane", jni::ref<javax::swing::JRootPane>>(); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	void paintComponent(jni::ref<java::awt::Graphics> p1) { return call_method<"paintComponent", void>(p1); }

protected:

	MetalTitlePane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALTITLEPANE
