// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/logging/Formatter.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_SIMPLEFORMATTER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_SIMPLEFORMATTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class SimpleFormatter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::SimpleFormatter>
{
	static constexpr fixed_string class_name = "java/util/logging/SimpleFormatter";
	using base_classes = std::tuple<scapix::java_api::java::util::logging::Formatter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_SIMPLEFORMATTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_SIMPLEFORMATTER)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_SIMPLEFORMATTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/logging/LogRecord.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::SimpleFormatter : public jni::object_base<"java/util/logging/SimpleFormatter",
	java::util::logging::Formatter>
{
public:

	static jni::ref<java::util::logging::SimpleFormatter> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> format(jni::ref<java::util::logging::LogRecord> p1) { return call_method<"format", jni::ref<java::lang::String>>(p1); }

protected:

	SimpleFormatter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_SIMPLEFORMATTER
