// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/ManagerFactoryParameters.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class KeyStoreBuilderParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::KeyStoreBuilderParameters>
{
	static constexpr fixed_string class_name = "javax/net/ssl/KeyStoreBuilderParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::net::ssl::ManagerFactoryParameters>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/KeyStore_Builder.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::KeyStoreBuilderParameters : public jni::object_base<"javax/net/ssl/KeyStoreBuilderParameters",
	java::lang::Object,
	javax::net::ssl::ManagerFactoryParameters>
{
public:

	static jni::ref<javax::net::ssl::KeyStoreBuilderParameters> new_object(jni::ref<java::security::KeyStore_Builder> p1) { return base_::new_object(p1); }
	static jni::ref<javax::net::ssl::KeyStoreBuilderParameters> new_object(jni::ref<java::util::List> p1) { return base_::new_object(p1); }
	jni::ref<java::util::List> getParameters() { return call_method<"getParameters", jni::ref<java::util::List>>(); }

protected:

	KeyStoreBuilderParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_KEYSTOREBUILDERPARAMETERS
