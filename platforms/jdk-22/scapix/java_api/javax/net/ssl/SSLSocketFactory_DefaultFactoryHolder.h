// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSOCKETFACTORY_DEFAULTFACTORYHOLDER_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSOCKETFACTORY_DEFAULTFACTORYHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SSLSocketFactory_DefaultFactoryHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SSLSocketFactory_DefaultFactoryHolder>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SSLSocketFactory$DefaultFactoryHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSOCKETFACTORY_DEFAULTFACTORYHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSOCKETFACTORY_DEFAULTFACTORYHOLDER)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSOCKETFACTORY_DEFAULTFACTORYHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::net::ssl::SSLSocketFactory_DefaultFactoryHolder : public jni::object_base<"javax/net/ssl/SSLSocketFactory$DefaultFactoryHolder",
	java::lang::Object>
{
public:


protected:

	SSLSocketFactory_DefaultFactoryHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSOCKETFACTORY_DEFAULTFACTORYHOLDER
