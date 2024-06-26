// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/view/animation/Interpolator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::animation { class LinearInterpolator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::animation::LinearInterpolator>
{
	static constexpr fixed_string class_name = "android/view/animation/LinearInterpolator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::view::animation::Interpolator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::animation::LinearInterpolator : public jni::object_base<"android/view/animation/LinearInterpolator",
	java::lang::Object,
	android::view::animation::Interpolator>
{
public:

	static jni::ref<android::view::animation::LinearInterpolator> new_object() { return base_::new_object(); }
	static jni::ref<android::view::animation::LinearInterpolator> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	jfloat getInterpolation(jfloat input) { return call_method<"getInterpolation", jfloat>(input); }

protected:

	LinearInterpolator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_LINEARINTERPOLATOR
