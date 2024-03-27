// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/System_Logger.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLLOGGER_SSLCONSOLELOGGER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLLOGGER_SSLCONSOLELOGGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLLogger_SSLConsoleLogger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLLogger_SSLConsoleLogger>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLLogger$SSLConsoleLogger";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::System_Logger>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLLOGGER_SSLCONSOLELOGGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLLOGGER_SSLCONSOLELOGGER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLLOGGER_SSLCONSOLELOGGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/System_Logger_Level.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLLogger_SSLConsoleLogger : public jni::object_base<"sun/security/ssl/SSLLogger$SSLConsoleLogger",
	java::lang::Object,
	java::lang::System_Logger>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isLoggable(jni::ref<java::lang::System_Logger_Level> level) { return call_method<"isLoggable", jboolean>(level); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::ResourceBundle> rb, jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> thrwbl) { return call_method<"log", void>(level, rb, message, thrwbl); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::ResourceBundle> rb, jni::ref<java::lang::String> message, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, rb, message, params); }

protected:

	SSLLogger_SSLConsoleLogger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLLOGGER_SSLCONSOLELOGGER