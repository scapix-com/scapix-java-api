// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class GestureDescription_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::GestureDescription_Builder>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/GestureDescription$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accessibilityservice/GestureDescription.h>
#include <scapix/java_api/android/accessibilityservice/GestureDescription_StrokeDescription.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::GestureDescription_Builder : public jni::object_base<"android/accessibilityservice/GestureDescription$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::accessibilityservice::GestureDescription_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::accessibilityservice::GestureDescription_Builder> addStroke(jni::ref<android::accessibilityservice::GestureDescription_StrokeDescription> strokeDescription) { return call_method<"addStroke", jni::ref<android::accessibilityservice::GestureDescription_Builder>>(strokeDescription); }
	jni::ref<android::accessibilityservice::GestureDescription> build() { return call_method<"build", jni::ref<android::accessibilityservice::GestureDescription>>(); }

protected:

	GestureDescription_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_GESTUREDESCRIPTION_BUILDER
