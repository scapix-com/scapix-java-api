// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/FindOps_FindSink.h>
#include <scapix/java_api/java/util/stream/Sink_OfInt.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFINT_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class FindOps_FindSink_OfInt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::FindOps_FindSink_OfInt>
{
	static constexpr fixed_string class_name = "java/util/stream/FindOps$FindSink$OfInt";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::FindOps_FindSink, scapix::java_api::java::util::stream::Sink_OfInt>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFINT)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/OptionalInt.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::FindOps_FindSink_OfInt : public jni::object_base<"java/util/stream/FindOps$FindSink$OfInt",
	java::util::stream::FindOps_FindSink,
	java::util::stream::Sink_OfInt>
{
public:

	void accept(jint p1) { return call_method<"accept", void>(p1); }
	jni::ref<java::util::OptionalInt> get() { return call_method<"get", jni::ref<java::util::OptionalInt>>(); }

protected:

	FindOps_FindSink_OfInt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFINT
