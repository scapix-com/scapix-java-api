// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/logging/Handler.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_STREAMHANDLER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_STREAMHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class StreamHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::StreamHandler>
{
	static constexpr fixed_string class_name = "java/util/logging/StreamHandler";
	using base_classes = std::tuple<scapix::java_api::java::util::logging::Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_STREAMHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_STREAMHANDLER)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_STREAMHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/logging/Formatter.h>
#include <scapix/java_api/java/util/logging/LogRecord.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::StreamHandler : public jni::object_base<"java/util/logging/StreamHandler",
	java::util::logging::Handler>
{
public:

	static jni::ref<java::util::logging::StreamHandler> new_object() { return base_::new_object(); }
	static jni::ref<java::util::logging::StreamHandler> new_object(jni::ref<java::io::OutputStream> os, jni::ref<java::util::logging::Formatter> formatter) { return base_::new_object(os, formatter); }
	void setEncoding(jni::ref<java::lang::String> charsetName) { return call_method<"setEncoding", void>(charsetName); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void publish(jni::ref<java::util::logging::LogRecord> record) { return call_method<"publish", void>(record); }
	jboolean isLoggable(jni::ref<java::util::logging::LogRecord> record) { return call_method<"isLoggable", jboolean>(record); }

protected:

	StreamHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_STREAMHANDLER
