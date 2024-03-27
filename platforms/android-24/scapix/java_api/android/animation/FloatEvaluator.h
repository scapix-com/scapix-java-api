// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/animation/TypeEvaluator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_FLOATEVALUATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_FLOATEVALUATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class FloatEvaluator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::FloatEvaluator>
{
	static constexpr fixed_string class_name = "android/animation/FloatEvaluator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::animation::TypeEvaluator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_FLOATEVALUATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_FLOATEVALUATOR)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_FLOATEVALUATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Float.h>
#include <scapix/java_api/java/lang/Number.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::FloatEvaluator : public jni::object_base<"android/animation/FloatEvaluator",
	java::lang::Object,
	android::animation::TypeEvaluator>
{
public:

	static jni::ref<android::animation::FloatEvaluator> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Float> evaluate(jfloat fraction, jni::ref<java::lang::Number> startValue, jni::ref<java::lang::Number> endValue) { return call_method<"evaluate", jni::ref<java::lang::Float>>(fraction, startValue, endValue); }

protected:

	FloatEvaluator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_FLOATEVALUATOR
