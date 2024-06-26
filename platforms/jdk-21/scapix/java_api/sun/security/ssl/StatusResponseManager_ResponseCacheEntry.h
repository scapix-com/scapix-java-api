// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_STATUSRESPONSEMANAGER_RESPONSECACHEENTRY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_STATUSRESPONSEMANAGER_RESPONSECACHEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class StatusResponseManager_ResponseCacheEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::StatusResponseManager_ResponseCacheEntry>
{
	static constexpr fixed_string class_name = "sun/security/ssl/StatusResponseManager$ResponseCacheEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_STATUSRESPONSEMANAGER_RESPONSECACHEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_STATUSRESPONSEMANAGER_RESPONSECACHEENTRY)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_STATUSRESPONSEMANAGER_RESPONSECACHEENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::StatusResponseManager_ResponseCacheEntry : public jni::object_base<"sun/security/ssl/StatusResponseManager$ResponseCacheEntry",
	java::lang::Object>
{
public:


protected:

	StatusResponseManager_ResponseCacheEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_STATUSRESPONSEMANAGER_RESPONSECACHEENTRY
