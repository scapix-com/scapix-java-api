// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_NODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_NODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::concurrent { class ConcurrentLinkedDeque_Node; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::concurrent::ConcurrentLinkedDeque_Node>
{
	static constexpr fixed_string class_name = "java/util/concurrent/ConcurrentLinkedDeque$Node";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_NODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_NODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_NODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::concurrent::ConcurrentLinkedDeque_Node : public jni::object_base<"java/util/concurrent/ConcurrentLinkedDeque$Node",
	java::lang::Object>
{
public:


protected:

	ConcurrentLinkedDeque_Node(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_CONCURRENT_CONCURRENTLINKEDDEQUE_NODE
