// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/URLStreamHandler.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JMOD_HANDLER_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JMOD_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::jmod { class Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::jmod::Handler>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/jmod/Handler";
	using base_classes = std::tuple<scapix::java_api::java::net::URLStreamHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JMOD_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JMOD_HANDLER)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JMOD_HANDLER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::jmod::Handler : public jni::object_base<"sun/net/www/protocol/jmod/Handler",
	java::net::URLStreamHandler>
{
public:

	static jni::ref<sun::net::www::protocol::jmod::Handler> new_object() { return base_::new_object(); }

protected:

	Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JMOD_HANDLER
