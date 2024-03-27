// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_OVERSCROLLER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_OVERSCROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class OverScroller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::OverScroller>
{
	static constexpr fixed_string class_name = "android/widget/OverScroller";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_OVERSCROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_OVERSCROLLER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_OVERSCROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/animation/Interpolator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::OverScroller : public jni::object_base<"android/widget/OverScroller",
	java::lang::Object>
{
public:

	static jni::ref<android::widget::OverScroller> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::OverScroller> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::animation::Interpolator> interpolator) { return base_::new_object(context, interpolator); }
	static jni::ref<android::widget::OverScroller> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::animation::Interpolator> interpolator, jfloat bounceCoefficientX, jfloat bounceCoefficientY) { return base_::new_object(context, interpolator, bounceCoefficientX, bounceCoefficientY); }
	static jni::ref<android::widget::OverScroller> new_object(jni::ref<android::content::Context> context, jni::ref<android::view::animation::Interpolator> interpolator, jfloat bounceCoefficientX, jfloat bounceCoefficientY, jboolean flywheel) { return base_::new_object(context, interpolator, bounceCoefficientX, bounceCoefficientY, flywheel); }
	void setFriction(jfloat friction) { return call_method<"setFriction", void>(friction); }
	jboolean isFinished() { return call_method<"isFinished", jboolean>(); }
	void forceFinished(jboolean finished) { return call_method<"forceFinished", void>(finished); }
	jint getCurrX() { return call_method<"getCurrX", jint>(); }
	jint getCurrY() { return call_method<"getCurrY", jint>(); }
	jfloat getCurrVelocity() { return call_method<"getCurrVelocity", jfloat>(); }
	jint getStartX() { return call_method<"getStartX", jint>(); }
	jint getStartY() { return call_method<"getStartY", jint>(); }
	jint getFinalX() { return call_method<"getFinalX", jint>(); }
	jint getFinalY() { return call_method<"getFinalY", jint>(); }
	jboolean computeScrollOffset() { return call_method<"computeScrollOffset", jboolean>(); }
	void startScroll(jint startX, jint startY, jint dx, jint dy) { return call_method<"startScroll", void>(startX, startY, dx, dy); }
	void startScroll(jint startX, jint startY, jint dx, jint dy, jint duration) { return call_method<"startScroll", void>(startX, startY, dx, dy, duration); }
	jboolean springBack(jint startX, jint startY, jint minX, jint maxX, jint minY, jint maxY) { return call_method<"springBack", jboolean>(startX, startY, minX, maxX, minY, maxY); }
	void fling(jint startX, jint startY, jint velocityX, jint velocityY, jint minX, jint maxX, jint minY, jint maxY) { return call_method<"fling", void>(startX, startY, velocityX, velocityY, minX, maxX, minY, maxY); }
	void fling(jint startX, jint startY, jint velocityX, jint velocityY, jint minX, jint maxX, jint minY, jint maxY, jint overX, jint overY) { return call_method<"fling", void>(startX, startY, velocityX, velocityY, minX, maxX, minY, maxY, overX, overY); }
	void notifyHorizontalEdgeReached(jint startX, jint finalX, jint overX) { return call_method<"notifyHorizontalEdgeReached", void>(startX, finalX, overX); }
	void notifyVerticalEdgeReached(jint startY, jint finalY, jint overY) { return call_method<"notifyVerticalEdgeReached", void>(startY, finalY, overY); }
	jboolean isOverScrolled() { return call_method<"isOverScrolled", jboolean>(); }
	void abortAnimation() { return call_method<"abortAnimation", void>(); }

protected:

	OverScroller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_OVERSCROLLER