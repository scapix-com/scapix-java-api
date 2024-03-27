// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_EmptyNode.h>
#include <scapix/java_api/java/util/stream/Node_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_OFINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_OFINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_EmptyNode_OfInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_EmptyNode_OfInt>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$EmptyNode$OfInt";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_EmptyNode, scapix::java_api::java::util::stream::Node_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_OFINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_OFINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_OFINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator_OfInt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_EmptyNode_OfInt : public jni::object_base<"java/util/stream/Nodes$EmptyNode$OfInt",
	java::util::stream::Nodes_EmptyNode,
	java::util::stream::Node_OfInt>
{
public:

	jni::ref<java::util::Spliterator_OfInt> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfInt>>(); }
	jni::ref<jni::array<jint>> asPrimitiveArray() { return call_method<"asPrimitiveArray", jni::ref<jni::array<jint>>>(); }

protected:

	Nodes_EmptyNode_OfInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_OFINT