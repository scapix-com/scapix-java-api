// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/Nodes_CollectorTask.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_COLLECTORTASK_OFLONG_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_COLLECTORTASK_OFLONG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Nodes_CollectorTask_OfLong; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Nodes_CollectorTask_OfLong>
{
	static constexpr fixed_string class_name = "java/util/stream/Nodes$CollectorTask$OfLong";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::Nodes_CollectorTask>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_COLLECTORTASK_OFLONG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_COLLECTORTASK_OFLONG)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_COLLECTORTASK_OFLONG

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Nodes_CollectorTask_OfLong : public jni::object_base<"java/util/stream/Nodes$CollectorTask$OfLong",
	java::util::stream::Nodes_CollectorTask>
{
public:


protected:

	Nodes_CollectorTask_OfLong(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_NODES_COLLECTORTASK_OFLONG
