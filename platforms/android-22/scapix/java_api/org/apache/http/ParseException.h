// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARSEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARSEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class ParseException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::ParseException>
{
	static constexpr fixed_string class_name = "org/apache/http/ParseException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARSEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARSEEXCEPTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARSEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::ParseException : public jni::object_base<"org/apache/http/ParseException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<org::apache::http::ParseException> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::ParseException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	ParseException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARSEEXCEPTION
