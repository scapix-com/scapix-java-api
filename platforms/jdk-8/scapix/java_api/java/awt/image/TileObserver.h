// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_TILEOBSERVER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_TILEOBSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class TileObserver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::TileObserver>
{
	static constexpr fixed_string class_name = "java/awt/image/TileObserver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_TILEOBSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_TILEOBSERVER)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_TILEOBSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/WritableRenderedImage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::TileObserver : public jni::object_base<"java/awt/image/TileObserver",
	java::lang::Object>
{
public:

	void tileUpdate(jni::ref<java::awt::image::WritableRenderedImage> p1, jint p2, jint p3, jboolean p4) { return call_method<"tileUpdate", void>(p1, p2, p3, p4); }

protected:

	TileObserver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_TILEOBSERVER
