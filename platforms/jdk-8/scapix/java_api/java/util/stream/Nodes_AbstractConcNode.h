// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ABSTRACTCONCNODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ABSTRACTCONCNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_AbstractConcNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_AbstractConcNode>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$AbstractConcNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ABSTRACTCONCNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ABSTRACTCONCNODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ABSTRACTCONCNODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_AbstractConcNode : public jni::object_base<"java/util/stream/Nodes$AbstractConcNode",
	java::lang::Object,
	java::util::stream::Node>
{
public:

	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jni::ref<java::util::stream::Node> getChild(jint p1) { return call_method<"getChild", jni::ref<java::util::stream::Node>>(p1); }
	jlong count() { return call_method<"count", jlong>(); }

protected:

	Nodes_AbstractConcNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ABSTRACTCONCNODE
