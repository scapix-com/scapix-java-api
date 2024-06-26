// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/function/Predicate.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_CALLERFINDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_CALLERFINDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::logger { class SimpleConsoleLogger_CallerFinder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::logger::SimpleConsoleLogger_CallerFinder>
{
	static constexpr fixed_string class_name = "jdk/internal/logger/SimpleConsoleLogger$CallerFinder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::function::Predicate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_CALLERFINDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_CALLERFINDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_CALLERFINDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StackWalker_StackFrame.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::logger::SimpleConsoleLogger_CallerFinder : public jni::object_base<"jdk/internal/logger/SimpleConsoleLogger$CallerFinder",
	java::lang::Object,
	java::util::function::Predicate>
{
public:

	jboolean test(jni::ref<java::lang::StackWalker_StackFrame> t) { return call_method<"test", jboolean>(t); }

protected:

	SimpleConsoleLogger_CallerFinder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOGGER_SIMPLECONSOLELOGGER_CALLERFINDER
