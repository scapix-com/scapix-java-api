// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/logger/LoggerWrapper.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_LOCALIZEDLOGGERWRAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_LOCALIZEDLOGGERWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class LocalizedLoggerWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::LocalizedLoggerWrapper>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/LocalizedLoggerWrapper";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::logger::LoggerWrapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_LOCALIZEDLOGGERWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_LOCALIZEDLOGGERWRAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_LOCALIZEDLOGGERWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/System_Logger.h>
#include <scapix/java_api/java/lang/System_Logger_Level.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/sun/util/logging/PlatformLogger_Level.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::logger::LocalizedLoggerWrapper : public jni::object_base<"jdk/internal/logger/LocalizedLoggerWrapper",
	jdk::internal::logger::LoggerWrapper>
{
public:

	static jni::ref<jdk::internal::logger::LocalizedLoggerWrapper> new_object(jni::ref<java::lang::System_Logger> wrapped, jni::ref<java::util::ResourceBundle> bundle) { return base_::new_object(wrapped, bundle); }
	jni::ref<java::util::ResourceBundle> getBundle() { return call_method<"getBundle", jni::ref<java::util::ResourceBundle>>(); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::String> msg) { return call_method<"log", void>(level, msg); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::String> msg, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, msg, thrown); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, format, params); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::lang::Object> obj) { return call_method<"log", void>(level, obj); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::function::Supplier> msgSupplier) { return call_method<"log", void>(level, msgSupplier); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::function::Supplier> msgSupplier, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, msgSupplier, thrown); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, bundle, format, params); }
	void log(jni::ref<java::lang::System_Logger_Level> level, jni::ref<java::util::ResourceBundle> bundle, jni::ref<java::lang::String> key, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, bundle, key, thrown); }
	jboolean isLoggable(jni::ref<java::lang::System_Logger_Level> level) { return call_method<"isLoggable", jboolean>(level); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::String> key) { return call_method<"logp", void>(level, sourceClass, sourceMethod, key); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::String> key, jni::ref<java::lang::Throwable> thrown) { return call_method<"logp", void>(level, sourceClass, sourceMethod, key, thrown); }
	void logp(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> sourceClass, jni::ref<java::lang::String> sourceMethod, jni::ref<java::lang::String> key, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"logp", void>(level, sourceClass, sourceMethod, key, params); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> msg, jni::ref<java::lang::Throwable> thrown) { return call_method<"log", void>(level, msg, thrown); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> msg) { return call_method<"log", void>(level, msg); }
	void log(jni::ref<sun::util::logging::PlatformLogger_Level> level, jni::ref<java::lang::String> format, jni::ref<jni::array<java::lang::Object>> params) { return call_method<"log", void>(level, format, params); }

protected:

	LocalizedLoggerWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_LOCALIZEDLOGGERWRAPPER