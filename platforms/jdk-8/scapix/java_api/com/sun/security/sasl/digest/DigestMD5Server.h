// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/security/sasl/digest/DigestMD5Base.h>
#include <scapix/java_api/javax/security/sasl/SaslServer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_DIGESTMD5SERVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_DIGESTMD5SERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::sasl::digest { class DigestMD5Server; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::sasl::digest::DigestMD5Server>
{
	static constexpr fixed_string class_name = "com/sun/security/sasl/digest/DigestMD5Server";
	using base_classes = std::tuple<scapix::java_api::com::sun::security::sasl::digest::DigestMD5Base, scapix::java_api::javax::security::sasl::SaslServer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_DIGESTMD5SERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_DIGESTMD5SERVER)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_DIGESTMD5SERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::security::sasl::digest::DigestMD5Server : public jni::object_base<"com/sun/security/sasl/digest/DigestMD5Server",
	com::sun::security::sasl::digest::DigestMD5Base,
	javax::security::sasl::SaslServer>
{
public:

	jni::ref<jni::array<jbyte>> evaluateResponse(jni::ref<jni::array<jbyte>> p1) { return call_method<"evaluateResponse", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<java::lang::String> getAuthorizationID() { return call_method<"getAuthorizationID", jni::ref<java::lang::String>>(); }

protected:

	DigestMD5Server(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_SASL_DIGEST_DIGESTMD5SERVER
