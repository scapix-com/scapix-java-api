// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_CORECONNECTIONPNAMES_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_CORECONNECTIONPNAMES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::params { class CoreConnectionPNames; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::params::CoreConnectionPNames>
{
	static constexpr fixed_string class_name = "org/apache/http/params/CoreConnectionPNames";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_CORECONNECTIONPNAMES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_CORECONNECTIONPNAMES)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_CORECONNECTIONPNAMES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::params::CoreConnectionPNames : public jni::object_base<"org/apache/http/params/CoreConnectionPNames",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CONNECTION_TIMEOUT() { return get_static_field<"CONNECTION_TIMEOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAX_HEADER_COUNT() { return get_static_field<"MAX_HEADER_COUNT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MAX_LINE_LENGTH() { return get_static_field<"MAX_LINE_LENGTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOCKET_BUFFER_SIZE() { return get_static_field<"SOCKET_BUFFER_SIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SO_LINGER() { return get_static_field<"SO_LINGER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SO_TIMEOUT() { return get_static_field<"SO_TIMEOUT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> STALE_CONNECTION_CHECK() { return get_static_field<"STALE_CONNECTION_CHECK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TCP_NODELAY() { return get_static_field<"TCP_NODELAY", jni::ref<java::lang::String>>(); }


protected:

	CoreConnectionPNames(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_CORECONNECTIONPNAMES