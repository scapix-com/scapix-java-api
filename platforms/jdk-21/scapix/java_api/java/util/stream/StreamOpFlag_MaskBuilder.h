// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMOPFLAG_MASKBUILDER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMOPFLAG_MASKBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::stream { class StreamOpFlag_MaskBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::stream::StreamOpFlag_MaskBuilder>
{
	static constexpr fixed_string class_name = "java/util/stream/StreamOpFlag$MaskBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMOPFLAG_MASKBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMOPFLAG_MASKBUILDER)
#define SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMOPFLAG_MASKBUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::stream::StreamOpFlag_MaskBuilder : public jni::object_base<"java/util/stream/StreamOpFlag$MaskBuilder",
	java::lang::Object>
{
public:


protected:

	StreamOpFlag_MaskBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_STREAM_STREAMOPFLAG_MASKBUILDER
