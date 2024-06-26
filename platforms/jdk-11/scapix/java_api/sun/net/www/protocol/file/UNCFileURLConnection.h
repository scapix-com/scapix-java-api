// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/www/protocol/file/FileURLConnection.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FILE_UNCFILEURLCONNECTION_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FILE_UNCFILEURLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::file { class UNCFileURLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::file::UNCFileURLConnection>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/file/UNCFileURLConnection";
	using base_classes = std::tuple<scapix::java_api::sun::net::www::protocol::file::FileURLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FILE_UNCFILEURLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FILE_UNCFILEURLCONNECTION)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FILE_UNCFILEURLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/Permission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::file::UNCFileURLConnection : public jni::object_base<"sun/net/www/protocol/file/UNCFileURLConnection",
	sun::net::www::protocol::file::FileURLConnection>
{
public:

	jni::ref<java::security::Permission> getPermission() { return call_method<"getPermission", jni::ref<java::security::Permission>>(); }

protected:

	UNCFileURLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FILE_UNCFILEURLCONNECTION
