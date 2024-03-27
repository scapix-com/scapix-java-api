// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/animation/TypeEvaluator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_POINTFEVALUATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_POINTFEVALUATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class PointFEvaluator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::PointFEvaluator>
{
	static constexpr fixed_string class_name = "android/animation/PointFEvaluator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::animation::TypeEvaluator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_POINTFEVALUATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_POINTFEVALUATOR)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_POINTFEVALUATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/PointF.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::PointFEvaluator : public jni::object_base<"android/animation/PointFEvaluator",
	java::lang::Object,
	android::animation::TypeEvaluator>
{
public:

	static jni::ref<android::animation::PointFEvaluator> new_object() { return base_::new_object(); }
	static jni::ref<android::animation::PointFEvaluator> new_object(jni::ref<android::graphics::PointF> reuse) { return base_::new_object(reuse); }
	jni::ref<android::graphics::PointF> evaluate(jfloat fraction, jni::ref<android::graphics::PointF> startValue, jni::ref<android::graphics::PointF> endValue) { return call_method<"evaluate", jni::ref<android::graphics::PointF>>(fraction, startValue, endValue); }

protected:

	PointFEvaluator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_POINTFEVALUATOR