// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class GestureDescription; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::GestureDescription>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/GestureDescription";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accessibilityservice/GestureDescription_StrokeDescription.h>
#include <scapix/java_api/android/accessibilityservice/GestureDescription_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::GestureDescription : public jni::object_base<"android/accessibilityservice/GestureDescription",
	java::lang::Object>
{
public:

	using StrokeDescription = GestureDescription_StrokeDescription;
	using Builder = GestureDescription_Builder;

	static jint getMaxStrokeCount() { return call_static_method<"getMaxStrokeCount", jint>(); }
	static jlong getMaxGestureDuration() { return call_static_method<"getMaxGestureDuration", jlong>(); }
	jint getStrokeCount() { return call_method<"getStrokeCount", jint>(); }
	jni::ref<android::accessibilityservice::GestureDescription_StrokeDescription> getStroke(jint index) { return call_method<"getStroke", jni::ref<android::accessibilityservice::GestureDescription_StrokeDescription>>(index); }

protected:

	GestureDescription(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION
