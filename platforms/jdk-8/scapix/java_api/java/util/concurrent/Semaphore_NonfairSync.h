// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/Semaphore_Sync.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SEMAPHORE_NONFAIRSYNC_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SEMAPHORE_NONFAIRSYNC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class Semaphore_NonfairSync; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::Semaphore_NonfairSync>
{
	static constexpr fixed_string class_name = "java/util/concurrent/Semaphore$NonfairSync";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::Semaphore_Sync>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SEMAPHORE_NONFAIRSYNC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SEMAPHORE_NONFAIRSYNC)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SEMAPHORE_NONFAIRSYNC

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::Semaphore_NonfairSync : public jni::object_base<"java/util/concurrent/Semaphore$NonfairSync",
	java::util::concurrent::Semaphore_Sync>
{
public:


protected:

	Semaphore_NonfairSync(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SEMAPHORE_NONFAIRSYNC