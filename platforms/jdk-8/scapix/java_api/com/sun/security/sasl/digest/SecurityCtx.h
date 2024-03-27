// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_SECURITYCTX_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_SECURITYCTX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::sasl::digest { class SecurityCtx; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::sasl::digest::SecurityCtx>
{
	static constexpr fixed_string class_name = "com/sun/security/sasl/digest/SecurityCtx";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_SECURITYCTX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_SECURITYCTX)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_SECURITYCTX

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::security::sasl::digest::SecurityCtx : public jni::object_base<"com/sun/security/sasl/digest/SecurityCtx",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> wrap(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"wrap", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> unwrap(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"unwrap", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }

protected:

	SecurityCtx(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_SECURITYCTX