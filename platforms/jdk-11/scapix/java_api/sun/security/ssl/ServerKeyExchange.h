// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERKEYEXCHANGE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERKEYEXCHANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ServerKeyExchange; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ServerKeyExchange>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ServerKeyExchange";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERKEYEXCHANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERKEYEXCHANGE)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERKEYEXCHANGE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ServerKeyExchange : public jni::object_base<"sun/security/ssl/ServerKeyExchange",
	java::lang::Object>
{
public:


protected:

	ServerKeyExchange(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERKEYEXCHANGE
