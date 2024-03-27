// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SSLSessionContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SSLSessionContext>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SSLSessionContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONCONTEXT)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SSLSessionContext : public jni::object_base<"javax/net/ssl/SSLSessionContext",
	java::lang::Object>
{
public:

	jni::ref<javax::net::ssl::SSLSession> getSession(jni::ref<jni::array<jbyte>> p1) { return call_method<"getSession", jni::ref<javax::net::ssl::SSLSession>>(p1); }
	jni::ref<java::util::Enumeration> getIds() { return call_method<"getIds", jni::ref<java::util::Enumeration>>(); }
	void setSessionTimeout(jint p1) { return call_method<"setSessionTimeout", void>(p1); }
	jint getSessionTimeout() { return call_method<"getSessionTimeout", jint>(); }
	void setSessionCacheSize(jint p1) { return call_method<"setSessionCacheSize", void>(p1); }
	jint getSessionCacheSize() { return call_method<"getSessionCacheSize", jint>(); }

protected:

	SSLSessionContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSIONCONTEXT
