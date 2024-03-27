// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class ConnectionClosedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::ConnectionClosedException>
{
	static constexpr fixed_string class_name = "org/apache/http/ConnectionClosedException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::ConnectionClosedException : public jni::object_base<"org/apache/http/ConnectionClosedException",
	java::io::IOException>
{
public:

	static jni::ref<org::apache::http::ConnectionClosedException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	ConnectionClosedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION