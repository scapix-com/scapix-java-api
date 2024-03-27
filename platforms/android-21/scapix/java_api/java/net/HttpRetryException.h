// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_HTTPRETRYEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_HTTPRETRYEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class HttpRetryException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::HttpRetryException>
{
	static constexpr fixed_string class_name = "java/net/HttpRetryException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_HTTPRETRYEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_HTTPRETRYEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_NET_HTTPRETRYEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::HttpRetryException : public jni::object_base<"java/net/HttpRetryException",
	java::io::IOException>
{
public:

	static jni::ref<java::net::HttpRetryException> new_object(jni::ref<java::lang::String> detail, jint code) { return base_::new_object(detail, code); }
	static jni::ref<java::net::HttpRetryException> new_object(jni::ref<java::lang::String> detail, jint code, jni::ref<java::lang::String> location) { return base_::new_object(detail, code, location); }
	jni::ref<java::lang::String> getLocation() { return call_method<"getLocation", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getReason() { return call_method<"getReason", jni::ref<java::lang::String>>(); }
	jint responseCode() { return call_method<"responseCode", jint>(); }

protected:

	HttpRetryException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_HTTPRETRYEXCEPTION
