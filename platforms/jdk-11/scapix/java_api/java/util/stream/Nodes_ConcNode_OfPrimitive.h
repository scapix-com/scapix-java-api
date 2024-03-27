// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_AbstractConcNode.h>
#include <scapix/java_api/java/util/stream/Node_OfPrimitive.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_CONCNODE_OFPRIMITIVE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_CONCNODE_OFPRIMITIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_ConcNode_OfPrimitive; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_ConcNode_OfPrimitive>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$ConcNode$OfPrimitive";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_AbstractConcNode, scapix::java_api::java::util::stream::Node_OfPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_CONCNODE_OFPRIMITIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_CONCNODE_OFPRIMITIVE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_CONCNODE_OFPRIMITIVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_ConcNode_OfPrimitive : public jni::object_base<"java/util/stream/Nodes$ConcNode$OfPrimitive",
	java::util::stream::Nodes_AbstractConcNode,
	java::util::stream::Node_OfPrimitive>
{
public:

	void forEach(jni::ref<java::lang::Object> consumer) { return call_method<"forEach", void>(consumer); }
	void copyInto(jni::ref<java::lang::Object> array, jint offset) { return call_method<"copyInto", void>(array, offset); }
	jni::ref<java::lang::Object> asPrimitiveArray() { return call_method<"asPrimitiveArray", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Nodes_ConcNode_OfPrimitive(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_CONCNODE_OFPRIMITIVE
