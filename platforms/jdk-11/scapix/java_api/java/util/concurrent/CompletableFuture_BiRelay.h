// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CompletableFuture_BiCompletion.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_BIRELAY_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_BIRELAY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CompletableFuture_BiRelay; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CompletableFuture_BiRelay>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CompletableFuture$BiRelay";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CompletableFuture_BiCompletion>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_BIRELAY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_BIRELAY)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_BIRELAY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CompletableFuture_BiRelay : public jni::object_base<"java/util/concurrent/CompletableFuture$BiRelay",
	java::util::concurrent::CompletableFuture_BiCompletion>
{
public:


protected:

	CompletableFuture_BiRelay(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COMPLETABLEFUTURE_BIRELAY
