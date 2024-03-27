// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGRECORD_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class LogRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::LogRecord>
{
	static constexpr fixed_string class_name = "java/util/logging/LogRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGRECORD)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#include <scapix/java_api/java/util/logging/Level.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::LogRecord : public jni::object_base<"java/util/logging/LogRecord",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::util::logging::LogRecord> new_object(jni::ref<java::util::logging::Level> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getLoggerName() { return call_method<"getLoggerName", jni::ref<java::lang::String>>(); }
	void setLoggerName(jni::ref<java::lang::String> p1) { return call_method<"setLoggerName", void>(p1); }
	jni::ref<java::util::ResourceBundle> getResourceBundle() { return call_method<"getResourceBundle", jni::ref<java::util::ResourceBundle>>(); }
	void setResourceBundle(jni::ref<java::util::ResourceBundle> p1) { return call_method<"setResourceBundle", void>(p1); }
	jni::ref<java::lang::String> getResourceBundleName() { return call_method<"getResourceBundleName", jni::ref<java::lang::String>>(); }
	void setResourceBundleName(jni::ref<java::lang::String> p1) { return call_method<"setResourceBundleName", void>(p1); }
	jni::ref<java::util::logging::Level> getLevel() { return call_method<"getLevel", jni::ref<java::util::logging::Level>>(); }
	void setLevel(jni::ref<java::util::logging::Level> p1) { return call_method<"setLevel", void>(p1); }
	jlong getSequenceNumber() { return call_method<"getSequenceNumber", jlong>(); }
	void setSequenceNumber(jlong p1) { return call_method<"setSequenceNumber", void>(p1); }
	jni::ref<java::lang::String> getSourceClassName() { return call_method<"getSourceClassName", jni::ref<java::lang::String>>(); }
	void setSourceClassName(jni::ref<java::lang::String> p1) { return call_method<"setSourceClassName", void>(p1); }
	jni::ref<java::lang::String> getSourceMethodName() { return call_method<"getSourceMethodName", jni::ref<java::lang::String>>(); }
	void setSourceMethodName(jni::ref<java::lang::String> p1) { return call_method<"setSourceMethodName", void>(p1); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }
	void setMessage(jni::ref<java::lang::String> p1) { return call_method<"setMessage", void>(p1); }
	jni::ref<jni::array<java::lang::Object>> getParameters() { return call_method<"getParameters", jni::ref<jni::array<java::lang::Object>>>(); }
	void setParameters(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"setParameters", void>(p1); }
	jint getThreadID() { return call_method<"getThreadID", jint>(); }
	void setThreadID(jint p1) { return call_method<"setThreadID", void>(p1); }
	jlong getMillis() { return call_method<"getMillis", jlong>(); }
	void setMillis(jlong p1) { return call_method<"setMillis", void>(p1); }
	jni::ref<java::lang::Throwable> getThrown() { return call_method<"getThrown", jni::ref<java::lang::Throwable>>(); }
	void setThrown(jni::ref<java::lang::Throwable> p1) { return call_method<"setThrown", void>(p1); }

protected:

	LogRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGRECORD
