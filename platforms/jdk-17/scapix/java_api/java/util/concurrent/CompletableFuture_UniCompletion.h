// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CompletableFuture_Completion.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNICOMPLETION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNICOMPLETION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletableFuture_UniCompletion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletableFuture_UniCompletion>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletableFuture$UniCompletion";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CompletableFuture_Completion>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNICOMPLETION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNICOMPLETION)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNICOMPLETION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CompletableFuture_UniCompletion : public jni::object_base<"java/util/concurrent/CompletableFuture$UniCompletion",
	java::util::concurrent::CompletableFuture_Completion>
{
public:


protected:

	CompletableFuture_UniCompletion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNICOMPLETION