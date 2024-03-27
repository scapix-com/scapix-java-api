// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/java/util/Map.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_PARTITION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_PARTITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class Collectors_Partition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::Collectors_Partition>
{
	static constexpr fixed_string class_name = "java/util/stream/Collectors$Partition";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::java::util::Map>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_PARTITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_PARTITION)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_PARTITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::Collectors_Partition : public jni::object_base<"java/util/stream/Collectors$Partition",
	java::util::AbstractMap,
	java::util::Map>
{
public:

	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	Collectors_Partition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_COLLECTORS_PARTITION
