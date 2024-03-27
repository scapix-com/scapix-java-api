// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHMANAGER_SEARCHCONTEXT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHMANAGER_SEARCHCONTEXT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class AppSearchManager_SearchContext_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::AppSearchManager_SearchContext_Builder>
{
	static constexpr fixed_string class_name = "android/app/appsearch/AppSearchManager$SearchContext$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHMANAGER_SEARCHCONTEXT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHMANAGER_SEARCHCONTEXT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHMANAGER_SEARCHCONTEXT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/appsearch/AppSearchManager_SearchContext.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::AppSearchManager_SearchContext_Builder : public jni::object_base<"android/app/appsearch/AppSearchManager$SearchContext$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::appsearch::AppSearchManager_SearchContext_Builder> new_object(jni::ref<java::lang::String> databaseName) { return base_::new_object(databaseName); }
	jni::ref<android::app::appsearch::AppSearchManager_SearchContext> build() { return call_method<"build", jni::ref<android::app::appsearch::AppSearchManager_SearchContext>>(); }

protected:

	AppSearchManager_SearchContext_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_APPSEARCHMANAGER_SEARCHCONTEXT_BUILDER
