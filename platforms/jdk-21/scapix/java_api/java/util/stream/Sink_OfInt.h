// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Sink.h>
#include <scapix/java_api/java/util/function/IntConsumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_OFINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_OFINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Sink_OfInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Sink_OfInt>
{
	static constexpr fixed_string class_name = "java/util/stream/Sink$OfInt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Sink, scapix::java_api::java::util::function::IntConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_OFINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_OFINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_OFINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Sink_OfInt : public jni::object_base<"java/util/stream/Sink$OfInt",
	java::lang::Object,
	java::util::stream::Sink,
	java::util::function::IntConsumer>
{
public:

	void accept(jint p1) { return call_method<"accept", void>(p1); }
	void accept(jni::ref<java::lang::Integer> i) { return call_method<"accept", void>(i); }

protected:

	Sink_OfInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_OFINT
