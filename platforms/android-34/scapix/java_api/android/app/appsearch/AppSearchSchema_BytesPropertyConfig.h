// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/appsearch/AppSearchSchema_PropertyConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_BYTESPROPERTYCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_BYTESPROPERTYCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class AppSearchSchema_BytesPropertyConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::AppSearchSchema_BytesPropertyConfig>
{
	static constexpr fixed_string class_name = "android/app/appsearch/AppSearchSchema$BytesPropertyConfig";
	using base_classes = std::tuple<scapix::java_api::android::app::appsearch::AppSearchSchema_PropertyConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_BYTESPROPERTYCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_BYTESPROPERTYCONFIG)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_BYTESPROPERTYCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/appsearch/AppSearchSchema_BytesPropertyConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::AppSearchSchema_BytesPropertyConfig : public jni::object_base<"android/app/appsearch/AppSearchSchema$BytesPropertyConfig",
	android::app::appsearch::AppSearchSchema_PropertyConfig>
{
public:

	using Builder = AppSearchSchema_BytesPropertyConfig_Builder;


protected:

	AppSearchSchema_BytesPropertyConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_BYTESPROPERTYCONFIG