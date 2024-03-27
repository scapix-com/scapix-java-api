// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Error.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SERVICECONFIGURATIONERROR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SERVICECONFIGURATIONERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class ServiceConfigurationError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::ServiceConfigurationError>
{
	static constexpr fixed_string class_name = "java/util/ServiceConfigurationError";
	using base_classes = std::tuple<scapix::java_api::java::lang::Error>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SERVICECONFIGURATIONERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SERVICECONFIGURATIONERROR)
#define SCAPIX_JAVA_API_JAVA_UTIL_SERVICECONFIGURATIONERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::ServiceConfigurationError : public jni::object_base<"java/util/ServiceConfigurationError",
	java::lang::Error>
{
public:

	static jni::ref<java::util::ServiceConfigurationError> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<java::util::ServiceConfigurationError> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	ServiceConfigurationError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SERVICECONFIGURATIONERROR
