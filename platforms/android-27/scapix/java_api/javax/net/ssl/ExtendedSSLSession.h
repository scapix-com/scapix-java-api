// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_EXTENDEDSSLSESSION_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_EXTENDEDSSLSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class ExtendedSSLSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::ExtendedSSLSession>
{
	static constexpr fixed_string class_name = "javax/net/ssl/ExtendedSSLSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::net::ssl::SSLSession>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_EXTENDEDSSLSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_EXTENDEDSSLSESSION)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_EXTENDEDSSLSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::ExtendedSSLSession : public jni::object_base<"javax/net/ssl/ExtendedSSLSession",
	java::lang::Object,
	javax::net::ssl::SSLSession>
{
public:

	static jni::ref<javax::net::ssl::ExtendedSSLSession> new_object() { return base_::new_object(); }
	jni::ref<jni::array<java::lang::String>> getLocalSupportedSignatureAlgorithms() { return call_method<"getLocalSupportedSignatureAlgorithms", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getPeerSupportedSignatureAlgorithms() { return call_method<"getPeerSupportedSignatureAlgorithms", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::util::List> getRequestedServerNames() { return call_method<"getRequestedServerNames", jni::ref<java::util::List>>(); }

protected:

	ExtendedSSLSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_EXTENDEDSSLSESSION
