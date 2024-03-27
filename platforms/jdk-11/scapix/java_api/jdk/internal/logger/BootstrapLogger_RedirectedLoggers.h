// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Function.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_REDIRECTEDLOGGERS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_REDIRECTEDLOGGERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class BootstrapLogger_RedirectedLoggers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::BootstrapLogger_RedirectedLoggers>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/BootstrapLogger$RedirectedLoggers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Function>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_REDIRECTEDLOGGERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_REDIRECTEDLOGGERS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_REDIRECTEDLOGGERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/logger/LazyLoggers_LazyLoggerAccessor.h>
#include <scapix/java_api/jdk/internal/logger/SurrogateLogger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::logger::BootstrapLogger_RedirectedLoggers : public jni::object_base<"jdk/internal/logger/BootstrapLogger$RedirectedLoggers",
	java::lang::Object,
	java::util::function::Function>
{
public:

	jni::ref<jdk::internal::logger::SurrogateLogger> apply(jni::ref<jdk::internal::logger::LazyLoggers_LazyLoggerAccessor> t) { return call_method<"apply", jni::ref<jdk::internal::logger::SurrogateLogger>>(t); }

protected:

	BootstrapLogger_RedirectedLoggers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_REDIRECTEDLOGGERS
