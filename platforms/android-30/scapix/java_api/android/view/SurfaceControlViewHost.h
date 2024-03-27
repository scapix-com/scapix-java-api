// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SurfaceControlViewHost; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SurfaceControlViewHost>
{
	static constexpr fixed_string class_name = "android/view/SurfaceControlViewHost";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/view/Display.h>
#include <scapix/java_api/android/view/SurfaceControlViewHost_SurfacePackage.h>
#include <scapix/java_api/android/view/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SurfaceControlViewHost : public jni::object_base<"android/view/SurfaceControlViewHost",
	java::lang::Object>
{
public:

	using SurfacePackage = SurfaceControlViewHost_SurfacePackage;

	static jni::ref<android::view::SurfaceControlViewHost> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::Display> display, jni::ref<android::os::IBinder> hostToken) { return base_::new_object(context, display, hostToken); }
	jni::ref<android::view::SurfaceControlViewHost_SurfacePackage> getSurfacePackage() { return call_method<"getSurfacePackage", jni::ref<android::view::SurfaceControlViewHost_SurfacePackage>>(); }
	void setView(jni::ref<android::view::View> view, jint width, jint height) { return call_method<"setView", void>(view, width, height); }
	jni::ref<android::view::View> getView() { return call_method<"getView", jni::ref<android::view::View>>(); }
	void relayout(jint width, jint height) { return call_method<"relayout", void>(width, height); }
	void release() { return call_method<"release", void>(); }

protected:

	SurfaceControlViewHost(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACECONTROLVIEWHOST
