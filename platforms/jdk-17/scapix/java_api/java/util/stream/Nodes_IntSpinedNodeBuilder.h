// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/SpinedBuffer_OfInt.h>
#include <scapix/java_api/java/util/stream/Node_OfInt.h>
#include <scapix/java_api/java/util/stream/Node_Builder_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTSPINEDNODEBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTSPINEDNODEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_IntSpinedNodeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_IntSpinedNodeBuilder>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$IntSpinedNodeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::SpinedBuffer_OfInt, scapix::java_api::java::util::stream::Node_OfInt, scapix::java_api::java::util::stream::Node_Builder_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTSPINEDNODEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTSPINEDNODEBUILDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTSPINEDNODEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Spliterator_OfInt.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_IntSpinedNodeBuilder : public jni::object_base<"java/util/stream/Nodes$IntSpinedNodeBuilder",
	java::util::stream::SpinedBuffer_OfInt,
	java::util::stream::Node_OfInt,
	java::util::stream::Node_Builder_OfInt>
{
public:

	jni::ref<java::util::Spliterator_OfInt> spliterator() { return call_method<"spliterator", jni::ref<java::util::Spliterator_OfInt>>(); }
	void forEach(jni::ref<java::util::function::IntConsumer> consumer) { return call_method<"forEach", void>(consumer); }
	void begin(jlong size) { return call_method<"begin", void>(size); }
	void accept(jint i) { return call_method<"accept", void>(i); }
	void end() { return call_method<"end", void>(); }
	void copyInto(jni::ref<jni::array<jint>> array, jint offset) { return call_method<"copyInto", void>(array, offset); }
	jni::ref<jni::array<jint>> asPrimitiveArray() { return call_method<"asPrimitiveArray", jni::ref<jni::array<jint>>>(); }
	jni::ref<java::util::stream::Node_OfInt> build() { return call_method<"build", jni::ref<java::util::stream::Node_OfInt>>(); }

protected:

	Nodes_IntSpinedNodeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_INTSPINEDNODEBUILDER