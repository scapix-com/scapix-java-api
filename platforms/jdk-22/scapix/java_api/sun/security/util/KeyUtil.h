// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class KeyUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::KeyUtil>
{
	static constexpr fixed_string class_name = "sun/security/util/KeyUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::KeyUtil : public jni::object_base<"sun/security/util/KeyUtil",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::KeyUtil> new_object() { return base_::new_object(); }
	static jint getKeySize(jni::ref<java::security::Key> key) { return call_static_method<"getKeySize", jint>(key); }
	static jint getKeySize(jni::ref<java::security::AlgorithmParameters> parameters) { return call_static_method<"getKeySize", jint>(parameters); }
	static jni::ref<java::lang::String> fullDisplayAlgName(jni::ref<java::security::Key> key) { return call_static_method<"fullDisplayAlgName", jni::ref<java::lang::String>>(key); }
	static void validate(jni::ref<java::security::Key> key) { return call_static_method<"validate", void>(key); }
	static void validate(jni::ref<java::security::spec::KeySpec> keySpec) { return call_static_method<"validate", void>(keySpec); }
	static jboolean isOracleJCEProvider(jni::ref<java::lang::String> providerName) { return call_static_method<"isOracleJCEProvider", jboolean>(providerName); }
	static jni::ref<jni::array<jbyte>> checkTlsPreMasterSecretKey(jint clientVersion, jint serverVersion, jni::ref<java::security::SecureRandom> random, jni::ref<jni::array<jbyte>> encoded, jboolean failure) { return call_static_method<"checkTlsPreMasterSecretKey", jni::ref<jni::array<jbyte>>>(clientVersion, serverVersion, random, encoded, failure); }
	static jni::ref<jni::array<jbyte>> trimZeroes(jni::ref<jni::array<jbyte>> b) { return call_static_method<"trimZeroes", jni::ref<jni::array<jbyte>>>(b); }
	static jni::ref<java::lang::String> hashAlgFromHSS(jni::ref<java::security::PublicKey> publicKey) { return call_static_method<"hashAlgFromHSS", jni::ref<java::lang::String>>(publicKey); }

protected:

	KeyUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL