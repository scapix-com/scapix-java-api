// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SSLParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SSLParameters>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SSLParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLPARAMETERS)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SSLParameters : public jni::object_base<"javax/net/ssl/SSLParameters",
	java::lang::Object>
{
public:

	static jni::ref<javax::net::ssl::SSLParameters> new_object() { return base_::new_object(); }
	static jni::ref<javax::net::ssl::SSLParameters> new_object(jni::ref<jni::array<java::lang::String>> cipherSuites) { return base_::new_object(cipherSuites); }
	static jni::ref<javax::net::ssl::SSLParameters> new_object(jni::ref<jni::array<java::lang::String>> cipherSuites, jni::ref<jni::array<java::lang::String>> protocols) { return base_::new_object(cipherSuites, protocols); }
	jni::ref<jni::array<java::lang::String>> getCipherSuites() { return call_method<"getCipherSuites", jni::ref<jni::array<java::lang::String>>>(); }
	void setCipherSuites(jni::ref<jni::array<java::lang::String>> cipherSuites) { return call_method<"setCipherSuites", void>(cipherSuites); }
	jni::ref<jni::array<java::lang::String>> getProtocols() { return call_method<"getProtocols", jni::ref<jni::array<java::lang::String>>>(); }
	void setProtocols(jni::ref<jni::array<java::lang::String>> protocols) { return call_method<"setProtocols", void>(protocols); }
	jboolean getNeedClientAuth() { return call_method<"getNeedClientAuth", jboolean>(); }
	void setNeedClientAuth(jboolean needClientAuth) { return call_method<"setNeedClientAuth", void>(needClientAuth); }
	jboolean getWantClientAuth() { return call_method<"getWantClientAuth", jboolean>(); }
	void setWantClientAuth(jboolean wantClientAuth) { return call_method<"setWantClientAuth", void>(wantClientAuth); }

protected:

	SSLParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLPARAMETERS