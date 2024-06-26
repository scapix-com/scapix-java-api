// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_URIPATTERNMATCHER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_URIPATTERNMATCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::protocol { class UriPatternMatcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::protocol::UriPatternMatcher>
{
	static constexpr fixed_string class_name = "org/apache/http/protocol/UriPatternMatcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_URIPATTERNMATCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_URIPATTERNMATCHER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_URIPATTERNMATCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::protocol::UriPatternMatcher : public jni::object_base<"org/apache/http/protocol/UriPatternMatcher",
	java::lang::Object>
{
public:

	static jni::ref<org::apache::http::protocol::UriPatternMatcher> new_object() { return base_::new_object(); }
	void register_(jni::ref<java::lang::String> pattern, jni::ref<java::lang::Object> handler) { return call_method<"register", void>(pattern, handler); }
	void unregister(jni::ref<java::lang::String> pattern) { return call_method<"unregister", void>(pattern); }
	void setHandlers(jni::ref<java::util::Map> map) { return call_method<"setHandlers", void>(map); }
	jni::ref<java::lang::Object> lookup(jni::ref<java::lang::String> requestURI) { return call_method<"lookup", jni::ref<java::lang::Object>>(requestURI); }

protected:

	UriPatternMatcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_URIPATTERNMATCHER
