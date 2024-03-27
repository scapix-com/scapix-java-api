// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_ArrayNode.h>
#include <scapix/java_api/java/util/stream/Node_Builder.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_FIXEDNODEBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_FIXEDNODEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_FixedNodeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_FixedNodeBuilder>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$FixedNodeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_ArrayNode, scapix::java_api::java::util::stream::Node_Builder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_FIXEDNODEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_FIXEDNODEBUILDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_FIXEDNODEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_FixedNodeBuilder : public jni::object_base<"java/util/stream/Nodes$FixedNodeBuilder",
	java::util::stream::Nodes_ArrayNode,
	java::util::stream::Node_Builder>
{
public:

	jni::ref<java::util::stream::Node> build() { return call_method<"build", jni::ref<java::util::stream::Node>>(); }
	void begin(jlong size) { return call_method<"begin", void>(size); }
	void accept(jni::ref<java::lang::Object> t) { return call_method<"accept", void>(t); }
	void end() { return call_method<"end", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Nodes_FixedNodeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_FIXEDNODEBUILDER
