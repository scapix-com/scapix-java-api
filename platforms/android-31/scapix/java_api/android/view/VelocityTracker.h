// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_VELOCITYTRACKER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_VELOCITYTRACKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class VelocityTracker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::VelocityTracker>
{
	static constexpr fixed_string class_name = "android/view/VelocityTracker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VELOCITYTRACKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_VELOCITYTRACKER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_VELOCITYTRACKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/view/MotionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::VelocityTracker : public jni::object_base<"android/view/VelocityTracker",
	java::lang::Object>
{
public:

	static jni::ref<android::view::VelocityTracker> obtain() { return call_static_method<"obtain", jni::ref<android::view::VelocityTracker>>(); }
	void recycle() { return call_method<"recycle", void>(); }
	void clear() { return call_method<"clear", void>(); }
	void addMovement(jni::ref<android::view::MotionEvent> event) { return call_method<"addMovement", void>(event); }
	void computeCurrentVelocity(jint units) { return call_method<"computeCurrentVelocity", void>(units); }
	void computeCurrentVelocity(jint units, jfloat maxVelocity) { return call_method<"computeCurrentVelocity", void>(units, maxVelocity); }
	jfloat getXVelocity() { return call_method<"getXVelocity", jfloat>(); }
	jfloat getYVelocity() { return call_method<"getYVelocity", jfloat>(); }
	jfloat getXVelocity(jint id) { return call_method<"getXVelocity", jfloat>(id); }
	jfloat getYVelocity(jint id) { return call_method<"getYVelocity", jfloat>(id); }

protected:

	VelocityTracker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_VELOCITYTRACKER
