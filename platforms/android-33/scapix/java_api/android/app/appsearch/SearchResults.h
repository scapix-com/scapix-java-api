// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULTS_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::appsearch { class SearchResults; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::appsearch::SearchResults>
{
	static constexpr fixed_string class_name = "android/app/appsearch/SearchResults";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULTS)
#define SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULTS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::appsearch::SearchResults : public jni::object_base<"android/app/appsearch/SearchResults",
	java::lang::Object,
	java::io::Closeable>
{
public:

	void getNextPage(jni::ref<java::util::concurrent::Executor> executor, jni::ref<java::util::function::Consumer> callback) { return call_method<"getNextPage", void>(executor, callback); }
	void close() { return call_method<"close", void>(); }

protected:

	SearchResults(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPSEARCH_SEARCHRESULTS