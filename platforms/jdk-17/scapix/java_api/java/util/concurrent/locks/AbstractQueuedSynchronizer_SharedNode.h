// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedSynchronizer_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_SHAREDNODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_SHAREDNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class AbstractQueuedSynchronizer_SharedNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::AbstractQueuedSynchronizer_SharedNode>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/AbstractQueuedSynchronizer$SharedNode";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::locks::AbstractQueuedSynchronizer_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_SHAREDNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_SHAREDNODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_SHAREDNODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::locks::AbstractQueuedSynchronizer_SharedNode : public jni::object_base<"java/util/concurrent/locks/AbstractQueuedSynchronizer$SharedNode",
	java::util::concurrent::locks::AbstractQueuedSynchronizer_Node>
{
public:


protected:

	AbstractQueuedSynchronizer_SharedNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDSYNCHRONIZER_SHAREDNODE
