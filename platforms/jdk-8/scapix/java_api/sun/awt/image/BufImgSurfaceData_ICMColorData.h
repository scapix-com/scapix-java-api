// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEDATA_ICMCOLORDATA_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEDATA_ICMCOLORDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class BufImgSurfaceData_ICMColorData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::BufImgSurfaceData_ICMColorData>
{
	static constexpr fixed_string class_name = "sun/awt/image/BufImgSurfaceData$ICMColorData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEDATA_ICMCOLORDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEDATA_ICMCOLORDATA)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEDATA_ICMCOLORDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::BufImgSurfaceData_ICMColorData : public jni::object_base<"sun/awt/image/BufImgSurfaceData$ICMColorData",
	java::lang::Object>
{
public:


protected:

	BufImgSurfaceData_ICMColorData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEDATA_ICMCOLORDATA