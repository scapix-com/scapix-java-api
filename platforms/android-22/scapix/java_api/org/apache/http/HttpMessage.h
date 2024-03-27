// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_HTTPMESSAGE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_HTTPMESSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class HttpMessage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::HttpMessage>
{
	static constexpr fixed_string class_name = "org/apache/http/HttpMessage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_HTTPMESSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_HTTPMESSAGE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_HTTPMESSAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/Header.h>
#include <scapix/java_api/org/apache/http/HeaderIterator.h>
#include <scapix/java_api/org/apache/http/ProtocolVersion.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::HttpMessage : public jni::object_base<"org/apache/http/HttpMessage",
	java::lang::Object>
{
public:

	jni::ref<org::apache::http::ProtocolVersion> getProtocolVersion() { return call_method<"getProtocolVersion", jni::ref<org::apache::http::ProtocolVersion>>(); }
	jboolean containsHeader(jni::ref<java::lang::String> p1) { return call_method<"containsHeader", jboolean>(p1); }
	jni::ref<jni::array<org::apache::http::Header>> getHeaders(jni::ref<java::lang::String> p1) { return call_method<"getHeaders", jni::ref<jni::array<org::apache::http::Header>>>(p1); }
	jni::ref<org::apache::http::Header> getFirstHeader(jni::ref<java::lang::String> p1) { return call_method<"getFirstHeader", jni::ref<org::apache::http::Header>>(p1); }
	jni::ref<org::apache::http::Header> getLastHeader(jni::ref<java::lang::String> p1) { return call_method<"getLastHeader", jni::ref<org::apache::http::Header>>(p1); }
	jni::ref<jni::array<org::apache::http::Header>> getAllHeaders() { return call_method<"getAllHeaders", jni::ref<jni::array<org::apache::http::Header>>>(); }
	void addHeader(jni::ref<org::apache::http::Header> p1) { return call_method<"addHeader", void>(p1); }
	void addHeader(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addHeader", void>(p1, p2); }
	void setHeader(jni::ref<org::apache::http::Header> p1) { return call_method<"setHeader", void>(p1); }
	void setHeader(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"setHeader", void>(p1, p2); }
	void setHeaders(jni::ref<jni::array<org::apache::http::Header>> p1) { return call_method<"setHeaders", void>(p1); }
	void removeHeader(jni::ref<org::apache::http::Header> p1) { return call_method<"removeHeader", void>(p1); }
	void removeHeaders(jni::ref<java::lang::String> p1) { return call_method<"removeHeaders", void>(p1); }
	jni::ref<org::apache::http::HeaderIterator> headerIterator() { return call_method<"headerIterator", jni::ref<org::apache::http::HeaderIterator>>(); }
	jni::ref<org::apache::http::HeaderIterator> headerIterator(jni::ref<java::lang::String> p1) { return call_method<"headerIterator", jni::ref<org::apache::http::HeaderIterator>>(p1); }
	jni::ref<org::apache::http::params::HttpParams> getParams() { return call_method<"getParams", jni::ref<org::apache::http::params::HttpParams>>(); }
	void setParams(jni::ref<org::apache::http::params::HttpParams> p1) { return call_method<"setParams", void>(p1); }

protected:

	HttpMessage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_HTTPMESSAGE
