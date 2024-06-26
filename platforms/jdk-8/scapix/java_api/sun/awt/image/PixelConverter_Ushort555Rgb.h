// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/image/PixelConverter.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_PIXELCONVERTER_USHORT555RGB_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_PIXELCONVERTER_USHORT555RGB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class PixelConverter_Ushort555Rgb; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::PixelConverter_Ushort555Rgb>
{
	static constexpr fixed_string class_name = "sun/awt/image/PixelConverter$Ushort555Rgb";
	using base_classes = std::tuple<scapix::java_api::sun::awt::image::PixelConverter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_PIXELCONVERTER_USHORT555RGB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_PIXELCONVERTER_USHORT555RGB)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_PIXELCONVERTER_USHORT555RGB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ColorModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::PixelConverter_Ushort555Rgb : public jni::object_base<"sun/awt/image/PixelConverter$Ushort555Rgb",
	sun::awt::image::PixelConverter>
{
public:

	static jni::ref<sun::awt::image::PixelConverter> instance() { return get_static_field<"instance", jni::ref<sun::awt::image::PixelConverter>>(); }

	jint rgbToPixel(jint p1, jni::ref<java::awt::image::ColorModel> p2) { return call_method<"rgbToPixel", jint>(p1, p2); }
	jint pixelToRgb(jint p1, jni::ref<java::awt::image::ColorModel> p2) { return call_method<"pixelToRgb", jint>(p1, p2); }

protected:

	PixelConverter_Ushort555Rgb(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_PIXELCONVERTER_USHORT555RGB
