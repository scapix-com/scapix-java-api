// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CompletableFuture_UniCompletion.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNIEXCEPTIONALLY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNIEXCEPTIONALLY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletableFuture_UniExceptionally; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletableFuture_UniExceptionally>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletableFuture$UniExceptionally";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CompletableFuture_UniCompletion>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNIEXCEPTIONALLY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNIEXCEPTIONALLY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNIEXCEPTIONALLY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CompletableFuture_UniExceptionally : public jni::object_base<"java/util/concurrent/CompletableFuture$UniExceptionally",
	java::util::concurrent::CompletableFuture_UniCompletion>
{
public:


protected:

	CompletableFuture_UniExceptionally(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_UNIEXCEPTIONALLY