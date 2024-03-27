// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/KeyManagerFactoryImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYMANAGERFACTORYIMPL_X509_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYMANAGERFACTORYIMPL_X509_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class KeyManagerFactoryImpl_X509; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::KeyManagerFactoryImpl_X509>
{
	static constexpr fixed_string class_name = "sun/security/ssl/KeyManagerFactoryImpl$X509";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::KeyManagerFactoryImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYMANAGERFACTORYIMPL_X509_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYMANAGERFACTORYIMPL_X509)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYMANAGERFACTORYIMPL_X509

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ssl::KeyManagerFactoryImpl_X509 : public jni::object_base<"sun/security/ssl/KeyManagerFactoryImpl$X509",
	sun::security::ssl::KeyManagerFactoryImpl>
{
public:

	static jni::ref<sun::security::ssl::KeyManagerFactoryImpl_X509> new_object() { return base_::new_object(); }

protected:

	KeyManagerFactoryImpl_X509(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYMANAGERFACTORYIMPL_X509
