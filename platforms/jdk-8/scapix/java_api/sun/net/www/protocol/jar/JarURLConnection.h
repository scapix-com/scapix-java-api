// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/JarURLConnection.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::jar { class JarURLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::jar::JarURLConnection>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/jar/JarURLConnection";
	using base_classes = std::tuple<scapix::java_api::java::net::JarURLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/jar/JarEntry.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#include <scapix/java_api/sun/net/www/protocol/jar/Handler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::jar::JarURLConnection : public jni::object_base<"sun/net/www/protocol/jar/JarURLConnection",
	java::net::JarURLConnection>
{
public:

	static jni::ref<sun::net::www::protocol::jar::JarURLConnection> new_object(jni::ref<java::net::URL> p1, jni::ref<sun::net::www::protocol::jar::Handler> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::jar::JarFile> getJarFile() { return call_method<"getJarFile", jni::ref<java::util::jar::JarFile>>(); }
	jni::ref<java::util::jar::JarEntry> getJarEntry() { return call_method<"getJarEntry", jni::ref<java::util::jar::JarEntry>>(); }
	jni::ref<java::security::Permission> getPermission() { return call_method<"getPermission", jni::ref<java::security::Permission>>(); }
	void connect() { return call_method<"connect", void>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jint getContentLength() { return call_method<"getContentLength", jint>(); }
	jlong getContentLengthLong() { return call_method<"getContentLengthLong", jlong>(); }
	jni::ref<java::lang::Object> getContent() { return call_method<"getContent", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHeaderField(jni::ref<java::lang::String> p1) { return call_method<"getHeaderField", jni::ref<java::lang::String>>(p1); }
	void setRequestProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setRequestProperty", void>(p1, p2); }
	jni::ref<java::lang::String> getRequestProperty(jni::ref<java::lang::String> p1) { return call_method<"getRequestProperty", jni::ref<java::lang::String>>(p1); }
	void addRequestProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addRequestProperty", void>(p1, p2); }
	jni::ref<java::util::Map> getRequestProperties() { return call_method<"getRequestProperties", jni::ref<java::util::Map>>(); }
	void setAllowUserInteraction(jboolean p1) { return call_method<"setAllowUserInteraction", void>(p1); }
	jboolean getAllowUserInteraction() { return call_method<"getAllowUserInteraction", jboolean>(); }
	void setUseCaches(jboolean p1) { return call_method<"setUseCaches", void>(p1); }
	jboolean getUseCaches() { return call_method<"getUseCaches", jboolean>(); }
	void setIfModifiedSince(jlong p1) { return call_method<"setIfModifiedSince", void>(p1); }
	void setDefaultUseCaches(jboolean p1) { return call_method<"setDefaultUseCaches", void>(p1); }
	jboolean getDefaultUseCaches() { return call_method<"getDefaultUseCaches", jboolean>(); }

protected:

	JarURLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION
