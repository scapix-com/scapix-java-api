// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/logging/StreamHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_INTERNALSTREAMHANDLER_FWD
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_INTERNALSTREAMHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::runtime { class Log_InternalStreamHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::runtime::Log_InternalStreamHandler>
{
	static constexpr fixed_string class_name = "sun/rmi/runtime/Log$InternalStreamHandler";
	using base_classes = std::tuple<scapix::java_api::java::util::logging::StreamHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_INTERNALSTREAMHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_INTERNALSTREAMHANDLER)
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_INTERNALSTREAMHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/logging/LogRecord.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::runtime::Log_InternalStreamHandler : public jni::object_base<"sun/rmi/runtime/Log$InternalStreamHandler",
	java::util::logging::StreamHandler>
{
public:

	void publish(jni::ref<java::util::logging::LogRecord> p1) { return call_method<"publish", void>(p1); }
	void close() { return call_method<"close", void>(); }

protected:

	Log_InternalStreamHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_INTERNALSTREAMHANDLER