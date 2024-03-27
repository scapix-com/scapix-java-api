// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/net/www/URLConnection.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FTP_FTPURLCONNECTION_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FTP_FTPURLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::ftp { class FtpURLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::ftp::FtpURLConnection>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/ftp/FtpURLConnection";
	using base_classes = std::tuple<scapix::java_api::sun::net::www::URLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FTP_FTPURLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FTP_FTPURLCONNECTION)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FTP_FTPURLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/Permission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::ftp::FtpURLConnection : public jni::object_base<"sun/net/www/protocol/ftp/FtpURLConnection",
	sun::net::www::URLConnection>
{
public:

	static jni::ref<sun::net::www::protocol::ftp::FtpURLConnection> new_object(jni::ref<java::net::URL> url) { return base_::new_object(url); }
	void connect() { return call_method<"connect", void>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::security::Permission> getPermission() { return call_method<"getPermission", jni::ref<java::security::Permission>>(); }
	void setRequestProperty(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"setRequestProperty", void>(key, value); }
	jni::ref<java::lang::String> getRequestProperty(jni::ref<java::lang::String> key) { return call_method<"getRequestProperty", jni::ref<java::lang::String>>(key); }
	void setConnectTimeout(jint timeout) { return call_method<"setConnectTimeout", void>(timeout); }
	jint getConnectTimeout() { return call_method<"getConnectTimeout", jint>(); }
	void setReadTimeout(jint timeout) { return call_method<"setReadTimeout", void>(timeout); }
	jint getReadTimeout() { return call_method<"getReadTimeout", jint>(); }

protected:

	FtpURLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_FTP_FTPURLCONNECTION