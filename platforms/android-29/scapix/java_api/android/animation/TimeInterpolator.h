// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ANIMATION_TIMEINTERPOLATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_TIMEINTERPOLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::animation { class TimeInterpolator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::animation::TimeInterpolator>
{
	static constexpr fixed_string class_name = "android/animation/TimeInterpolator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_TIMEINTERPOLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ANIMATION_TIMEINTERPOLATOR)
#define SCAPIX_JAVA_API_ANDROID_ANIMATION_TIMEINTERPOLATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::animation::TimeInterpolator : public jni::object_base<"android/animation/TimeInterpolator",
	java::lang::Object>
{
public:

	jfloat getInterpolation(jfloat p1) { return call_method<"getInterpolation", jfloat>(p1); }

protected:

	TimeInterpolator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ANIMATION_TIMEINTERPOLATOR
