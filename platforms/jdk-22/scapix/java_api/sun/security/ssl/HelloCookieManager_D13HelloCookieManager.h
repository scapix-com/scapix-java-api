// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/HelloCookieManager.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_D13HELLOCOOKIEMANAGER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_D13HELLOCOOKIEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class HelloCookieManager_D13HelloCookieManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::HelloCookieManager_D13HelloCookieManager>
{
	static constexpr fixed_string class_name = "sun/security/ssl/HelloCookieManager$D13HelloCookieManager";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::HelloCookieManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_D13HELLOCOOKIEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_D13HELLOCOOKIEMANAGER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_D13HELLOCOOKIEMANAGER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::HelloCookieManager_D13HelloCookieManager : public jni::object_base<"sun/security/ssl/HelloCookieManager$D13HelloCookieManager",
	sun::security::ssl::HelloCookieManager>
{
public:


protected:

	HelloCookieManager_D13HelloCookieManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_D13HELLOCOOKIEMANAGER
