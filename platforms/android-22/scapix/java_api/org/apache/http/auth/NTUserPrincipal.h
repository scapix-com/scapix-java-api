// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/Principal.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_NTUSERPRINCIPAL_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_NTUSERPRINCIPAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::auth { class NTUserPrincipal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::auth::NTUserPrincipal>
{
	static constexpr fixed_string class_name = "org/apache/http/auth/NTUserPrincipal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::Principal>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_NTUSERPRINCIPAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_NTUSERPRINCIPAL)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_NTUSERPRINCIPAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::auth::NTUserPrincipal : public jni::object_base<"org/apache/http/auth/NTUserPrincipal",
	java::lang::Object,
	java::security::Principal>
{
public:

	static jni::ref<org::apache::http::auth::NTUserPrincipal> new_object(jni::ref<java::lang::String> domain, jni::ref<java::lang::String> username) { return base_::new_object(domain, username); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDomain() { return call_method<"getDomain", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUsername() { return call_method<"getUsername", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NTUserPrincipal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_AUTH_NTUSERPRINCIPAL
