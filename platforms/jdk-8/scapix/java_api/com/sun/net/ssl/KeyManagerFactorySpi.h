// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_SSL_KEYMANAGERFACTORYSPI_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_KEYMANAGERFACTORYSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::ssl { class KeyManagerFactorySpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::ssl::KeyManagerFactorySpi>
{
	static constexpr fixed_string class_name = "com/sun/net/ssl/KeyManagerFactorySpi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_KEYMANAGERFACTORYSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_SSL_KEYMANAGERFACTORYSPI)
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_KEYMANAGERFACTORYSPI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::ssl::KeyManagerFactorySpi : public jni::object_base<"com/sun/net/ssl/KeyManagerFactorySpi",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::net::ssl::KeyManagerFactorySpi> new_object() { return base_::new_object(); }

protected:

	KeyManagerFactorySpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_KEYMANAGERFACTORYSPI
