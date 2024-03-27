// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedSynchronizer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_SYNC_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_SYNC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class CountDownLatch_Sync; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::CountDownLatch_Sync>
{
	static constexpr fixed_string class_name = "java/util/concurrent/CountDownLatch$Sync";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::locks::AbstractQueuedSynchronizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_SYNC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_SYNC)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_SYNC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::CountDownLatch_Sync : public jni::object_base<"java/util/concurrent/CountDownLatch$Sync",
	java::util::concurrent::locks::AbstractQueuedSynchronizer>
{
public:


protected:

	CountDownLatch_Sync(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_COUNTDOWNLATCH_SYNC
