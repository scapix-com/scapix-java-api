// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::entity { class ContentLengthStrategy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::entity::ContentLengthStrategy>
{
	static constexpr fixed_string class_name = "org/apache/http/entity/ContentLengthStrategy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::entity::ContentLengthStrategy : public jni::object_base<"org/apache/http/entity/ContentLengthStrategy",
	java::lang::Object>
{
public:

	static jint CHUNKED() { return get_static_field<"CHUNKED", jint>(); }
	static jint IDENTITY() { return get_static_field<"IDENTITY", jint>(); }

	jlong determineLength(jni::ref<org::apache::http::HttpMessage> p1) { return call_method<"determineLength", jlong>(p1); }

protected:

	ContentLengthStrategy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTLENGTHSTRATEGY
