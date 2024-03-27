// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/entity/AbstractHttpEntity.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::entity { class ByteArrayEntity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::entity::ByteArrayEntity>
{
	static constexpr fixed_string class_name = "org/apache/http/entity/ByteArrayEntity";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::entity::AbstractHttpEntity, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::entity::ByteArrayEntity : public jni::object_base<"org/apache/http/entity/ByteArrayEntity",
	org::apache::http::entity::AbstractHttpEntity,
	java::lang::Cloneable>
{
public:

	static jni::ref<org::apache::http::entity::ByteArrayEntity> new_object(jni::ref<jni::array<jbyte>> b) { return base_::new_object(b); }
	jboolean isRepeatable() { return call_method<"isRepeatable", jboolean>(); }
	jlong getContentLength() { return call_method<"getContentLength", jlong>(); }
	jni::ref<java::io::InputStream> getContent() { return call_method<"getContent", jni::ref<java::io::InputStream>>(); }
	void writeTo(jni::ref<java::io::OutputStream> outstream) { return call_method<"writeTo", void>(outstream); }
	jboolean isStreaming() { return call_method<"isStreaming", jboolean>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	ByteArrayEntity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_BYTEARRAYENTITY
