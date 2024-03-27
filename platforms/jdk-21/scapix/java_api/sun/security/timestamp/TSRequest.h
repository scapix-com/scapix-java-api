// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TSREQUEST_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TSREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::timestamp { class TSRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::timestamp::TSRequest>
{
	static constexpr fixed_string class_name = "sun/security/timestamp/TSRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TSREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TSREQUEST)
#define SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TSREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/MessageDigest.h>
#include <scapix/java_api/java/security/cert/X509Extension.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::timestamp::TSRequest : public jni::object_base<"sun/security/timestamp/TSRequest",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::timestamp::TSRequest> new_object(jni::ref<java::lang::String> tSAPolicyID, jni::ref<jni::array<jbyte>> toBeTimeStamped, jni::ref<java::security::MessageDigest> messageDigest) { return base_::new_object(tSAPolicyID, toBeTimeStamped, messageDigest); }
	jni::ref<jni::array<jbyte>> getHashedMessage() { return call_method<"getHashedMessage", jni::ref<jni::array<jbyte>>>(); }
	void setVersion(jint version) { return call_method<"setVersion", void>(version); }
	void setPolicyId(jni::ref<java::lang::String> policyId) { return call_method<"setPolicyId", void>(policyId); }
	void setNonce(jni::ref<java::math::BigInteger> nonce) { return call_method<"setNonce", void>(nonce); }
	void requestCertificate(jboolean returnCertificate) { return call_method<"requestCertificate", void>(returnCertificate); }
	void setExtensions(jni::ref<jni::array<java::security::cert::X509Extension>> extensions) { return call_method<"setExtensions", void>(extensions); }
	jni::ref<jni::array<jbyte>> encode() { return call_method<"encode", jni::ref<jni::array<jbyte>>>(); }

protected:

	TSRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TSREQUEST