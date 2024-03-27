// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_BUILDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class HelloCookieManager_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::HelloCookieManager_Builder>
{
	static constexpr fixed_string class_name = "sun/security/ssl/HelloCookieManager$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_BUILDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_BUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::HelloCookieManager_Builder : public jni::object_base<"sun/security/ssl/HelloCookieManager$Builder",
	java::lang::Object>
{
public:


protected:

	HelloCookieManager_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HELLOCOOKIEMANAGER_BUILDER
