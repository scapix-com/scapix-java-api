// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_DEBUGTRACEINFOSTACK_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_DEBUGTRACEINFOSTACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectOutputStream_DebugTraceInfoStack; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectOutputStream_DebugTraceInfoStack>
{
	static constexpr fixed_string class_name = "java/io/ObjectOutputStream$DebugTraceInfoStack";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_DEBUGTRACEINFOSTACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_DEBUGTRACEINFOSTACK)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_DEBUGTRACEINFOSTACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectOutputStream_DebugTraceInfoStack : public jni::object_base<"java/io/ObjectOutputStream$DebugTraceInfoStack",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ObjectOutputStream_DebugTraceInfoStack(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_DEBUGTRACEINFOSTACK
