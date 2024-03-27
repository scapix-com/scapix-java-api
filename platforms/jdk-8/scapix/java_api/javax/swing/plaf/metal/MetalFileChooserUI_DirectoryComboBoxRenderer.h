// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultListCellRenderer.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALFILECHOOSERUI_DIRECTORYCOMBOBOXRENDERER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALFILECHOOSERUI_DIRECTORYCOMBOBOXRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalFileChooserUI_DirectoryComboBoxRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalFileChooserUI_DirectoryComboBoxRenderer>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultListCellRenderer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALFILECHOOSERUI_DIRECTORYCOMBOBOXRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALFILECHOOSERUI_DIRECTORYCOMBOBOXRENDERER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALFILECHOOSERUI_DIRECTORYCOMBOBOXRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/JList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::metal::MetalFileChooserUI_DirectoryComboBoxRenderer : public jni::object_base<"javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxRenderer",
	javax::swing::DefaultListCellRenderer>
{
public:

	jni::ref<java::awt::Component> getListCellRendererComponent(jni::ref<javax::swing::JList> p1, jni::ref<java::lang::Object> p2, jint p3, jboolean p4, jboolean p5) { return call_method<"getListCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5); }

protected:

	MetalFileChooserUI_DirectoryComboBoxRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALFILECHOOSERUI_DIRECTORYCOMBOBOXRENDERER