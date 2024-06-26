// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/ref/SoftReference.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGECACHE_IMAGESOFTREFERENCE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGECACHE_IMAGESOFTREFERENCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class ImageCache_ImageSoftReference; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::ImageCache_ImageSoftReference>
{
	static constexpr fixed_string class_name = "sun/awt/image/ImageCache$ImageSoftReference";
	using base_classes = std::tuple<scapix::java_api::java::lang::ref::SoftReference>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGECACHE_IMAGESOFTREFERENCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGECACHE_IMAGESOFTREFERENCE)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGECACHE_IMAGESOFTREFERENCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::image::ImageCache_ImageSoftReference : public jni::object_base<"sun/awt/image/ImageCache$ImageSoftReference",
	java::lang::ref::SoftReference>
{
public:


protected:

	ImageCache_ImageSoftReference(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGECACHE_IMAGESOFTREFERENCE
