// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOVERIFYREQUEST_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOVERIFYREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class HelloVerifyRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::HelloVerifyRequest>
{
	static constexpr fixed_string class_name = "sun/security/ssl/HelloVerifyRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOVERIFYREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOVERIFYREQUEST)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOVERIFYREQUEST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::HelloVerifyRequest : public jni::object_base<"sun/security/ssl/HelloVerifyRequest",
	java::lang::Object>
{
public:


protected:

	HelloVerifyRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOVERIFYREQUEST
