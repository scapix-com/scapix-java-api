// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/jrtfs/SystemImage.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_EXPLODEDIMAGE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_EXPLODEDIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jrtfs { class ExplodedImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jrtfs::ExplodedImage>
{
	static constexpr fixed_string class_name = "jdk/internal/jrtfs/ExplodedImage";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::jrtfs::SystemImage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_EXPLODEDIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_EXPLODEDIMAGE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_EXPLODEDIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/jimage/ImageReader_Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::jrtfs::ExplodedImage : public jni::object_base<"jdk/internal/jrtfs/ExplodedImage",
	jdk::internal::jrtfs::SystemImage>
{
public:

	void close() { return call_method<"close", void>(); }
	jni::ref<jni::array<jbyte>> getResource(jni::ref<jdk::internal::jimage::ImageReader_Node> node) { return call_method<"getResource", jni::ref<jni::array<jbyte>>>(node); }
	jni::ref<jdk::internal::jimage::ImageReader_Node> findNode(jni::ref<java::lang::String> str) { return call_method<"findNode", jni::ref<jdk::internal::jimage::ImageReader_Node>>(str); }

protected:

	ExplodedImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JRTFS_EXPLODEDIMAGE
