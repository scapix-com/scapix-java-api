// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/stream/ForEachOps_ForEachOp.h>
#include <scapix/java_api/java/util/stream/Sink_OfDouble.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFDOUBLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFDOUBLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class ForEachOps_ForEachOp_OfDouble; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::ForEachOps_ForEachOp_OfDouble>
{
	static constexpr fixed_string class_name = "java/util/stream/ForEachOps$ForEachOp$OfDouble";
	using base_classes = std::tuple<scapix::java_api::java::util::stream::ForEachOps_ForEachOp, scapix::java_api::java::util::stream::Sink_OfDouble>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFDOUBLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFDOUBLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFDOUBLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/stream/StreamShape.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::ForEachOps_ForEachOp_OfDouble : public jni::object_base<"java/util/stream/ForEachOps$ForEachOp$OfDouble",
	java::util::stream::ForEachOps_ForEachOp,
	java::util::stream::Sink_OfDouble>
{
public:

	jni::ref<java::util::stream::StreamShape> inputShape() { return call_method<"inputShape", jni::ref<java::util::stream::StreamShape>>(); }
	void accept(jdouble t) { return call_method<"accept", void>(t); }

protected:

	ForEachOps_ForEachOp_OfDouble(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_FOREACHOPS_FOREACHOP_OFDOUBLE
