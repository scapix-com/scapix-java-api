// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/appsearch/AppSearchSchema_PropertyConfig.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_DOCUMENTPROPERTYCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_DOCUMENTPROPERTYCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class AppSearchSchema_DocumentPropertyConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::AppSearchSchema_DocumentPropertyConfig>
{
	static constexpr fixed_string class_name = "android/app/appsearch/AppSearchSchema$DocumentPropertyConfig";
	using base_classes = std::tuple<scapix::java_api::android::app::appsearch::AppSearchSchema_PropertyConfig>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_DOCUMENTPROPERTYCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_DOCUMENTPROPERTYCONFIG)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_DOCUMENTPROPERTYCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/app/appsearch/AppSearchSchema_DocumentPropertyConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::AppSearchSchema_DocumentPropertyConfig : public jni::object_base<"android/app/appsearch/AppSearchSchema$DocumentPropertyConfig",
	android::app::appsearch::AppSearchSchema_PropertyConfig>
{
public:

	using Builder = AppSearchSchema_DocumentPropertyConfig_Builder;

	jni::ref<java::lang::String> getSchemaType() { return call_method<"getSchemaType", jni::ref<java::lang::String>>(); }
	jboolean shouldIndexNestedProperties() { return call_method<"shouldIndexNestedProperties", jboolean>(); }

protected:

	AppSearchSchema_DocumentPropertyConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHSCHEMA_DOCUMENTPROPERTYCONFIG
