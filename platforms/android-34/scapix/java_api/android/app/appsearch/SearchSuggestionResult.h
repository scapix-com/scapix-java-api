// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSUGGESTIONRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSUGGESTIONRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class SearchSuggestionResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::SearchSuggestionResult>
{
	static constexpr fixed_string class_name = "android/app/appsearch/SearchSuggestionResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSUGGESTIONRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSUGGESTIONRESULT)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSUGGESTIONRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/app/appsearch/SearchSuggestionResult_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::SearchSuggestionResult : public jni::object_base<"android/app/appsearch/SearchSuggestionResult",
	java::lang::Object>
{
public:

	using Builder = SearchSuggestionResult_Builder;

	jni::ref<java::lang::String> getSuggestedResult() { return call_method<"getSuggestedResult", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	SearchSuggestionResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHSUGGESTIONRESULT