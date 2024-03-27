// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/image/InputStreamImageSource.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_BYTEARRAYIMAGESOURCE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_BYTEARRAYIMAGESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class ByteArrayImageSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::ByteArrayImageSource>
{
	static constexpr fixed_string class_name = "sun/awt/image/ByteArrayImageSource";
	using base_classes = std::tuple<scapix::java_api::sun::awt::image::InputStreamImageSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_BYTEARRAYIMAGESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_BYTEARRAYIMAGESOURCE)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_BYTEARRAYIMAGESOURCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::ByteArrayImageSource : public jni::object_base<"sun/awt/image/ByteArrayImageSource",
	sun::awt::image::InputStreamImageSource>
{
public:

	static jni::ref<sun::awt::image::ByteArrayImageSource> new_object(jni::ref<jni::array<jbyte>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::awt::image::ByteArrayImageSource> new_object(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }

protected:

	ByteArrayImageSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_BYTEARRAYIMAGESOURCE