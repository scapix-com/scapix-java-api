// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class SecureRandomParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::SecureRandomParameters>
{
	static constexpr fixed_string class_name = "java/security/SecureRandomParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMPARAMETERS)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMPARAMETERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::SecureRandomParameters : public jni::object_base<"java/security/SecureRandomParameters",
	java::lang::Object>
{
public:


protected:

	SecureRandomParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SECURERANDOMPARAMETERS
