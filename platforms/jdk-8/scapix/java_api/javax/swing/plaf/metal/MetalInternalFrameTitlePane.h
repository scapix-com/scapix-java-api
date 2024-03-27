// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMETITLEPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMETITLEPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalInternalFrameTitlePane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalInternalFrameTitlePane>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalInternalFrameTitlePane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicInternalFrameTitlePane>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMETITLEPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMETITLEPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMETITLEPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalInternalFrameTitlePane : public jni::object_base<"javax/swing/plaf/metal/MetalInternalFrameTitlePane",
	javax::swing::plaf::basic::BasicInternalFrameTitlePane>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalInternalFrameTitlePane> new_object(jni::ref<javax::swing::JInternalFrame> p1) { return base_::new_object(p1); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void paintPalette(jni::ref<java::awt::Graphics> p1) { return call_method<"paintPalette", void>(p1); }
	void paintComponent(jni::ref<java::awt::Graphics> p1) { return call_method<"paintComponent", void>(p1); }
	void setPalette(jboolean p1) { return call_method<"setPalette", void>(p1); }

protected:

	MetalInternalFrameTitlePane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALINTERNALFRAMETITLEPANE