// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/MediaEntry.h>
#include <scapix/java_api/java/awt/image/ImageObserver.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGEMEDIAENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGEMEDIAENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class ImageMediaEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::ImageMediaEntry>
{
	static constexpr fixed_string class_name = "java/awt/ImageMediaEntry";
	using base_classes = std::tuple<scapix::java_api::java::awt::MediaEntry, scapix::java_api::java::awt::image::ImageObserver, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGEMEDIAENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGEMEDIAENTRY)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGEMEDIAENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::ImageMediaEntry : public jni::object_base<"java/awt/ImageMediaEntry",
	java::awt::MediaEntry,
	java::awt::image::ImageObserver,
	java::io::Serializable>
{
public:

	jboolean imageUpdate(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"imageUpdate", jboolean>(p1, p2, p3, p4, p5, p6); }

protected:

	ImageMediaEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGEMEDIAENTRY
