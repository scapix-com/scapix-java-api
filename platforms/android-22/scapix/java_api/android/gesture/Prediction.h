// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GESTURE_PREDICTION_FWD
#define SCAPIX_JAVA_API_ANDROID_GESTURE_PREDICTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::gesture { class Prediction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::gesture::Prediction>
{
	static constexpr fixed_string class_name = "android/gesture/Prediction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GESTURE_PREDICTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GESTURE_PREDICTION)
#define SCAPIX_JAVA_API_ANDROID_GESTURE_PREDICTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::gesture::Prediction : public jni::object_base<"android/gesture/Prediction",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> name() { return get_field<"name", jni::ref<java::lang::String>>(); }
	jdouble score() { return get_field<"score", jdouble>(); }
	void score(jdouble v) { set_field<"score", jdouble>(v); }

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Prediction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GESTURE_PREDICTION
