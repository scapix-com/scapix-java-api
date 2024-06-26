// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/logging/Handler.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_MEMORYHANDLER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_MEMORYHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class MemoryHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::MemoryHandler>
{
	static constexpr fixed_string class_name = "java/util/logging/MemoryHandler";
	using base_classes = std::tuple<scapix::java_api::java::util::logging::Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_MEMORYHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_MEMORYHANDLER)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_MEMORYHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/logging/Level.h>
#include <scapix/java_api/java/util/logging/LogRecord.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::MemoryHandler : public jni::object_base<"java/util/logging/MemoryHandler",
	java::util::logging::Handler>
{
public:

	static jni::ref<java::util::logging::MemoryHandler> new_object() { return base_::new_object(); }
	static jni::ref<java::util::logging::MemoryHandler> new_object(jni::ref<java::util::logging::Handler> p1, jint p2, jni::ref<java::util::logging::Level> p3) { return base_::new_object(p1, p2, p3); }
	void publish(jni::ref<java::util::logging::LogRecord> p1) { return call_method<"publish", void>(p1); }
	void push() { return call_method<"push", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void close() { return call_method<"close", void>(); }
	void setPushLevel(jni::ref<java::util::logging::Level> p1) { return call_method<"setPushLevel", void>(p1); }
	jni::ref<java::util::logging::Level> getPushLevel() { return call_method<"getPushLevel", jni::ref<java::util::logging::Level>>(); }
	jboolean isLoggable(jni::ref<java::util::logging::LogRecord> p1) { return call_method<"isLoggable", jboolean>(p1); }

protected:

	MemoryHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_MEMORYHANDLER
