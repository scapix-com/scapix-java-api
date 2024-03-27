// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_INLINE_INLINECONTENTVIEW_SURFACECONTROLCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_INLINE_INLINECONTENTVIEW_SURFACECONTROLCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget::inline_ { class InlineContentView_SurfaceControlCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::inline_::InlineContentView_SurfaceControlCallback>
{
	static constexpr fixed_string class_name = "android/widget/inline/InlineContentView$SurfaceControlCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_INLINE_INLINECONTENTVIEW_SURFACECONTROLCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_INLINE_INLINECONTENTVIEW_SURFACECONTROLCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_INLINE_INLINECONTENTVIEW_SURFACECONTROLCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/SurfaceControl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::inline_::InlineContentView_SurfaceControlCallback : public jni::object_base<"android/widget/inline/InlineContentView$SurfaceControlCallback",
	java::lang::Object>
{
public:

	void onCreated(jni::ref<android::view::SurfaceControl> p1) { return call_method<"onCreated", void>(p1); }
	void onDestroyed(jni::ref<android::view::SurfaceControl> p1) { return call_method<"onDestroyed", void>(p1); }

protected:

	InlineContentView_SurfaceControlCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_INLINE_INLINECONTENTVIEW_SURFACECONTROLCALLBACK
