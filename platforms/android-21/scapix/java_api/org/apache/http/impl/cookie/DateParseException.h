// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_DATEPARSEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_DATEPARSEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class DateParseException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::DateParseException>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/DateParseException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_DATEPARSEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_DATEPARSEEXCEPTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_DATEPARSEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::DateParseException : public jni::object_base<"org/apache/http/impl/cookie/DateParseException",
	java::lang::Exception>
{
public:

	static jni::ref<org::apache::http::impl::cookie::DateParseException> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::impl::cookie::DateParseException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }

protected:

	DateParseException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_DATEPARSEEXCEPTION