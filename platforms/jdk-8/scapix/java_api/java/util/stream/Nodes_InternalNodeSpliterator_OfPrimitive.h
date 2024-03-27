// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_InternalNodeSpliterator.h>
#include <scapix/java_api/java/util/Spliterator_OfPrimitive.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFPRIMITIVE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFPRIMITIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_InternalNodeSpliterator_OfPrimitive; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_InternalNodeSpliterator_OfPrimitive>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$InternalNodeSpliterator$OfPrimitive";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_InternalNodeSpliterator, scapix::java_api::java::util::Spliterator_OfPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFPRIMITIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFPRIMITIVE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFPRIMITIVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_InternalNodeSpliterator_OfPrimitive : public jni::object_base<"java/util/stream/Nodes$InternalNodeSpliterator$OfPrimitive",
	java::util::stream::Nodes_InternalNodeSpliterator,
	java::util::Spliterator_OfPrimitive>
{
public:

	jboolean tryAdvance(jni::ref<java::lang::Object> p1) { return call_method<"tryAdvance", jboolean>(p1); }
	void forEachRemaining(jni::ref<java::lang::Object> p1) { return call_method<"forEachRemaining", void>(p1); }

protected:

	Nodes_InternalNodeSpliterator_OfPrimitive(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTERNALNODESPLITERATOR_OFPRIMITIVE
