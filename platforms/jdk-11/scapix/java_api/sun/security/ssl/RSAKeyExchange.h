// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_RSAKEYEXCHANGE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_RSAKEYEXCHANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class RSAKeyExchange; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::RSAKeyExchange>
{
	static constexpr fixed_string class_name = "sun/security/ssl/RSAKeyExchange";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_RSAKEYEXCHANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_RSAKEYEXCHANGE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_RSAKEYEXCHANGE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::RSAKeyExchange : public jni::object_base<"sun/security/ssl/RSAKeyExchange",
	java::lang::Object>
{
public:


protected:

	RSAKeyExchange(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_RSAKEYEXCHANGE
