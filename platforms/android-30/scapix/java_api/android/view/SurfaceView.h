// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/View.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SurfaceView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SurfaceView>
{
	static constexpr fixed_string class_name = "android/view/SurfaceView";
	using base_classes = std::tuple<scapix::java_api::android::view::View>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEVIEW)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/graphics/Region.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/SurfaceControl.h>
#include <scapix/java_api/android/view/SurfaceControlViewHost_SurfacePackage.h>
#include <scapix/java_api/android/view/SurfaceHolder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SurfaceView : public jni::object_base<"android/view/SurfaceView",
	android::view::View>
{
public:

	static jni::ref<android::view::SurfaceView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::view::SurfaceView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::view::SurfaceView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::view::SurfaceView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jni::ref<android::view::SurfaceHolder> getHolder() { return call_method<"getHolder", jni::ref<android::view::SurfaceHolder>>(); }
	void setVisibility(jint visibility) { return call_method<"setVisibility", void>(visibility); }
	void setAlpha(jfloat alpha) { return call_method<"setAlpha", void>(alpha); }
	jboolean gatherTransparentRegion(jni::ref<android::graphics::Region> region) { return call_method<"gatherTransparentRegion", jboolean>(region); }
	void draw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"draw", void>(canvas); }
	void setClipBounds(jni::ref<android::graphics::Rect> clipBounds) { return call_method<"setClipBounds", void>(clipBounds); }
	void setZOrderMediaOverlay(jboolean isMediaOverlay) { return call_method<"setZOrderMediaOverlay", void>(isMediaOverlay); }
	void setZOrderOnTop(jboolean onTop) { return call_method<"setZOrderOnTop", void>(onTop); }
	void setSecure(jboolean isSecure) { return call_method<"setSecure", void>(isSecure); }
	jni::ref<android::view::SurfaceControl> getSurfaceControl() { return call_method<"getSurfaceControl", jni::ref<android::view::SurfaceControl>>(); }
	jni::ref<android::os::IBinder> getHostToken() { return call_method<"getHostToken", jni::ref<android::os::IBinder>>(); }
	void setChildSurfacePackage(jni::ref<android::view::SurfaceControlViewHost_SurfacePackage> p) { return call_method<"setChildSurfacePackage", void>(p); }
	jint getImportantForAccessibility() { return call_method<"getImportantForAccessibility", jint>(); }

protected:

	SurfaceView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEVIEW
