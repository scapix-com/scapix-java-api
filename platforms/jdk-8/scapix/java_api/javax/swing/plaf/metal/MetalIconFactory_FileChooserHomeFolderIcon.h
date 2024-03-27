// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FILECHOOSERHOMEFOLDERICON_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FILECHOOSERHOMEFOLDERICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalIconFactory_FileChooserHomeFolderIcon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalIconFactory_FileChooserHomeFolderIcon>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalIconFactory$FileChooserHomeFolderIcon";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::Icon, scapix::java_api::javax::swing::plaf::UIResource, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FILECHOOSERHOMEFOLDERICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FILECHOOSERHOMEFOLDERICON)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FILECHOOSERHOMEFOLDERICON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::metal::MetalIconFactory_FileChooserHomeFolderIcon : public jni::object_base<"javax/swing/plaf/metal/MetalIconFactory$FileChooserHomeFolderIcon",
	java::lang::Object,
	javax::swing::Icon,
	javax::swing::plaf::UIResource,
	java::io::Serializable>
{
public:

	void paintIcon(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4) { return call_method<"paintIcon", void>(p1, p2, p3, p4); }
	jint getIconWidth() { return call_method<"getIconWidth", jint>(); }
	jint getIconHeight() { return call_method<"getIconHeight", jint>(); }

protected:

	MetalIconFactory_FileChooserHomeFolderIcon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_FILECHOOSERHOMEFOLDERICON
