// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/RGBImageFilter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALUTILS_OCEANDISABLEDBUTTONIMAGEFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALUTILS_OCEANDISABLEDBUTTONIMAGEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalUtils_OceanDisabledButtonImageFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalUtils_OceanDisabledButtonImageFilter>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalUtils$OceanDisabledButtonImageFilter";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::RGBImageFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALUTILS_OCEANDISABLEDBUTTONIMAGEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALUTILS_OCEANDISABLEDBUTTONIMAGEFILTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALUTILS_OCEANDISABLEDBUTTONIMAGEFILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::metal::MetalUtils_OceanDisabledButtonImageFilter : public jni::object_base<"javax/swing/plaf/metal/MetalUtils$OceanDisabledButtonImageFilter",
	java::awt::image::RGBImageFilter>
{
public:

	jint filterRGB(jint p1, jint p2, jint p3) { return call_method<"filterRGB", jint>(p1, p2, p3); }

protected:

	MetalUtils_OceanDisabledButtonImageFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALUTILS_OCEANDISABLEDBUTTONIMAGEFILTER
