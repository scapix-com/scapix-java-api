// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/TrustManagerFactoryImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_TRUSTMANAGERFACTORYIMPL_SIMPLEFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_TRUSTMANAGERFACTORYIMPL_SIMPLEFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class TrustManagerFactoryImpl_SimpleFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::TrustManagerFactoryImpl_SimpleFactory>
{
	static constexpr fixed_string class_name = "sun/security/ssl/TrustManagerFactoryImpl$SimpleFactory";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::TrustManagerFactoryImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_TRUSTMANAGERFACTORYIMPL_SIMPLEFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_TRUSTMANAGERFACTORYIMPL_SIMPLEFACTORY)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_TRUSTMANAGERFACTORYIMPL_SIMPLEFACTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ssl::TrustManagerFactoryImpl_SimpleFactory : public jni::object_base<"sun/security/ssl/TrustManagerFactoryImpl$SimpleFactory",
	sun::security::ssl::TrustManagerFactoryImpl>
{
public:

	static jni::ref<sun::security::ssl::TrustManagerFactoryImpl_SimpleFactory> new_object() { return base_::new_object(); }

protected:

	TrustManagerFactoryImpl_SimpleFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_TRUSTMANAGERFACTORYIMPL_SIMPLEFACTORY