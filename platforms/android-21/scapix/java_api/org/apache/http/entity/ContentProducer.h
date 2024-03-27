// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTPRODUCER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTPRODUCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::entity { class ContentProducer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::entity::ContentProducer>
{
	static constexpr fixed_string class_name = "org/apache/http/entity/ContentProducer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTPRODUCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTPRODUCER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTPRODUCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::entity::ContentProducer : public jni::object_base<"org/apache/http/entity/ContentProducer",
	java::lang::Object>
{
public:

	void writeTo(jni::ref<java::io::OutputStream> p1) { return call_method<"writeTo", void>(p1); }

protected:

	ContentProducer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_ENTITY_CONTENTPRODUCER