// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REDUCEOPS_BOX_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REDUCEOPS_BOX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class ReduceOps_Box; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::ReduceOps_Box>
{
	static constexpr fixed_string class_name = "java/util/stream/ReduceOps$Box";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REDUCEOPS_BOX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REDUCEOPS_BOX)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REDUCEOPS_BOX

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::ReduceOps_Box : public jni::object_base<"java/util/stream/ReduceOps$Box",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> get() { return call_method<"get", jni::ref<java::lang::Object>>(); }

protected:

	ReduceOps_Box(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_REDUCEOPS_BOX
