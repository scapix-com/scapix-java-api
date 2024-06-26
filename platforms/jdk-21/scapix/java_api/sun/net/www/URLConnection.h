// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/URLConnection.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_URLCONNECTION_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_URLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www { class URLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::URLConnection>
{
	static constexpr fixed_string class_name = "sun/net/www/URLConnection";
	using base_classes = std::tuple<scapix::java_api::java::net::URLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_URLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_URLCONNECTION)
#define SCAPIX_JAVA_API_SUN_NET_WWW_URLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::URLConnection : public jni::object_base<"sun/net/www/URLConnection",
	java::net::URLConnection>
{
public:

	static jni::ref<sun::net::www::URLConnection> new_object(jni::ref<java::net::URL> u) { return base_::new_object(u); }
	jni::ref<sun::net::www::MessageHeader> getProperties() { return call_method<"getProperties", jni::ref<sun::net::www::MessageHeader>>(); }
	void setProperties(jni::ref<sun::net::www::MessageHeader> properties) { return call_method<"setProperties", void>(properties); }
	void setRequestProperty(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"setRequestProperty", void>(key, value); }
	void addRequestProperty(jni::ref<java::lang::String> key, jni::ref<java::lang::String> value) { return call_method<"addRequestProperty", void>(key, value); }
	jni::ref<java::lang::String> getRequestProperty(jni::ref<java::lang::String> key) { return call_method<"getRequestProperty", jni::ref<java::lang::String>>(key); }
	jni::ref<java::util::Map> getRequestProperties() { return call_method<"getRequestProperties", jni::ref<java::util::Map>>(); }
	jni::ref<java::lang::String> getHeaderField(jni::ref<java::lang::String> name) { return call_method<"getHeaderField", jni::ref<java::lang::String>>(name); }
	jni::ref<java::util::Map> getHeaderFields() { return call_method<"getHeaderFields", jni::ref<java::util::Map>>(); }
	jni::ref<java::lang::String> getHeaderFieldKey(jint n) { return call_method<"getHeaderFieldKey", jni::ref<java::lang::String>>(n); }
	jni::ref<java::lang::String> getHeaderField(jint n) { return call_method<"getHeaderField", jni::ref<java::lang::String>>(n); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	void setContentType(jni::ref<java::lang::String> type) { return call_method<"setContentType", void>(type); }
	jint getContentLength() { return call_method<"getContentLength", jint>(); }
	jboolean canCache() { return call_method<"canCache", jboolean>(); }
	void close() { return call_method<"close", void>(); }
	static void setProxiedHost(jni::ref<java::lang::String> host) { return call_static_method<"setProxiedHost", void>(host); }
	static jboolean isProxiedHost(jni::ref<java::lang::String> host) { return call_static_method<"isProxiedHost", jboolean>(host); }

protected:

	URLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_URLCONNECTION
