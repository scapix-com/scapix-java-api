// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::utils { class URLEncodedUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::utils::URLEncodedUtils>
{
	static constexpr fixed_string class_name = "org/apache/http/client/utils/URLEncodedUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Scanner.h>
#include <scapix/java_api/org/apache/http/HttpEntity.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::utils::URLEncodedUtils : public jni::object_base<"org/apache/http/client/utils/URLEncodedUtils",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CONTENT_TYPE() { return get_static_field<"CONTENT_TYPE", jni::ref<java::lang::String>>(); }

	static jni::ref<org::apache::http::client::utils::URLEncodedUtils> new_object() { return base_::new_object(); }
	static jni::ref<java::util::List> parse(jni::ref<java::net::URI> uri, jni::ref<java::lang::String> encoding) { return call_static_method<"parse", jni::ref<java::util::List>>(uri, encoding); }
	static jni::ref<java::util::List> parse(jni::ref<org::apache::http::HttpEntity> entity) { return call_static_method<"parse", jni::ref<java::util::List>>(entity); }
	static jboolean isEncoded(jni::ref<org::apache::http::HttpEntity> entity) { return call_static_method<"isEncoded", jboolean>(entity); }
	static void parse(jni::ref<java::util::List> parameters, jni::ref<java::util::Scanner> scanner, jni::ref<java::lang::String> encoding) { return call_static_method<"parse", void>(parameters, scanner, encoding); }
	static jni::ref<java::lang::String> format(jni::ref<java::util::List> parameters, jni::ref<java::lang::String> encoding) { return call_static_method<"format", jni::ref<java::lang::String>>(parameters, encoding); }

protected:

	URLEncodedUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_UTILS_URLENCODEDUTILS
