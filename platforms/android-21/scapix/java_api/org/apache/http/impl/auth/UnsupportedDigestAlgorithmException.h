// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::auth { class UnsupportedDigestAlgorithmException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::auth::UnsupportedDigestAlgorithmException>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/auth/UnsupportedDigestAlgorithmException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::auth::UnsupportedDigestAlgorithmException : public jni::object_base<"org/apache/http/impl/auth/UnsupportedDigestAlgorithmException",
	java::lang::RuntimeException>
{
public:

	static jni::ref<org::apache::http::impl::auth::UnsupportedDigestAlgorithmException> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::impl::auth::UnsupportedDigestAlgorithmException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<org::apache::http::impl::auth::UnsupportedDigestAlgorithmException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	UnsupportedDigestAlgorithmException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_UNSUPPORTEDDIGESTALGORITHMEXCEPTION