// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_EmptyNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_EmptyNode>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$EmptyNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/IntFunction.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_EmptyNode : public jni::object_base<"java/util/stream/Nodes$EmptyNode",
	java::lang::Object,
	java::util::stream::Node>
{
public:

	jni::ref<jni::array<java::lang::Object>> asArray(jni::ref<java::util::function::IntFunction> generator) { return call_method<"asArray", jni::ref<jni::array<java::lang::Object>>>(generator); }
	void copyInto(jni::ref<java::lang::Object> array, jint offset) { return call_method<"copyInto", void>(array, offset); }
	jlong count() { return call_method<"count", jlong>(); }
	void forEach(jni::ref<java::lang::Object> consumer) { return call_method<"forEach", void>(consumer); }

protected:

	Nodes_EmptyNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_EMPTYNODE
