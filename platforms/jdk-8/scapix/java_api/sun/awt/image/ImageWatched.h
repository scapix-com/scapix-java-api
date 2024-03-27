// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEWATCHED_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEWATCHED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class ImageWatched; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::ImageWatched>
{
	static constexpr fixed_string class_name = "sun/awt/image/ImageWatched";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEWATCHED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEWATCHED)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEWATCHED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/image/ImageObserver.h>
#include <scapix/java_api/sun/awt/image/ImageWatched_Link.h>
#include <scapix/java_api/sun/awt/image/ImageWatched_WeakLink.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::ImageWatched : public jni::object_base<"sun/awt/image/ImageWatched",
	java::lang::Object>
{
public:

	using Link = ImageWatched_Link;
	using WeakLink = ImageWatched_WeakLink;

	static jni::ref<sun::awt::image::ImageWatched_Link> endlink() { return get_static_field<"endlink", jni::ref<sun::awt::image::ImageWatched_Link>>(); }
	static void endlink(jni::ref<sun::awt::image::ImageWatched_Link> v) { set_static_field<"endlink", jni::ref<sun::awt::image::ImageWatched_Link>>(v); }
	jni::ref<sun::awt::image::ImageWatched_Link> watcherList() { return get_field<"watcherList", jni::ref<sun::awt::image::ImageWatched_Link>>(); }
	void watcherList(jni::ref<sun::awt::image::ImageWatched_Link> v) { set_field<"watcherList", jni::ref<sun::awt::image::ImageWatched_Link>>(v); }

	static jni::ref<sun::awt::image::ImageWatched> new_object() { return base_::new_object(); }
	void addWatcher(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"addWatcher", void>(p1); }
	jboolean isWatcher(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"isWatcher", jboolean>(p1); }
	void removeWatcher(jni::ref<java::awt::image::ImageObserver> p1) { return call_method<"removeWatcher", void>(p1); }
	jboolean isWatcherListEmpty() { return call_method<"isWatcherListEmpty", jboolean>(); }
	void newInfo(jni::ref<java::awt::Image> p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"newInfo", void>(p1, p2, p3, p4, p5, p6); }

protected:

	ImageWatched(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_IMAGEWATCHED