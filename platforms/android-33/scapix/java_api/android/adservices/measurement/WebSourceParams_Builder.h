// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_WEBSOURCEPARAMS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_WEBSOURCEPARAMS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::adservices::measurement { class WebSourceParams_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::adservices::measurement::WebSourceParams_Builder>
{
	static constexpr fixed_string class_name = "android/adservices/measurement/WebSourceParams$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_WEBSOURCEPARAMS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_WEBSOURCEPARAMS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_WEBSOURCEPARAMS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/adservices/measurement/WebSourceParams.h>
#include <scapix/java_api/android/net/Uri.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::adservices::measurement::WebSourceParams_Builder : public jni::object_base<"android/adservices/measurement/WebSourceParams$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::adservices::measurement::WebSourceParams_Builder> new_object(jni::ref<android::net::Uri> registrationUri) { return base_::new_object(registrationUri); }
	jni::ref<android::adservices::measurement::WebSourceParams_Builder> setDebugKeyAllowed(jboolean debugKeyAllowed) { return call_method<"setDebugKeyAllowed", jni::ref<android::adservices::measurement::WebSourceParams_Builder>>(debugKeyAllowed); }
	jni::ref<android::adservices::measurement::WebSourceParams> build() { return call_method<"build", jni::ref<android::adservices::measurement::WebSourceParams>>(); }

protected:

	WebSourceParams_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ADSERVICES_MEASUREMENT_WEBSOURCEPARAMS_BUILDER
