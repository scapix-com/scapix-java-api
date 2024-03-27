// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SurfaceHolder_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SurfaceHolder_Callback>
{
	static constexpr fixed_string class_name = "android/view/SurfaceHolder$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/SurfaceHolder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SurfaceHolder_Callback : public jni::object_base<"android/view/SurfaceHolder$Callback",
	java::lang::Object>
{
public:

	void surfaceCreated(jni::ref<android::view::SurfaceHolder> p1) { return call_method<"surfaceCreated", void>(p1); }
	void surfaceChanged(jni::ref<android::view::SurfaceHolder> p1, jint p2, jint p3, jint p4) { return call_method<"surfaceChanged", void>(p1, p2, p3, p4); }
	void surfaceDestroyed(jni::ref<android::view::SurfaceHolder> p1) { return call_method<"surfaceDestroyed", void>(p1); }

protected:

	SurfaceHolder_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK