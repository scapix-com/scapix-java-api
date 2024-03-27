// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/concurrent/CountedCompleter.h>
#include <scapix/java_api/java/util/stream/Sink.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_SizedCollectorTask; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_SizedCollectorTask>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$SizedCollectorTask";
	using base_classes = std::tuple<scapix::java_api::java::util::concurrent::CountedCompleter, scapix::java_api::java::util::stream::Sink>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_SizedCollectorTask : public jni::object_base<"java/util/stream/Nodes$SizedCollectorTask",
	java::util::concurrent::CountedCompleter,
	java::util::stream::Sink>
{
public:

	void compute() { return call_method<"compute", void>(); }
	void begin(jlong size) { return call_method<"begin", void>(size); }

protected:

	Nodes_SizedCollectorTask(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK
