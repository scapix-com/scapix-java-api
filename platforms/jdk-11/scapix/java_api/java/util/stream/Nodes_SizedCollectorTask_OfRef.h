// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_SizedCollectorTask.h>
#include <scapix/java_api/java/util/stream/Sink.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_OFREF_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_OFREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_SizedCollectorTask_OfRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_SizedCollectorTask_OfRef>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$SizedCollectorTask$OfRef";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_SizedCollectorTask, scapix::java_api::java::util::stream::Sink>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_OFREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_OFREF)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_OFREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_SizedCollectorTask_OfRef : public jni::object_base<"java/util/stream/Nodes$SizedCollectorTask$OfRef",
	java::util::stream::Nodes_SizedCollectorTask,
	java::util::stream::Sink>
{
public:

	void accept(jni::ref<java::lang::Object> value) { return call_method<"accept", void>(value); }

protected:

	Nodes_SizedCollectorTask_OfRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_SIZEDCOLLECTORTASK_OFREF
