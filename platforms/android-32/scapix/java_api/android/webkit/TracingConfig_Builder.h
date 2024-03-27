// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONFIG_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONFIG_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::webkit { class TracingConfig_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::webkit::TracingConfig_Builder>
{
	static constexpr fixed_string class_name = "android/webkit/TracingConfig$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONFIG_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONFIG_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONFIG_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/webkit/TracingConfig.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::webkit::TracingConfig_Builder : public jni::object_base<"android/webkit/TracingConfig$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::webkit::TracingConfig_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::webkit::TracingConfig> build() { return call_method<"build", jni::ref<android::webkit::TracingConfig>>(); }
	jni::ref<android::webkit::TracingConfig_Builder> addCategories(jni::ref<jni::array<jint>> predefinedCategories) { return call_method<"addCategories", jni::ref<android::webkit::TracingConfig_Builder>>(predefinedCategories); }
	jni::ref<android::webkit::TracingConfig_Builder> addCategories(jni::ref<jni::array<java::lang::String>> categories) { return call_method<"addCategories", jni::ref<android::webkit::TracingConfig_Builder>>(categories); }
	jni::ref<android::webkit::TracingConfig_Builder> addCategories(jni::ref<java::util::Collection> categories) { return call_method<"addCategories", jni::ref<android::webkit::TracingConfig_Builder>>(categories); }
	jni::ref<android::webkit::TracingConfig_Builder> setTracingMode(jint tracingMode) { return call_method<"setTracingMode", jni::ref<android::webkit::TracingConfig_Builder>>(tracingMode); }

protected:

	TracingConfig_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WEBKIT_TRACINGCONFIG_BUILDER
