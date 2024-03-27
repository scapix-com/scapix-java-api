// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_JARURLINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_JARURLINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::jar { class JarURLConnection_JarURLInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::jar::JarURLConnection_JarURLInputStream>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/jar/JarURLConnection$JarURLInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_JARURLINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_JARURLINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_JARURLINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::jar::JarURLConnection_JarURLInputStream : public jni::object_base<"sun/net/www/protocol/jar/JarURLConnection$JarURLInputStream",
	java::io::FilterInputStream>
{
public:

	void close() { return call_method<"close", void>(); }

protected:

	JarURLConnection_JarURLInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_JARURLCONNECTION_JARURLINPUTSTREAM