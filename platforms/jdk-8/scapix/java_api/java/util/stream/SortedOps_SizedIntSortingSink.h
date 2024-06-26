// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/SortedOps_AbstractIntSortingSink.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_SIZEDINTSORTINGSINK_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_SIZEDINTSORTINGSINK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class SortedOps_SizedIntSortingSink; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::SortedOps_SizedIntSortingSink>
{
	static constexpr fixed_string class_name = "java/util/stream/SortedOps$SizedIntSortingSink";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::SortedOps_AbstractIntSortingSink>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_SIZEDINTSORTINGSINK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_SIZEDINTSORTINGSINK)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_SIZEDINTSORTINGSINK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::SortedOps_SizedIntSortingSink : public jni::object_base<"java/util/stream/SortedOps$SizedIntSortingSink",
	java::util::stream::SortedOps_AbstractIntSortingSink>
{
public:

	void begin(jlong p1) { return call_method<"begin", void>(p1); }
	void end() { return call_method<"end", void>(); }
	void accept(jint p1) { return call_method<"accept", void>(p1); }

protected:

	SortedOps_SizedIntSortingSink(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_SORTEDOPS_SIZEDINTSORTINGSINK
