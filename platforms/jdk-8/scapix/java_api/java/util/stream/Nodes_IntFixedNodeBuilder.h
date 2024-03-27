// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_IntArrayNode.h>
#include <scapix/java_api/java/util/stream/Node_Builder_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTFIXEDNODEBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTFIXEDNODEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_IntFixedNodeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_IntFixedNodeBuilder>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$IntFixedNodeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_IntArrayNode, scapix::java_api::java::util::stream::Node_Builder_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTFIXEDNODEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTFIXEDNODEBUILDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTFIXEDNODEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/stream/Node_OfInt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_IntFixedNodeBuilder : public jni::object_base<"java/util/stream/Nodes$IntFixedNodeBuilder",
	java::util::stream::Nodes_IntArrayNode,
	java::util::stream::Node_Builder_OfInt>
{
public:

	jni::ref<java::util::stream::Node_OfInt> build() { return call_method<"build", jni::ref<java::util::stream::Node_OfInt>>(); }
	void begin(jlong p1) { return call_method<"begin", void>(p1); }
	void accept(jint p1) { return call_method<"accept", void>(p1); }
	void end() { return call_method<"end", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Nodes_IntFixedNodeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTFIXEDNODEBUILDER
