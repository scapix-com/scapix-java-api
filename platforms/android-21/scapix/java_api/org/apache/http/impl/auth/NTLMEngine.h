// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::auth { class NTLMEngine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::auth::NTLMEngine>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/auth/NTLMEngine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::auth::NTLMEngine : public jni::object_base<"org/apache/http/impl/auth/NTLMEngine",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> generateType1Msg(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"generateType1Msg", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> generateType3Msg(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return call_method<"generateType3Msg", jni::ref<java::lang::String>>(p1, p2, p3, p4, p5); }

protected:

	NTLMEngine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_NTLMENGINE
