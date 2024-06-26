// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/SpinedBuffer_OfLong.h>
#include <scapix/java_api/java/util/stream/Node_OfLong.h>
#include <scapix/java_api/java/util/stream/Node_Builder_OfLong.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_LONGSPINEDNODEBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_LONGSPINEDNODEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_LongSpinedNodeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_LongSpinedNodeBuilder>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$LongSpinedNodeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::SpinedBuffer_OfLong, scapix::java_api::java::util::stream::Node_OfLong, scapix::java_api::java::util::stream::Node_Builder_OfLong>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_LONGSPINEDNODEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_LONGSPINEDNODEBUILDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_LONGSPINEDNODEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator_OfLong.h>
#include <scapix/java_api/java/util/function/LongConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_LongSpinedNodeBuilder : public jni::object_base<"java/util/stream/Nodes$LongSpinedNodeBuilder",
	java::util::stream::SpinedBuffer_OfLong,
	java::util::stream::Node_OfLong,
	java::util::stream::Node_Builder_OfLong>
{
public:

	jni::ref<java::util::Spliterator_OfLong> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfLong>>(); }
	void forEach(jni::ref<java::util::function::LongConsumer> p1) { return call_method<"forEach", void>(p1); }
	void begin(jlong p1) { return call_method<"begin", void>(p1); }
	void accept(jlong p1) { return call_method<"accept", void>(p1); }
	void end() { return call_method<"end", void>(); }
	void copyInto(jni::ref<jni::array<jlong>> p1, jint p2) { return call_method<"copyInto", void>(p1, p2); }
	jni::ref<jni::array<jlong>> asPrimitiveArray() { return call_method<"asPrimitiveArray", jni::ref<jni::array<jlong>>>(); }
	jni::ref<java::util::stream::Node_OfLong> build() { return call_method<"build", jni::ref<java::util::stream::Node_OfLong>>(); }

protected:

	Nodes_LongSpinedNodeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_LONGSPINEDNODEBUILDER
