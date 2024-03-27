// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGETYPESPECIFIER_INDEXED_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGETYPESPECIFIER_INDEXED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio { class ImageTypeSpecifier_Indexed; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::ImageTypeSpecifier_Indexed>
{
	static constexpr fixed_string class_name = "javax/imageio/ImageTypeSpecifier$Indexed";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::ImageTypeSpecifier>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGETYPESPECIFIER_INDEXED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGETYPESPECIFIER_INDEXED)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGETYPESPECIFIER_INDEXED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::imageio::ImageTypeSpecifier_Indexed : public jni::object_base<"javax/imageio/ImageTypeSpecifier$Indexed",
	javax::imageio::ImageTypeSpecifier>
{
public:

	static jni::ref<javax::imageio::ImageTypeSpecifier_Indexed> new_object(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }

protected:

	ImageTypeSpecifier_Indexed(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGETYPESPECIFIER_INDEXED
