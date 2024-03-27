// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/SynchronousQueue_WaitQueue.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_FIFOWAITQUEUE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_FIFOWAITQUEUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class SynchronousQueue_FifoWaitQueue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::SynchronousQueue_FifoWaitQueue>
{
	static constexpr fixed_string class_name = "java/util/concurrent/SynchronousQueue$FifoWaitQueue";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::SynchronousQueue_WaitQueue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_FIFOWAITQUEUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_FIFOWAITQUEUE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_FIFOWAITQUEUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::SynchronousQueue_FifoWaitQueue : public jni::object_base<"java/util/concurrent/SynchronousQueue$FifoWaitQueue",
	java::util::concurrent::SynchronousQueue_WaitQueue>
{
public:


protected:

	SynchronousQueue_FifoWaitQueue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_SYNCHRONOUSQUEUE_FIFOWAITQUEUE