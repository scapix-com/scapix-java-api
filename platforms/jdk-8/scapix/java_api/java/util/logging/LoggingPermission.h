// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/BasicPermission.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::logging { class LoggingPermission; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::logging::LoggingPermission>
{
	static constexpr fixed_string class_name = "java/util/logging/LoggingPermission";
	using base_classes = std::tuple<scapix::java_api::java::security::BasicPermission>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGGINGPERMISSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGGINGPERMISSION)
#define SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGGINGPERMISSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::logging::LoggingPermission : public jni::object_base<"java/util/logging/LoggingPermission",
	java::security::BasicPermission>
{
public:

	static jni::ref<java::util::logging::LoggingPermission> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }

protected:

	LoggingPermission(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_LOGGING_LOGGINGPERMISSION