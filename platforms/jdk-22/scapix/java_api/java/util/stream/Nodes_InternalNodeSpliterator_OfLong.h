// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_InternalNodeSpliterator_OfPrimitive.h>
#include <scapix/java_api/java/util/Spliterator_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFLONG_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_InternalNodeSpliterator_OfLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_InternalNodeSpliterator_OfLong>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$InternalNodeSpliterator$OfLong";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_InternalNodeSpliterator_OfPrimitive, scapix::java_api::java::util::Spliterator_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFLONG)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFLONG

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_InternalNodeSpliterator_OfLong : public jni::object_base<"java/util/stream/Nodes$InternalNodeSpliterator$OfLong",
	java::util::stream::Nodes_InternalNodeSpliterator_OfPrimitive,
	java::util::Spliterator_OfLong>
{
public:


protected:

	Nodes_InternalNodeSpliterator_OfLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFLONG
