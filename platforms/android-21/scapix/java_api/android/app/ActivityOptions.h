// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYOPTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ActivityOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ActivityOptions>
{
	static constexpr fixed_string class_name = "android/app/ActivityOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYOPTIONS)
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/util/Pair.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ActivityOptions : public jni::object_base<"android/app/ActivityOptions",
	java::lang::Object>
{
public:

	static jni::ref<android::app::ActivityOptions> makeCustomAnimation(jni::ref<android::content::Context> context, jint enterResId, jint exitResId) { return call_static_method<"makeCustomAnimation", jni::ref<android::app::ActivityOptions>>(context, enterResId, exitResId); }
	static jni::ref<android::app::ActivityOptions> makeScaleUpAnimation(jni::ref<android::view::View> source, jint startX, jint startY, jint width, jint height) { return call_static_method<"makeScaleUpAnimation", jni::ref<android::app::ActivityOptions>>(source, startX, startY, width, height); }
	static jni::ref<android::app::ActivityOptions> makeThumbnailScaleUpAnimation(jni::ref<android::view::View> source, jni::ref<android::graphics::Bitmap> thumbnail, jint startX, jint startY) { return call_static_method<"makeThumbnailScaleUpAnimation", jni::ref<android::app::ActivityOptions>>(source, thumbnail, startX, startY); }
	static jni::ref<android::app::ActivityOptions> makeSceneTransitionAnimation(jni::ref<android::app::Activity> activity, jni::ref<android::view::View> sharedElement, jni::ref<java::lang::String> sharedElementName) { return call_static_method<"makeSceneTransitionAnimation", jni::ref<android::app::ActivityOptions>>(activity, sharedElement, sharedElementName); }
	static jni::ref<android::app::ActivityOptions> makeSceneTransitionAnimation(jni::ref<android::app::Activity> activity, jni::ref<jni::array<android::util::Pair>> sharedElements) { return call_static_method<"makeSceneTransitionAnimation", jni::ref<android::app::ActivityOptions>>(activity, sharedElements); }
	static jni::ref<android::app::ActivityOptions> makeTaskLaunchBehind() { return call_static_method<"makeTaskLaunchBehind", jni::ref<android::app::ActivityOptions>>(); }
	void update(jni::ref<android::app::ActivityOptions> otherOptions) { return call_method<"update", void>(otherOptions); }
	jni::ref<android::os::Bundle> toBundle() { return call_method<"toBundle", jni::ref<android::os::Bundle>>(); }

protected:

	ActivityOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYOPTIONS