// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TIMESTAMPTOKEN_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TIMESTAMPTOKEN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::timestamp { class TimestampToken; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::timestamp::TimestampToken>
{
	static constexpr fixed_string class_name = "sun/security/timestamp/TimestampToken";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TIMESTAMPTOKEN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TIMESTAMPTOKEN)
#define SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TIMESTAMPTOKEN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/sun/security/x509/AlgorithmId.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::timestamp::TimestampToken : public jni::object_base<"sun/security/timestamp/TimestampToken",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::timestamp::TimestampToken> new_object(jni::ref<jni::array<jbyte>> timestampTokenInfo) { return base_::new_object(timestampTokenInfo); }
	jni::ref<java::util::Date> getDate() { return call_method<"getDate", jni::ref<java::util::Date>>(); }
	jni::ref<sun::security::x509::AlgorithmId> getHashAlgorithm() { return call_method<"getHashAlgorithm", jni::ref<sun::security::x509::AlgorithmId>>(); }
	jni::ref<jni::array<jbyte>> getHashedMessage() { return call_method<"getHashedMessage", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::math::BigInteger> getNonce() { return call_method<"getNonce", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::lang::String> getPolicyID() { return call_method<"getPolicyID", jni::ref<java::lang::String>>(); }
	jni::ref<java::math::BigInteger> getSerialNumber() { return call_method<"getSerialNumber", jni::ref<java::math::BigInteger>>(); }

protected:

	TimestampToken(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_TIMESTAMP_TIMESTAMPTOKEN
