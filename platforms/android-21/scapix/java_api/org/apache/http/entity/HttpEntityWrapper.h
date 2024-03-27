// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/HttpEntity.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::entity { class HttpEntityWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::entity::HttpEntityWrapper>
{
	static constexpr fixed_string class_name = "org/apache/http/entity/HttpEntityWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::HttpEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/org/apache/http/Header.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::entity::HttpEntityWrapper : public jni::object_base<"org/apache/http/entity/HttpEntityWrapper",
	java::lang::Object,
	org::apache::http::HttpEntity>
{
public:

	static jni::ref<org::apache::http::entity::HttpEntityWrapper> new_object(jni::ref<org::apache::http::HttpEntity> wrapped) { return base_::new_object(wrapped); }
	jboolean isRepeatable() { return call_method<"isRepeatable", jboolean>(); }
	jboolean isChunked() { return call_method<"isChunked", jboolean>(); }
	jlong getContentLength() { return call_method<"getContentLength", jlong>(); }
	jni::ref<org::apache::http::Header> getContentType() { return call_method<"getContentType", jni::ref<org::apache::http::Header>>(); }
	jni::ref<org::apache::http::Header> getContentEncoding() { return call_method<"getContentEncoding", jni::ref<org::apache::http::Header>>(); }
	jni::ref<java::io::InputStream> getContent() { return call_method<"getContent", jni::ref<java::io::InputStream>>(); }
	void writeTo(jni::ref<java::io::OutputStream> outstream) { return call_method<"writeTo", void>(outstream); }
	jboolean isStreaming() { return call_method<"isStreaming", jboolean>(); }
	void consumeContent() { return call_method<"consumeContent", void>(); }

protected:

	HttpEntityWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_HTTPENTITYWRAPPER