// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class SearchResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::SearchResult>
{
	static constexpr fixed_string class_name = "android/app/appsearch/SearchResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULT)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/appsearch/GenericDocument.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/app/appsearch/SearchResult_MatchRange.h>
#include <scapix/java_api/android/app/appsearch/SearchResult_MatchInfo.h>
#include <scapix/java_api/android/app/appsearch/SearchResult_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::SearchResult : public jni::object_base<"android/app/appsearch/SearchResult",
	java::lang::Object>
{
public:

	using MatchRange = SearchResult_MatchRange;
	using MatchInfo = SearchResult_MatchInfo;
	using Builder = SearchResult_Builder;

	jni::ref<android::app::appsearch::GenericDocument> getGenericDocument() { return call_method<"getGenericDocument", jni::ref<android::app::appsearch::GenericDocument>>(); }
	jni::ref<java::util::List> getMatchInfos() { return call_method<"getMatchInfos", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDatabaseName() { return call_method<"getDatabaseName", jni::ref<java::lang::String>>(); }
	jdouble getRankingSignal() { return call_method<"getRankingSignal", jdouble>(); }
	jni::ref<java::util::List> getJoinedResults() { return call_method<"getJoinedResults", jni::ref<java::util::List>>(); }

protected:

	SearchResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULT
