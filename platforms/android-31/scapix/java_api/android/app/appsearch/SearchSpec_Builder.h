// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSPEC_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSPEC_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class SearchSpec_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::SearchSpec_Builder>
{
	static constexpr fixed_string class_name = "android/app/appsearch/SearchSpec$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSPEC_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSPEC_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSPEC_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/appsearch/SearchSpec.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::SearchSpec_Builder : public jni::object_base<"android/app/appsearch/SearchSpec$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::appsearch::SearchSpec_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setTermMatch(jint termMatchType) { return call_method<"setTermMatch", jni::ref<android::app::appsearch::SearchSpec_Builder>>(termMatchType); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addFilterSchemas(jni::ref<jni::array<java::lang::String>> schemas) { return call_method<"addFilterSchemas", jni::ref<android::app::appsearch::SearchSpec_Builder>>(schemas); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addFilterSchemas(jni::ref<java::util::Collection> schemas) { return call_method<"addFilterSchemas", jni::ref<android::app::appsearch::SearchSpec_Builder>>(schemas); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addFilterNamespaces(jni::ref<jni::array<java::lang::String>> namespaces) { return call_method<"addFilterNamespaces", jni::ref<android::app::appsearch::SearchSpec_Builder>>(namespaces); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addFilterNamespaces(jni::ref<java::util::Collection> namespaces) { return call_method<"addFilterNamespaces", jni::ref<android::app::appsearch::SearchSpec_Builder>>(namespaces); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addFilterPackageNames(jni::ref<jni::array<java::lang::String>> packageNames) { return call_method<"addFilterPackageNames", jni::ref<android::app::appsearch::SearchSpec_Builder>>(packageNames); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addFilterPackageNames(jni::ref<java::util::Collection> packageNames) { return call_method<"addFilterPackageNames", jni::ref<android::app::appsearch::SearchSpec_Builder>>(packageNames); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setResultCountPerPage(jint resultCountPerPage) { return call_method<"setResultCountPerPage", jni::ref<android::app::appsearch::SearchSpec_Builder>>(resultCountPerPage); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setRankingStrategy(jint rankingStrategy) { return call_method<"setRankingStrategy", jni::ref<android::app::appsearch::SearchSpec_Builder>>(rankingStrategy); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setOrder(jint order) { return call_method<"setOrder", jni::ref<android::app::appsearch::SearchSpec_Builder>>(order); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setSnippetCount(jint snippetCount) { return call_method<"setSnippetCount", jni::ref<android::app::appsearch::SearchSpec_Builder>>(snippetCount); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setSnippetCountPerProperty(jint snippetCountPerProperty) { return call_method<"setSnippetCountPerProperty", jni::ref<android::app::appsearch::SearchSpec_Builder>>(snippetCountPerProperty); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setMaxSnippetSize(jint maxSnippetSize) { return call_method<"setMaxSnippetSize", jni::ref<android::app::appsearch::SearchSpec_Builder>>(maxSnippetSize); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> addProjection(jni::ref<java::lang::String> schema, jni::ref<java::util::Collection> propertyPaths) { return call_method<"addProjection", jni::ref<android::app::appsearch::SearchSpec_Builder>>(schema, propertyPaths); }
	jni::ref<android::app::appsearch::SearchSpec_Builder> setResultGrouping(jint groupingTypeFlags, jint limit) { return call_method<"setResultGrouping", jni::ref<android::app::appsearch::SearchSpec_Builder>>(groupingTypeFlags, limit); }
	jni::ref<android::app::appsearch::SearchSpec> build() { return call_method<"build", jni::ref<android::app::appsearch::SearchSpec>>(); }

protected:

	SearchSpec_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSPEC_BUILDER
