// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/LinkedHashMap.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509KEYMANAGERIMPL_SIZEDMAP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509KEYMANAGERIMPL_SIZEDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class X509KeyManagerImpl_SizedMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::X509KeyManagerImpl_SizedMap>
{
	static constexpr fixed_string class_name = "sun/security/ssl/X509KeyManagerImpl$SizedMap";
	using base_classes = std::tuple<scapix::java_api::java::util::LinkedHashMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509KEYMANAGERIMPL_SIZEDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509KEYMANAGERIMPL_SIZEDMAP)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509KEYMANAGERIMPL_SIZEDMAP

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::X509KeyManagerImpl_SizedMap : public jni::object_base<"sun/security/ssl/X509KeyManagerImpl$SizedMap",
	java::util::LinkedHashMap>
{
public:


protected:

	X509KeyManagerImpl_SizedMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_X509KEYMANAGERIMPL_SIZEDMAP
