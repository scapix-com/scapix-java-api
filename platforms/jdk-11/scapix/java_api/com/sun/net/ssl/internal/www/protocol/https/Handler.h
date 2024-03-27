// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/www/protocol/https/Handler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_SSL_INTERNAL_WWW_PROTOCOL_HTTPS_HANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_INTERNAL_WWW_PROTOCOL_HTTPS_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::ssl::internal::www::protocol::https { class Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::ssl::internal::www::protocol::https::Handler>
{
	static constexpr fixed_string class_name = "com/sun/net/ssl/internal/www/protocol/https/Handler";
	using base_classes = std::tuple<scapix::java_api::sun::net::www::protocol::https::Handler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_INTERNAL_WWW_PROTOCOL_HTTPS_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_SSL_INTERNAL_WWW_PROTOCOL_HTTPS_HANDLER)
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_INTERNAL_WWW_PROTOCOL_HTTPS_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::ssl::internal::www::protocol::https::Handler : public jni::object_base<"com/sun/net/ssl/internal/www/protocol/https/Handler",
	sun::net::www::protocol::https::Handler>
{
public:

	static jni::ref<com::sun::net::ssl::internal::www::protocol::https::Handler> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::net::ssl::internal::www::protocol::https::Handler> new_object(jni::ref<java::lang::String> proxy, jint port) { return base_::new_object(proxy, port); }

protected:

	Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_INTERNAL_WWW_PROTOCOL_HTTPS_HANDLER
