// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ARRAYNODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ARRAYNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_ArrayNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_ArrayNode>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$ArrayNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ARRAYNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ARRAYNODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ARRAYNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Spliterator.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#include <scapix/java_api/java/util/function/IntFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_ArrayNode : public jni::object_base<"java/util/stream/Nodes$ArrayNode",
	java::lang::Object,
	java::util::stream::Node>
{
public:

	jni::ref<java::util::Spliterator> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator>>(); }
	void copyInto(jni::ref<jni::array<java::lang::Object>> p1, jint p2) { return call_method<"copyInto", void>(p1, p2); }
	jni::ref<jni::array<java::lang::Object>> asArray(jni::ref<java::util::function::IntFunction> p1) { return call_method<"asArray", jni::ref<jni::array<java::lang::Object>>>(p1); }
	jlong count() { return call_method<"count", jlong>(); }
	void forEach(jni::ref<java::util::function::Consumer> p1) { return call_method<"forEach", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Nodes_ArrayNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_ARRAYNODE
