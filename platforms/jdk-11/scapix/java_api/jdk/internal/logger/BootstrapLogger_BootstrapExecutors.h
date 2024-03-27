// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/concurrent/ThreadFactory.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_BOOTSTRAPEXECUTORS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_BOOTSTRAPEXECUTORS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class BootstrapLogger_BootstrapExecutors; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::BootstrapLogger_BootstrapExecutors>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/BootstrapLogger$BootstrapExecutors";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::concurrent::ThreadFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_BOOTSTRAPEXECUTORS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_BOOTSTRAPEXECUTORS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_BOOTSTRAPEXECUTORS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/Thread.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::logger::BootstrapLogger_BootstrapExecutors : public jni::object_base<"jdk/internal/logger/BootstrapLogger$BootstrapExecutors",
	java::lang::Object,
	java::util::concurrent::ThreadFactory>
{
public:

	jni::ref<java::lang::Thread> newThread(jni::ref<java::lang::Runnable> r) { return call_method<"newThread", jni::ref<java::lang::Thread>>(r); }

protected:

	BootstrapLogger_BootstrapExecutors(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_BOOTSTRAPLOGGER_BOOTSTRAPEXECUTORS