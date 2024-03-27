// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/util/logging/PlatformLogger_ConfigurableBridge_LoggerConfiguration.h>
#include <scapix/java_api/java/lang/System_Logger.h>
#include <scapix/java_api/sun/util/logging/PlatformLogger_Bridge.h>
#include <scapix/java_api/sun/util/logging/PlatformLogger_ConfigurableBridge.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class SimpleConsoleLogger; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::SimpleConsoleLogger>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/SimpleConsoleLogger";
	using base_classes = std::tuple<scapix::java_api::sun::util::logging::PlatformLogger_ConfigurableBridge_LoggerConfiguration, scapix::java_api::java::lang::System_Logger, scapix::java_api::sun::util::logging::PlatformLogger_Bridge, scapix::java_api::sun::util::logging::PlatformLogger_ConfigurableBridge>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/System_Logger_Level.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/sun/util/logging/PlatformLogger_Level.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::logger::SimpleConsoleLogger : public jni::object_base<"jdk/internal/logger/SimpleConsoleLogger",
	sun::util::logging::PlatformLogger_ConfigurableBridge_LoggerConfiguration,
	java::lang::System_Logger,
	sun::util::logging::PlatformLogger_Bridge,
	sun::util::logging::PlatformLogger_ConfigurableBridge>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isLoggable(jni::ref<java::lang::System_Logger_Level> level) { return call_method<"isLoggable", jboolean>(level); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> key, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, bundle, key, thrown); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, bundle, format, params); }
	jboolean isLoggable(jni::ref<sun::util::logging::PlatformLogger_Level> level) { return call_method<"isLoggable", jboolean>(level); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> msg) { return call_method<"log", void>(level, msg); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> msg, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, msg, thrown); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> msg, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, msg, params); }
	jni::ref<sun::util::logging::PlatformLogger_Level> getPlatformLevel() { return call_method<"getPlatformLevel", jni::ref<sun::util::logging::PlatformLogger_Level>>(); }
	void setPlatformLevel(jni::ref<sun::util::logging::PlatformLogger_Level> newLevel) { return call_method<"setPlatformLevel", void>(newLevel); }
	jni::ref<sun::util::logging::PlatformLogger_ConfigurableBridge_LoggerConfiguration> getLoggerConfiguration() { return call_method<"getLoggerConfiguration", jni::ref<sun::util::logging::PlatformLogger_ConfigurableBridge_LoggerConfiguration>>(); }
	static jni::ref<jdk::internal::logger::SimpleConsoleLogger> makeSimpleLogger(jni::ref<java::lang::String> name) { return call_static_method<"makeSimpleLogger", jni::ref<jdk::internal::logger::SimpleConsoleLogger>>(name); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::util::function::Supplier> msgSupplier) { return call_method<"log", void>(level, msgSupplier); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::Throwable> thrown, jni::ref<java::util::function::Supplier> msgSupplier) { return call_method<"log", void>(level, thrown, msgSupplier); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::String> msg) { return call_method<"logp", void>(level, sourceClass, sourceMethod, msg); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::util::function::Supplier> msgSupplier) { return call_method<"logp", void>(level, sourceClass, sourceMethod, msgSupplier); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::String> msg, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"logp", void>(level, sourceClass, sourceMethod, msg, params); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::String> msg, jni::ref<java::lang::Throwable> thrown) { return call_method<"logp", void>(level, sourceClass, sourceMethod, msg, thrown); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::Throwable> thrown, jni::ref<java::util::function::Supplier> msgSupplier) { return call_method<"logp", void>(level, sourceClass, sourceMethod, thrown, msgSupplier); }
	void logrb(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> key, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"logrb", void>(level, sourceClass, sourceMethod, bundle, key, params); }
	void logrb(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> key, jni::ref<java::lang::Throwable> thrown) { return call_method<"logrb", void>(level, sourceClass, sourceMethod, bundle, key, thrown); }
	void logrb(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> key, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"logrb", void>(level, bundle, key, params); }
	void logrb(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> key, jni::ref<java::lang::Throwable> thrown) { return call_method<"logrb", void>(level, bundle, key, thrown); }

protected:

	SimpleConsoleLogger(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER
