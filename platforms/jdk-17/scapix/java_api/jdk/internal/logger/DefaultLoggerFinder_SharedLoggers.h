// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_DEFAULTLOGGERFINDER_SHAREDLOGGERS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_DEFAULTLOGGERFINDER_SHAREDLOGGERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class DefaultLoggerFinder_SharedLoggers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::DefaultLoggerFinder_SharedLoggers>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/DefaultLoggerFinder$SharedLoggers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_DEFAULTLOGGERFINDER_SHAREDLOGGERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_DEFAULTLOGGERFINDER_SHAREDLOGGERS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_DEFAULTLOGGERFINDER_SHAREDLOGGERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::logger::DefaultLoggerFinder_SharedLoggers : public jni::object_base<"jdk/internal/logger/DefaultLoggerFinder$SharedLoggers",
	java::lang::Object>
{
public:


protected:

	DefaultLoggerFinder_SharedLoggers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_DEFAULTLOGGERFINDER_SHAREDLOGGERS
