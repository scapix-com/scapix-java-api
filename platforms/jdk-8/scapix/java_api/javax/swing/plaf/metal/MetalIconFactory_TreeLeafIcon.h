// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/metal/MetalIconFactory_FileIcon16.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_TREELEAFICON_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_TREELEAFICON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalIconFactory_TreeLeafIcon; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalIconFactory_TreeLeafIcon>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalIconFactory$TreeLeafIcon";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::metal::MetalIconFactory_FileIcon16>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_TREELEAFICON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_TREELEAFICON)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_TREELEAFICON

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalIconFactory_TreeLeafIcon : public jni::object_base<"javax/swing/plaf/metal/MetalIconFactory$TreeLeafIcon",
	javax::swing::plaf::metal::MetalIconFactory_FileIcon16>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalIconFactory_TreeLeafIcon> new_object() { return base_::new_object(); }
	jint getShift() { return call_method<"getShift", jint>(); }
	jint getAdditionalHeight() { return call_method<"getAdditionalHeight", jint>(); }

protected:

	MetalIconFactory_TreeLeafIcon(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALICONFACTORY_TREELEAFICON