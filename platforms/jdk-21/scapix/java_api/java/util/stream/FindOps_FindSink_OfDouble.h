// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/FindOps_FindSink.h>
#include <scapix/java_api/java/util/stream/Sink_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class FindOps_FindSink_OfDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::FindOps_FindSink_OfDouble>
{
	static constexpr fixed_string class_name = "java/util/stream/FindOps$FindSink$OfDouble";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::FindOps_FindSink, scapix::java_api::java::util::stream::Sink_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFDOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/OptionalDouble.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::FindOps_FindSink_OfDouble : public jni::object_base<"java/util/stream/FindOps$FindSink$OfDouble",
	java::util::stream::FindOps_FindSink,
	java::util::stream::Sink_OfDouble>
{
public:

	void accept(jdouble value) { return call_method<"accept", void>(value); }
	jni::ref<java::util::OptionalDouble> get() { return call_method<"get", jni::ref<java::util::OptionalDouble>>(); }

protected:

	FindOps_FindSink_OfDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FINDOPS_FINDSINK_OFDOUBLE
