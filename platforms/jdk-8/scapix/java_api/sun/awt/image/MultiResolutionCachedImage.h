// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/image/AbstractMultiResolutionImage.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_MULTIRESOLUTIONCACHEDIMAGE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_MULTIRESOLUTIONCACHEDIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class MultiResolutionCachedImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::MultiResolutionCachedImage>
{
	static constexpr fixed_string class_name = "sun/awt/image/MultiResolutionCachedImage";
	using base_classes = std::tuple<scapix::java_api::sun::awt::image::AbstractMultiResolutionImage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_MULTIRESOLUTIONCACHEDIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_MULTIRESOLUTIONCACHEDIMAGE)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_MULTIRESOLUTIONCACHEDIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/geom/Dimension2D.h>
#include <scapix/java_api/java/awt/image/ImageObserver.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::MultiResolutionCachedImage : public jni::object_base<"sun/awt/image/MultiResolutionCachedImage",
	sun::awt::image::AbstractMultiResolutionImage>
{
public:

	static jni::ref<sun::awt::image::MultiResolutionCachedImage> new_object(jint p1, jint p2, jni::ref<java::util::function::BiFunction> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<sun::awt::image::MultiResolutionCachedImage> new_object(jint p1, jint p2, jni::ref<jni::array<java::awt::geom::Dimension2D>> p3, jni::ref<java::util::function::BiFunction> p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::awt::Image> getResolutionVariant(jint p1, jint p2) { return call_method<"getResolutionVariant", jni::ref<java::awt::Image>>(p1, p2); }
	jni::ref<java::util::List> getResolutionVariants() { return call_method<"getResolutionVariants", jni::ref<java::util::List>>(); }
	jni::ref<sun::awt::image::MultiResolutionCachedImage> map(jni::ref<java::util::function::Function> p1) { return call_method<"map", jni::ref<sun::awt::image::MultiResolutionCachedImage>>(p1); }
	jint getWidth(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"getWidth", jint>(p1); }
	jint getHeight(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"getHeight", jint>(p1); }
	jni::ref<java::lang::Object> getProperty(jni::ref<java::lang::String> p1, jni::ref<java::awt::image::ImageObserver> p2) { return call_method<"getProperty", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	MultiResolutionCachedImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_MULTIRESOLUTIONCACHEDIMAGE
