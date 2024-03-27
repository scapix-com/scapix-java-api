// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/SurfaceHolder_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class SurfaceHolder_Callback2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::SurfaceHolder_Callback2>
{
	static constexpr fixed_string class_name = "android/view/SurfaceHolder$Callback2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::SurfaceHolder_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2)
#define SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/SurfaceHolder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::SurfaceHolder_Callback2 : public jni::object_base<"android/view/SurfaceHolder$Callback2",
	java::lang::Object,
	android::view::SurfaceHolder_Callback>
{
public:

	void surfaceRedrawNeeded(jni::ref<android::view::SurfaceHolder> p1) { return call_method<"surfaceRedrawNeeded", void>(p1); }

protected:

	SurfaceHolder_Callback2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_SURFACEHOLDER_CALLBACK2
