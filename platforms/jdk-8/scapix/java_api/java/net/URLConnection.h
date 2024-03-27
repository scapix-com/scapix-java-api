// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_URLCONNECTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_URLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class URLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::URLConnection>
{
	static constexpr fixed_string class_name = "java/net/URLConnection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_URLCONNECTION)
#define SCAPIX_JAVA_API_JAVA_NET_URLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/ContentHandlerFactory.h>
#include <scapix/java_api/java/net/FileNameMap.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/Permission.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::URLConnection : public jni::object_base<"java/net/URLConnection",
	java::lang::Object>
{
public:

	static jni::ref<java::net::FileNameMap> getFileNameMap() { return call_static_method<"getFileNameMap", jni::ref<java::net::FileNameMap>>(); }
	static void setFileNameMap(jni::ref<java::net::FileNameMap> p1) { return call_static_method<"setFileNameMap", void>(p1); }
	void connect() { return call_method<"connect", void>(); }
	void setConnectTimeout(jint p1) { return call_method<"setConnectTimeout", void>(p1); }
	jint getConnectTimeout() { return call_method<"getConnectTimeout", jint>(); }
	void setReadTimeout(jint p1) { return call_method<"setReadTimeout", void>(p1); }
	jint getReadTimeout() { return call_method<"getReadTimeout", jint>(); }
	jni::ref<java::net::URL> getURL() { return call_method<"getURL", jni::ref<java::net::URL>>(); }
	jint getContentLength() { return call_method<"getContentLength", jint>(); }
	jlong getContentLengthLong() { return call_method<"getContentLengthLong", jlong>(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getContentEncoding() { return call_method<"getContentEncoding", jni::ref<java::lang::String>>(); }
	jlong getExpiration() { return call_method<"getExpiration", jlong>(); }
	jlong getDate() { return call_method<"getDate", jlong>(); }
	jlong getLastModified() { return call_method<"getLastModified", jlong>(); }
	jni::ref<java::lang::String> getHeaderField(jni::ref<java::lang::String> p1) { return call_method<"getHeaderField", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Map> getHeaderFields() { return call_method<"getHeaderFields", jni::ref<java::util::Map>>(); }
	jint getHeaderFieldInt(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getHeaderFieldInt", jint>(p1, p2); }
	jlong getHeaderFieldLong(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"getHeaderFieldLong", jlong>(p1, p2); }
	jlong getHeaderFieldDate(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"getHeaderFieldDate", jlong>(p1, p2); }
	jni::ref<java::lang::String> getHeaderFieldKey(jint p1) { return call_method<"getHeaderFieldKey", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getHeaderField(jint p1) { return call_method<"getHeaderField", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::Object> getContent() { return call_method<"getContent", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getContent(jni::ref<jni::array<java::lang::Class>> p1) { return call_method<"getContent", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::security::Permission> getPermission() { return call_method<"getPermission", jni::ref<java::security::Permission>>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void setDoInput(jboolean p1) { return call_method<"setDoInput", void>(p1); }
	jboolean getDoInput() { return call_method<"getDoInput", jboolean>(); }
	void setDoOutput(jboolean p1) { return call_method<"setDoOutput", void>(p1); }
	jboolean getDoOutput() { return call_method<"getDoOutput", jboolean>(); }
	void setAllowUserInteraction(jboolean p1) { return call_method<"setAllowUserInteraction", void>(p1); }
	jboolean getAllowUserInteraction() { return call_method<"getAllowUserInteraction", jboolean>(); }
	static void setDefaultAllowUserInteraction(jboolean p1) { return call_static_method<"setDefaultAllowUserInteraction", void>(p1); }
	static jboolean getDefaultAllowUserInteraction() { return call_static_method<"getDefaultAllowUserInteraction", jboolean>(); }
	void setUseCaches(jboolean p1) { return call_method<"setUseCaches", void>(p1); }
	jboolean getUseCaches() { return call_method<"getUseCaches", jboolean>(); }
	void setIfModifiedSince(jlong p1) { return call_method<"setIfModifiedSince", void>(p1); }
	jlong getIfModifiedSince() { return call_method<"getIfModifiedSince", jlong>(); }
	jboolean getDefaultUseCaches() { return call_method<"getDefaultUseCaches", jboolean>(); }
	void setDefaultUseCaches(jboolean p1) { return call_method<"setDefaultUseCaches", void>(p1); }
	void setRequestProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setRequestProperty", void>(p1, p2); }
	void addRequestProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addRequestProperty", void>(p1, p2); }
	jni::ref<java::lang::String> getRequestProperty(jni::ref<java::lang::String> p1) { return call_method<"getRequestProperty", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Map> getRequestProperties() { return call_method<"getRequestProperties", jni::ref<java::util::Map>>(); }
	static void setDefaultRequestProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"setDefaultRequestProperty", void>(p1, p2); }
	static jni::ref<java::lang::String> getDefaultRequestProperty(jni::ref<java::lang::String> p1) { return call_static_method<"getDefaultRequestProperty", jni::ref<java::lang::String>>(p1); }
	static void setContentHandlerFactory(jni::ref<java::net::ContentHandlerFactory> p1) { return call_static_method<"setContentHandlerFactory", void>(p1); }
	static jni::ref<java::lang::String> guessContentTypeFromName(jni::ref<java::lang::String> p1) { return call_static_method<"guessContentTypeFromName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> guessContentTypeFromStream(jni::ref<java::io::InputStream> p1) { return call_static_method<"guessContentTypeFromStream", jni::ref<java::lang::String>>(p1); }

protected:

	URLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_URLCONNECTION
