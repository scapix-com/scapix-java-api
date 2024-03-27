// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Node_Builder.h>
#include <scapix/java_api/java/util/stream/Sink_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODE_BUILDER_OFINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODE_BUILDER_OFINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Node_Builder_OfInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Node_Builder_OfInt>
{
	static constexpr fixed_string class_name = "java/util/stream/Node$Builder$OfInt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Node_Builder, scapix::java_api::java::util::stream::Sink_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODE_BUILDER_OFINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODE_BUILDER_OFINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODE_BUILDER_OFINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/Node_OfInt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Node_Builder_OfInt : public jni::object_base<"java/util/stream/Node$Builder$OfInt",
	java::lang::Object,
	java::util::stream::Node_Builder,
	java::util::stream::Sink_OfInt>
{
public:

	jni::ref<java::util::stream::Node_OfInt> build() { return call_method<"build", jni::ref<java::util::stream::Node_OfInt>>(); }

protected:

	Node_Builder_OfInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODE_BUILDER_OFINT
