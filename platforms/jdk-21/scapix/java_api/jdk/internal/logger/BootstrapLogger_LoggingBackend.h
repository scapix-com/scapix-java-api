// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_LOGGINGBACKEND_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_LOGGINGBACKEND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class BootstrapLogger_LoggingBackend; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::BootstrapLogger_LoggingBackend>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/BootstrapLogger$LoggingBackend";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_LOGGINGBACKEND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_LOGGINGBACKEND)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_LOGGINGBACKEND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::logger::BootstrapLogger_LoggingBackend : public jni::object_base<"jdk/internal/logger/BootstrapLogger$LoggingBackend",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend> NONE() { return get_static_field<"NONE", jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend>>(); }
	static jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend> JUL_DEFAULT() { return get_static_field<"JUL_DEFAULT", jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend>>(); }
	static jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend> JUL_WITH_CONFIG() { return get_static_field<"JUL_WITH_CONFIG", jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend>>(); }
	static jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend> CUSTOM() { return get_static_field<"CUSTOM", jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend>>(); }

	static jni::ref<jni::array<jdk::internal::logger::BootstrapLogger_LoggingBackend>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::logger::BootstrapLogger_LoggingBackend>>>(); }
	static jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::logger::BootstrapLogger_LoggingBackend>>(name); }

protected:

	BootstrapLogger_LoggingBackend(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_LOGGINGBACKEND
