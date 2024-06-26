// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class GestureDescription_StrokeDescription; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::GestureDescription_StrokeDescription>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/GestureDescription$StrokeDescription";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Path.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::GestureDescription_StrokeDescription : public jni::object_base<"android/accessibilityservice/GestureDescription$StrokeDescription",
	java::lang::Object>
{
public:

	static jni::ref<android::accessibilityservice::GestureDescription_StrokeDescription> new_object(jni::ref<android::graphics::Path> path, jlong startTime, jlong p3) { return base_::new_object(path, startTime, p3); }
	jni::ref<android::graphics::Path> getPath() { return call_method<"getPath", jni::ref<android::graphics::Path>>(); }
	jlong getStartTime() { return call_method<"getStartTime", jlong>(); }
	jlong getDuration() { return call_method<"getDuration", jlong>(); }

protected:

	GestureDescription_StrokeDescription(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_STROKEDESCRIPTION
