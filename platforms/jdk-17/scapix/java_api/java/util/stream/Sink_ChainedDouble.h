// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/stream/Sink_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_CHAINEDDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_CHAINEDDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Sink_ChainedDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Sink_ChainedDouble>
{
	static constexpr fixed_string class_name = "java/util/stream/Sink$ChainedDouble";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::stream::Sink_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_CHAINEDDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_CHAINEDDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_CHAINEDDOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/Sink.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::stream::Sink_ChainedDouble : public jni::object_base<"java/util/stream/Sink$ChainedDouble",
	java::lang::Object,
	java::util::stream::Sink_OfDouble>
{
public:

	static jni::ref<java::util::stream::Sink_ChainedDouble> new_object(jni::ref<java::util::stream::Sink> downstream) { return base_::new_object(downstream); }
	void begin(jlong size) { return call_method<"begin", void>(size); }
	void end() { return call_method<"end", void>(); }
	jboolean cancellationRequested() { return call_method<"cancellationRequested", jboolean>(); }

protected:

	Sink_ChainedDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SINK_CHAINEDDOUBLE
