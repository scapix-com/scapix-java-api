// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/locks/AbstractQueuedLongSynchronizer_Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_EXCLUSIVENODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_EXCLUSIVENODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent::locks { class AbstractQueuedLongSynchronizer_ExclusiveNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ExclusiveNode>
{
	static constexpr fixed_string class_name = "java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ExclusiveNode";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::locks::AbstractQueuedLongSynchronizer_Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_EXCLUSIVENODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_EXCLUSIVENODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_EXCLUSIVENODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::locks::AbstractQueuedLongSynchronizer_ExclusiveNode : public jni::object_base<"java/util/concurrent/locks/AbstractQueuedLongSynchronizer$ExclusiveNode",
	java::util::concurrent::locks::AbstractQueuedLongSynchronizer_Node>
{
public:


protected:

	AbstractQueuedLongSynchronizer_ExclusiveNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LOCKS_ABSTRACTQUEUEDLONGSYNCHRONIZER_EXCLUSIVENODE
