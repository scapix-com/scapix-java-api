// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/ForkJoinPool_ManagedBlocker.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_NODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_NODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class LinkedTransferQueue_Node; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::LinkedTransferQueue_Node>
{
	static constexpr fixed_string class_name = "java/util/concurrent/LinkedTransferQueue$Node";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::ForkJoinPool_ManagedBlocker>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_NODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_NODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_NODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::LinkedTransferQueue_Node : public jni::object_base<"java/util/concurrent/LinkedTransferQueue$Node",
	java::lang::Object,
	java::util::concurrent::ForkJoinPool_ManagedBlocker>
{
public:

	jboolean isReleasable() { return call_method<"isReleasable", jboolean>(); }
	jboolean block() { return call_method<"block", jboolean>(); }

protected:

	LinkedTransferQueue_Node(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_LINKEDTRANSFERQUEUE_NODE
