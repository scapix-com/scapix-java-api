// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Consumer.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Sink; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Sink>
{
	static constexpr fixed_string class_name = "java/util/stream/Sink";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Consumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/Sink_OfInt.h>
#include <scapix/java_api/java/util/stream/Sink_OfLong.h>
#include <scapix/java_api/java/util/stream/Sink_OfDouble.h>
#include <scapix/java_api/java/util/stream/Sink_ChainedReference.h>
#include <scapix/java_api/java/util/stream/Sink_ChainedInt.h>
#include <scapix/java_api/java/util/stream/Sink_ChainedLong.h>
#include <scapix/java_api/java/util/stream/Sink_ChainedDouble.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Sink : public jni::object_base<"java/util/stream/Sink",
	java::lang::Object,
	java::util::function::Consumer>
{
public:

	using OfInt = Sink_OfInt;
	using OfLong = Sink_OfLong;
	using OfDouble = Sink_OfDouble;
	using ChainedReference = Sink_ChainedReference;
	using ChainedInt = Sink_ChainedInt;
	using ChainedLong = Sink_ChainedLong;
	using ChainedDouble = Sink_ChainedDouble;

	void begin(jlong p1) { return call_method<"begin", void>(p1); }
	void end() { return call_method<"end", void>(); }
	jboolean cancellationRequested() { return call_method<"cancellationRequested", jboolean>(); }
	void accept(jint p1) { return call_method<"accept", void>(p1); }
	void accept(jlong p1) { return call_method<"accept", void>(p1); }
	void accept(jdouble p1) { return call_method<"accept", void>(p1); }

protected:

	Sink(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK
