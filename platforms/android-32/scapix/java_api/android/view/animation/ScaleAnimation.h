// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/animation/Animation.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_SCALEANIMATION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_SCALEANIMATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::animation { class ScaleAnimation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::animation::ScaleAnimation>
{
	static constexpr fixed_string class_name = "android/view/animation/ScaleAnimation";
	using base_classes = std::tuple<scapix::java_api::android::view::animation::Animation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_SCALEANIMATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_SCALEANIMATION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_SCALEANIMATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::animation::ScaleAnimation : public jni::object_base<"android/view/animation/ScaleAnimation",
	android::view::animation::Animation>
{
public:

	static jni::ref<android::view::animation::ScaleAnimation> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::view::animation::ScaleAnimation> new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY) { return base_::new_object(fromX, toX, fromY, toY); }
	static jni::ref<android::view::animation::ScaleAnimation> new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jfloat pivotX, jfloat pivotY) { return base_::new_object(fromX, toX, fromY, toY, pivotX, pivotY); }
	static jni::ref<android::view::animation::ScaleAnimation> new_object(jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jint pivotXType, jfloat pivotXValue, jint pivotYType, jfloat pivotYValue) { return base_::new_object(fromX, toX, fromY, toY, pivotXType, pivotXValue, pivotYType, pivotYValue); }
	void initialize(jint width, jint height, jint parentWidth, jint parentHeight) { return call_method<"initialize", void>(width, height, parentWidth, parentHeight); }

protected:

	ScaleAnimation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_SCALEANIMATION
