// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalIconFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalIconFactory>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalIconFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_PaletteCloseIcon.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_FolderIcon16.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_TreeFolderIcon.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_FileIcon16.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_TreeLeafIcon.h>
#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_TreeControlIcon.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalIconFactory : public jni::object_base<"javax/swing/plaf/metal/MetalIconFactory",
	java::lang::Object,
	java::io::Serializable>
{
public:

	using PaletteCloseIcon = MetalIconFactory_PaletteCloseIcon;
	using FolderIcon16 = MetalIconFactory_FolderIcon16;
	using TreeFolderIcon = MetalIconFactory_TreeFolderIcon;
	using FileIcon16 = MetalIconFactory_FileIcon16;
	using TreeLeafIcon = MetalIconFactory_TreeLeafIcon;
	using TreeControlIcon = MetalIconFactory_TreeControlIcon;

	static jboolean DARK() { return get_static_field<"DARK", jboolean>(); }
	static jboolean LIGHT() { return get_static_field<"LIGHT", jboolean>(); }

	static jni::ref<javax::swing::plaf::metal::MetalIconFactory> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::Icon> getFileChooserDetailViewIcon() { return call_static_method<"getFileChooserDetailViewIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getFileChooserHomeFolderIcon() { return call_static_method<"getFileChooserHomeFolderIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getFileChooserListViewIcon() { return call_static_method<"getFileChooserListViewIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getFileChooserNewFolderIcon() { return call_static_method<"getFileChooserNewFolderIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getFileChooserUpFolderIcon() { return call_static_method<"getFileChooserUpFolderIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getInternalFrameAltMaximizeIcon(jint p1) { return call_static_method<"getInternalFrameAltMaximizeIcon", jni::ref<javax::swing::Icon>>(p1); }
	static jni::ref<javax::swing::Icon> getInternalFrameCloseIcon(jint p1) { return call_static_method<"getInternalFrameCloseIcon", jni::ref<javax::swing::Icon>>(p1); }
	static jni::ref<javax::swing::Icon> getInternalFrameDefaultMenuIcon() { return call_static_method<"getInternalFrameDefaultMenuIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getInternalFrameMaximizeIcon(jint p1) { return call_static_method<"getInternalFrameMaximizeIcon", jni::ref<javax::swing::Icon>>(p1); }
	static jni::ref<javax::swing::Icon> getInternalFrameMinimizeIcon(jint p1) { return call_static_method<"getInternalFrameMinimizeIcon", jni::ref<javax::swing::Icon>>(p1); }
	static jni::ref<javax::swing::Icon> getRadioButtonIcon() { return call_static_method<"getRadioButtonIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getCheckBoxIcon() { return call_static_method<"getCheckBoxIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getTreeComputerIcon() { return call_static_method<"getTreeComputerIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getTreeFloppyDriveIcon() { return call_static_method<"getTreeFloppyDriveIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getTreeFolderIcon() { return call_static_method<"getTreeFolderIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getTreeHardDriveIcon() { return call_static_method<"getTreeHardDriveIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getTreeLeafIcon() { return call_static_method<"getTreeLeafIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getTreeControlIcon(jboolean p1) { return call_static_method<"getTreeControlIcon", jni::ref<javax::swing::Icon>>(p1); }
	static jni::ref<javax::swing::Icon> getMenuArrowIcon() { return call_static_method<"getMenuArrowIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getMenuItemCheckIcon() { return call_static_method<"getMenuItemCheckIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getMenuItemArrowIcon() { return call_static_method<"getMenuItemArrowIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getCheckBoxMenuItemIcon() { return call_static_method<"getCheckBoxMenuItemIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getRadioButtonMenuItemIcon() { return call_static_method<"getRadioButtonMenuItemIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getHorizontalSliderThumbIcon() { return call_static_method<"getHorizontalSliderThumbIcon", jni::ref<javax::swing::Icon>>(); }
	static jni::ref<javax::swing::Icon> getVerticalSliderThumbIcon() { return call_static_method<"getVerticalSliderThumbIcon", jni::ref<javax::swing::Icon>>(); }

protected:

	MetalIconFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY
