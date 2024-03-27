// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_URL_FWD
#define SCAPIX_JAVA_API_JAVA_NET_URL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class URL; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::URL>
{
	static constexpr fixed_string class_name = "java/net/URL";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_URL)
#define SCAPIX_JAVA_API_JAVA_NET_URL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Proxy.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/net/URLConnection.h>
#include <scapix/java_api/java/net/URLStreamHandler.h>
#include <scapix/java_api/java/net/URLStreamHandlerFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::URL : public jni::object_base<"java/net/URL",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::net::URL> new_object(jni::ref<java::lang::String> protocol, jni::ref<java::lang::String> host, jint port, jni::ref<java::lang::String> file) { return base_::new_object(protocol, host, port, file); }
	static jni::ref<java::net::URL> new_object(jni::ref<java::lang::String> protocol, jni::ref<java::lang::String> host, jni::ref<java::lang::String> file) { return base_::new_object(protocol, host, file); }
	static jni::ref<java::net::URL> new_object(jni::ref<java::lang::String> protocol, jni::ref<java::lang::String> host, jint port, jni::ref<java::lang::String> file, jni::ref<java::net::URLStreamHandler> handler) { return base_::new_object(protocol, host, port, file, handler); }
	static jni::ref<java::net::URL> new_object(jni::ref<java::lang::String> spec) { return base_::new_object(spec); }
	static jni::ref<java::net::URL> new_object(jni::ref<java::net::URL> context, jni::ref<java::lang::String> spec) { return base_::new_object(context, spec); }
	static jni::ref<java::net::URL> new_object(jni::ref<java::net::URL> context, jni::ref<java::lang::String> spec, jni::ref<java::net::URLStreamHandler> handler) { return base_::new_object(context, spec, handler); }
	static jni::ref<java::net::URL> of(jni::ref<java::net::URI> uri, jni::ref<java::net::URLStreamHandler> handler) { return call_static_method<"of", jni::ref<java::net::URL>>(uri, handler); }
	jni::ref<java::lang::String> getQuery() { return call_method<"getQuery", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPath() { return call_method<"getPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUserInfo() { return call_method<"getUserInfo", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAuthority() { return call_method<"getAuthority", jni::ref<java::lang::String>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	jint getDefaultPort() { return call_method<"getDefaultPort", jint>(); }
	jni::ref<java::lang::String> getProtocol() { return call_method<"getProtocol", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHost() { return call_method<"getHost", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFile() { return call_method<"getFile", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getRef() { return call_method<"getRef", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean sameFile(jni::ref<java::net::URL> other) { return call_method<"sameFile", jboolean>(other); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toExternalForm() { return call_method<"toExternalForm", jni::ref<java::lang::String>>(); }
	jni::ref<java::net::URI> toURI() { return call_method<"toURI", jni::ref<java::net::URI>>(); }
	jni::ref<java::net::URLConnection> openConnection() { return call_method<"openConnection", jni::ref<java::net::URLConnection>>(); }
	jni::ref<java::net::URLConnection> openConnection(jni::ref<java::net::Proxy> proxy) { return call_method<"openConnection", jni::ref<java::net::URLConnection>>(proxy); }
	jni::ref<java::io::InputStream> openStream() { return call_method<"openStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::lang::Object> getContent() { return call_method<"getContent", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getContent(jni::ref<jni::array<java::lang::Class>> classes) { return call_method<"getContent", jni::ref<java::lang::Object>>(classes); }
	static void setURLStreamHandlerFactory(jni::ref<java::net::URLStreamHandlerFactory> fac) { return call_static_method<"setURLStreamHandlerFactory", void>(fac); }

protected:

	URL(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URL
