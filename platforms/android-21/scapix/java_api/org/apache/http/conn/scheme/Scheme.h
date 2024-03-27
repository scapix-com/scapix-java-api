// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::scheme { class Scheme; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::scheme::Scheme>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/scheme/Scheme";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/conn/scheme/SocketFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::scheme::Scheme : public jni::object_base<"org/apache/http/conn/scheme/Scheme",
	java::lang::Object>
{
public:

	static jni::ref<org::apache::http::conn::scheme::Scheme> new_object(jni::ref<java::lang::String> name, jni::ref<org::apache::http::conn::scheme::SocketFactory> factory, jint port) { return base_::new_object(name, factory, port); }
	jint getDefaultPort() { return call_method<"getDefaultPort", jint>(); }
	jni::ref<org::apache::http::conn::scheme::SocketFactory> getSocketFactory() { return call_method<"getSocketFactory", jni::ref<org::apache::http::conn::scheme::SocketFactory>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isLayered() { return call_method<"isLayered", jboolean>(); }
	jint resolvePort(jint port) { return call_method<"resolvePort", jint>(port); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Scheme(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_SCHEME