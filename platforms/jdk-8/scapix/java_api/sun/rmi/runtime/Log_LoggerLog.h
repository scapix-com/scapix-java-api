// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/rmi/runtime/Log.h>

#ifndef SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOG_FWD
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::rmi::runtime { class Log_LoggerLog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::rmi::runtime::Log_LoggerLog>
{
	static constexpr fixed_string class_name = "sun/rmi/runtime/Log$LoggerLog";
	using base_classes = std::tuple<scapix::java_api::sun::rmi::runtime::Log>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOG)
#define SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/logging/Level.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::rmi::runtime::Log_LoggerLog : public jni::object_base<"sun/rmi/runtime/Log$LoggerLog",
	sun::rmi::runtime::Log>
{
public:

	jboolean isLoggable(jni::ref<java::util::logging::Level> p1) { return call_method<"isLoggable", jboolean>(p1); }
	void log(jni::ref<java::util::logging::Level> p1, jni::ref<java::lang::String> p2) { return call_method<"log", void>(p1, p2); }
	void log(jni::ref<java::util::logging::Level> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Throwable> p3) { return call_method<"log", void>(p1, p2, p3); }
	void setOutputStream(jni::ref<java::io::OutputStream> p1) { return call_method<"setOutputStream", void>(p1); }
	jni::ref<java::io::PrintStream> getPrintStream() { return call_method<"getPrintStream", jni::ref<java::io::PrintStream>>(); }

protected:

	Log_LoggerLog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_RMI_RUNTIME_LOG_LOGGERLOG
