// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GETSCHEMARESPONSE_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GETSCHEMARESPONSE_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class GetSchemaResponse_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::GetSchemaResponse_Builder>
{
	static constexpr fixed_string class_name = "android/app/appsearch/GetSchemaResponse$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GETSCHEMARESPONSE_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GETSCHEMARESPONSE_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GETSCHEMARESPONSE_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/appsearch/AppSearchSchema.h>
#include <scapix/java_api/android/app/appsearch/GetSchemaResponse.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::GetSchemaResponse_Builder : public jni::object_base<"android/app/appsearch/GetSchemaResponse$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::appsearch::GetSchemaResponse_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::app::appsearch::GetSchemaResponse_Builder> setVersion(jint version) { return call_method<"setVersion", jni::ref<android::app::appsearch::GetSchemaResponse_Builder>>(version); }
	jni::ref<android::app::appsearch::GetSchemaResponse_Builder> addSchema(jni::ref<android::app::appsearch::AppSearchSchema> schema) { return call_method<"addSchema", jni::ref<android::app::appsearch::GetSchemaResponse_Builder>>(schema); }
	jni::ref<android::app::appsearch::GetSchemaResponse_Builder> addSchemaTypeNotDisplayedBySystem(jni::ref<java::lang::String> schemaType) { return call_method<"addSchemaTypeNotDisplayedBySystem", jni::ref<android::app::appsearch::GetSchemaResponse_Builder>>(schemaType); }
	jni::ref<android::app::appsearch::GetSchemaResponse_Builder> setSchemaTypeVisibleToPackages(jni::ref<java::lang::String> schemaType, jni::ref<java::util::Set> packageIdentifiers) { return call_method<"setSchemaTypeVisibleToPackages", jni::ref<android::app::appsearch::GetSchemaResponse_Builder>>(schemaType, packageIdentifiers); }
	jni::ref<android::app::appsearch::GetSchemaResponse_Builder> setRequiredPermissionsForSchemaTypeVisibility(jni::ref<java::lang::String> schemaType, jni::ref<java::util::Set> visibleToPermissions) { return call_method<"setRequiredPermissionsForSchemaTypeVisibility", jni::ref<android::app::appsearch::GetSchemaResponse_Builder>>(schemaType, visibleToPermissions); }
	jni::ref<android::app::appsearch::GetSchemaResponse> build() { return call_method<"build", jni::ref<android::app::appsearch::GetSchemaResponse>>(); }

protected:

	GetSchemaResponse_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_GETSCHEMARESPONSE_BUILDER
